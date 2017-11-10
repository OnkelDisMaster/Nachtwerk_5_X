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


[0,format["Spieler: %1 mit bvar: %2", profileName, _bounty]] remoteExecCall ["life_fnc_broadcast",RCLIENT];
CASH = 1337;