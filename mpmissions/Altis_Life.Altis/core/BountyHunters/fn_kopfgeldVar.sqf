/*
    File: fn_kopfgeldVar.sqf
    Author: Valle

    Description:
	Sets Var if player is on bounty list.
    
*/
private ["_query","_queryResult"];
params [
	["_bounty",false,[false]]
];

if (_bounty) then {player setvariable ["hatKopfgeld",true,true];} else {player setvariable ["hatKopfgeld",false,true];};

[0,format["Bounty Var von %1 ist nun %2",name player, _bounty]] remoteExecCall ["life_fnc_broadcast",RCLIENT];