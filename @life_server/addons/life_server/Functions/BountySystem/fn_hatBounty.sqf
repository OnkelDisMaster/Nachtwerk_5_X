/*
    File: fn_hatBounty.sqf
    Author: Valle

    Description:
	Sets Var if player is on bounty list.
    
*/
private ["_uid","_query","_queryResult"];
params [
	["_uid","",[""]],
	["_civ",objNull,[objNull]]
];

if (isNull _civ) exitWith {};
_query = format ["SELECT bountyID, bountyName, bounty FROM bounty WHERE bountyID='%1'",_uid];
_queryResult = [_query,2] call DB_fnc_asyncCall;

if !(count _queryResult isEqualTo 0) then {
	_civ setvariable ["hatKopfgeld",true,true];
} else {
	_civ setvariable ["hatKopfgeld",false,true];
};