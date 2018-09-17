#include "..\..\script_macros.hpp"
/*
 File: sitdown.sqf
 Author: John "Paratus" VanderZwet
 Description:
 Sit in a chair!
*/
private ["_chair","_unit","_dir","_z","_posPlayer","_posATL"];
_chair = _this select 0; 
_unit = player;
/*
if (life_sitting) exitWith { hint "Du sitzt bereits!"; };
if (vehicle _unit != _unit) exitWith { hint "Du darfst das nicht in einem Fahrzeug tun!"; };
if (_unit getVariable ["restrained",false]) exitWith { hint "Als Gefangener darfst du das nicht!"; };
if (_unit distance _chair > 4) exitWith { hint "Du musst näher an den Stuhl um dich hinzusetzen!";};
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
_posPlayer = getPosATL player;

player setPos _posATL;
player setDir (direction _chair);

life_sitting = true;
_chair setVariable ["sitting", true, true];
[_unit,"Crew","switch",true] remoteExecCall ["life_fnc_animSync",RCLIENT];
_action = player addAction["Aufstehen", standup,cursorTarget,10,false,false,"",'life_sitting'];
waitUntil { !life_sitting || !(alive _unit) || player distance (getPos _chair) > 2 };
_unit removeAction _action;
life_sitting = false;
_chair setVariable ["sitting", false, false];
