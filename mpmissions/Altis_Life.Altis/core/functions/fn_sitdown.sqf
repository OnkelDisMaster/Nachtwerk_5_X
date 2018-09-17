#include "..\..\script_macros.hpp"
/*
 File: sitdown.sqf
 Author: Valle1337 @ Nachtwerk
 Description:
 Auf nem Stuhl sitzen soll cool sein, hab ich mal gehört...
*/
private ["_chair","_dir","_z"];
_chair = cursorTarget;

if (life_sitting) exitWith { hint "Du sitzt bereits!"; };
if (player getVariable ["isTazed",false]) exitWith { hint "Während du getasert bist darfst du das nicht!";};

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
player setPos (getPos cursorTarget);  
player setDir ((getDir cursorTarget) - 180);  
player setPosATL (getPosATL cursorTarget);

life_sitting = true;
[player,"Crew","switch",true] remoteExecCall ["life_fnc_animSync",RCLIENT];
_action = player addAction["Aufstehen", life_fnc_standup,cursorTarget,10,false,false,"",'life_sitting'];
waitUntil { !life_sitting || !(alive player) || player distance (getPos _chair) > 2 };
player removeAction _action;
life_sitting = false;
