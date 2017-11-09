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