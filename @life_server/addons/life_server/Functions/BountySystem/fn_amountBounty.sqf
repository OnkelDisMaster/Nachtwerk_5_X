/*
    File: fn_amountBounty.sqf
    Author: !TS JORDAN
	Modified by Valle @Nachtwerk Community
	
    Description:
    Checks if the person is on the bounty list and awards the bountyH for killing them.
*/
params [
    ["_uid","",[""]],
    ["_civ",objNull,[objNull]],
    ["_cop",objNull,[objNull]],
	["_lebend",false,[false]],
	["_bonus",0]
];
if (isNull _civ || isNull _cop) exitWith {};
private ["_amount","_query","_queryResult"];

_query = format ["SELECT bountyID, bountyName, bounty FROM bounty WHERE bountyID='%1'",_uid];
_queryResult = [_query,2] call DB_fnc_asyncCall;

if !(count _queryResult isEqualTo 0) then {
	_amount = _queryResult param [2];

	if !(_amount isEqualTo 0) then {
		[_amount,_bonus] remoteExecCall ["life_fnc_bountyHunterReceive",(owner _cop)];
	};
	if ((_lebend) && (side _civ isEqualTo civilian)) then {[_civ, 5] call life_fnc_arrestAction;};
};