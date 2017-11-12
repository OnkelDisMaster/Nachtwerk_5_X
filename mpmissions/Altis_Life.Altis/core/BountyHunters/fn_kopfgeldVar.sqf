/*
    File: fn_kopfgeldVar.sqf
    Author: Valle

    Description:
	Sets Var if player is on bounty list.
    
*/
private ["_bounty","_zahl","_query","_queryResult"];
_bounty = param [0,false,[false]];

if (_bounty) then {
	player setVariable["hatKopfgeld",true,true];
} else {
	player setVariable["hatKopfgeld",false,true];
};