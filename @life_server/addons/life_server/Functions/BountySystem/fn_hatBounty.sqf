/*
    File: fn_hatBounty.sqf
    Author: Valle

    Description:
	Sets Var if player is on bounty list.
    
*/
private ["_uid","_query","_queryResult","_bounty"];
params [
	["_uid","",[""]],
	["_civ",objNull,[objNull]]
];

if (isNull _civ) exitWith {};
_query = format ["SELECT bountyID, bountyName, bounty FROM bounty WHERE bountyID='%1'",_uid];
_queryResult = [_query,2] call DB_fnc_asyncCall;

if !(count _queryResult isEqualTo 0) then {_bounty = true;} else { _bounty = false;};

[_bounty] remoteExecCall ["life_fnc_kopfgeldVar",(owner _civ)];