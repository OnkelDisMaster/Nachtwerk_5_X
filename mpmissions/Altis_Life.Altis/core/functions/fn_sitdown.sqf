#include "..\..\script_macros.hpp"
/*
 File: sitdown.sqf
 Author: John "Paratus" VanderZwet
 Description:
 Sit in a chair!
*/
private ["_chair","_unit","_dir","_z"];
_chair = _this select 0; 
_unit = player;
/*
if (!isNull life_sitting) exitWith { hint "Du sitzt bereits!"; };
if (vehicle _unit != _unit) exitWith { hint "Du darfst das nusst näher an den Stuhl um dich hinzusetzen!"; };
if (_unit getVariable ["restrained",false]) exitWith { hint "Alsicht in einem Fahrzeug tun!!"; };
if (_unit distance _chair > 4) exitWith { hint "Du m Gefangener darfst du das nicht!";};
if (_unit getVariable ["isTazed",false]) exitWith { hint "Während du getasert bist darfst du das nicht!";};
if (!isNull (_chair getVariable ["sitting", objNull])) exitWith { hint "Da sitzt bereits jemand!"; };
*/
_dir = switch (typeOf _chair) do
{
 case "Land_ChairPlastic_F": { 270 };
 case "Land_CampingChair_V1_F": { 180 };
 case "Land_CampingChair_V2_F": { 180 };
 case "Land_ChairWood_F": { 90 };
 case "Land_RattanChair_01_F": { 90 };
 case "Land_OfficeChair_01_F": { 180 };
 case "Land_Bench_F": { 90 };
 default { 180 };
};
_z = switch (typeOf _chair) do
{
 default { 0 };
};
_posATL = getPosATL _chair;
_obj = "Land_ClutterCutter_small_F" createVehicle (_posATL);
_obj setPosATL (_posATL);
_obj setDir ((direction _chair) - _dir);
_obj setVariable ["idleTime", time, true];
//_unit attachTo [_obj,[0,0,_z]];
life_sitting = _obj;
_chair setVariable ["sitting", _unit, true];
[_unit,"Crew","switch",true] remoteExecCall ["life_fnc_animSync",RCLIENT];
_action = player addAction["Aufstehen", standup,cursorTarget,10,false,false,"",'life_sitting'];
waitUntil { isNull life_sitting || !(alive _unit) || player distance (getPos _chair) > 2 };
_unit removeAction _action;
life_sitting = objNull;
_chair setVariable ["sitting", nil, true];
if (isNull attachedTo _unit) then
{
 if (attachedTo _unit == _obj) then { detach _unit; deleteVehicle _obj; };
};