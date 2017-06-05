/*
	File: vehicleEmpd.sqf
	Author: � 2014 nano2K - written for we-are-friendly.de
*/
private["_vehicle"];
_vehicle =  [_this,0,Objnull,[Objnull]] call BIS_fnc_param;
if(isNull _vehicle) exitWith {};
if((_vehicle getVariable ["nano_empd", false])) exitWith {};
_vehicle setVariable["nano_empd",true,true];
if(_vehicle isKindOf "Car") then {
	hint"Sie werden gerade EMP!!\n Fahren Sie sofort Rechts an die Seite!!";
	_vehicle say3D "empwarn";
	uiSleep 3.35;
	hint"Sie werden gerade EMP!!\n Fahren Sie sofort Rechts an die Seite!!";
	_vehicle say3D "empwarn";
	uiSleep 3.35;
	hint"Sie werden gerade EMP!!\n Fahren Sie sofort Rechts an die Seite!!";
	_vehicle say3D "empwarn";
	uiSleep 3.35;
	hint"Sie werden gerade EMP!!\n Fahren Sie sofort Rechts an die Seite!!";
	_vehicle say3D "empwarn";
	uiSleep 3.35;
	hint"Sie werden gerade EMP!!\n Fahren Sie sofort Rechts an die Seite!!";
	_vehicle say3D "empwarn";
	uiSleep 3.35;
	hint"Sie werden gerade EMP!!\n Fahren Sie sofort Rechts an die Seite!!";
	if(local _vehicle) then {
		_vehicle setHit [getText(configFile >> "cfgVehicles" >> typeOf _vehicle >> "HitPoints" >> "HitEngine" >> "name"), 1];
		uiSleep (2 * 60);
		_vehicle setHit [getText(configFile >> "cfgVehicles" >> typeOf _vehicle >> "HitPoints" >> "HitEngine" >> "name"), 0];
	};
};
if(_vehicle isKindOf "Air") then {
	hint"Sie werden gerade EMP!!\n Landen Sie Sofort!!";
	_vehicle say3D "empwarn";
	uiSleep 3.35;
	hint"Sie werden gerade EMP!!\n Landen Sie Sofort!!";
	_vehicle say3D "empwarn";
	uiSleep 3.35;
	hint"Sie werden gerade EMP!!\n Landen Sie Sofort!!";
	_vehicle say3D "empwarn";
	uiSleep 3.35;
	hint"Sie werden gerade EMP!!\n Landen Sie Sofort!!";
	_vehicle say3D "empwarn";
	uiSleep 3.35;
	hint"Sie werden gerade EMP!!\n Landen Sie Sofort!!";
	_vehicle say3D "empwarn";
	uiSleep 3.35;
	hint"Sie werden gerade EMP!!\n Landen Sie Sofort!!";
	if(local _vehicle) then {
		_vehicle setHit [getText(configFile >> "cfgVehicles" >> typeOf _vehicle >> "HitPoints" >> "HitEngine" >> "name"), 1];
		uiSleep (3 * 60);
		_vehicle setHit [getText(configFile >> "cfgVehicles" >> typeOf _vehicle >> "HitPoints" >> "HitEngine" >> "name"), 0];
	}
};
if(_vehicle isKindOf "Ship") then {
	hint"Sie werden gerade EMP!!\n Bleiben Sie Sofort stehen!!";
	_vehicle say3D "empwarn";
	uiSleep 3.35;
	if(local _vehicle) then {
		_vehicle setHit [getText(configFile >> "cfgVehicles" >> typeOf _vehicle >> "HitPoints" >> "HitEngine" >> "name"), 1];
		uiSleep (3 * 60);
		_vehicle setHit [getText(configFile >> "cfgVehicles" >> typeOf _vehicle >> "HitPoints" >> "HitEngine" >> "name"), 0];
	}
};
_vehicle setVariable["nano_empd",false,true];