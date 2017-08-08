#include "..\..\script_macros.hpp"
/*
    File: fn_wantedGrab.sqf
    Author: ColinM

    Description:
    Prepare the array to query the crimes.
*/
private["_display","_tab","_crimes","_mylist","_active","_data"];
disableSerialization;

_mylist = [];
_display = findDisplay 2400;
_tab = _display displayCtrl 2402;
_data = [_this,0,[],[[]]] call BIS_fnc_param;
_crimes = _data select 0;
_active = 1;

hintSilent "Daten werden geladen...";
if (_active isEqualTo 1) exitWith {hint format["data: %1",_data];};

lbClear _tab;

{
    _crime = _x;
    if (!(_crime in _mylist)) then
    {
        _mylist pushBack _crime;
        _tab lbAdd format[localize "STR_Wanted_Count",{_x == _crime} count _crimes,localize _crime];
    };
} forEach _crimes;

ctrlSetText[2403,format[localize "STR_Wanted_Bounty",[(_data select 1)] call life_fnc_numberText]];