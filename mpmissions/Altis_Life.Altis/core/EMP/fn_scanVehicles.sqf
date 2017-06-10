#include "..\..\script_macros.hpp"
/*
    File: scanVehicles.sqf
    Author: � 2014 nano2K - written for we-are-friendly.de
*/
private["_display","_list","_objects","_color"];
disableSerialization;
if(!isNull (findDisplay 3494)) then {
    _display = findDisplay 3494;
    _list = _display displayCtrl 2902;
    lbClear _list;
    nn_last_vehicles = [];
    _objects = nearestObjects [player, ["Air","Car","Ship"], 350];

    {
		hint format["Fahrzeug: %1", _x];
		uiSleep 1.2;
        if(vehicle player != _x) then {
            hint format["player: %1", vehicle player];
            uiSleep 2;
            //_color = [(typeOf _x),(_x getVariable "Life_VEH_color")] call life_fnc_vehicleColorStr;
            _color = ((M_CONFIG(getArray,"LifeCfgVehicles", _x,"textures") select ( _x getVariable "Life_VEH_color")) select 0);
            hint format["color: %1", _color];
            uiSleep 2;
            //_color = "Testfarbe";
			if (isNil "_color") then {_color = ""};
			_text = format["(%1)", _color];
			if (_text == "()") then {
				_text = "";
			};
            _list lbAdd format ["%1 - %2 (%3)", getText(configFile >> "cfgVehicles" >> typeOf _x >> "DisplayName"), _text, round(player distance _x)];
            nn_last_vehicles set [count nn_last_vehicles, _x];
        };
    } foreach _objects;
};