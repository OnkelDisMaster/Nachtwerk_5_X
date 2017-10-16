/*
    File: fn_amountBounty.sqf
    Author: !TS JORDAN
	Originally Made for: Underbelly ArmA 

    Description:
    Checks if the person is on the bounty list and awards the bountyH for killing them.
*/
params [
    ["_uid","",[""]],
    ["_civ",objNull,[objNull]],
    ["_cop",objNull,[objNull]],
	["_lebend",false]
];
if (isNull _civ || isNull _cop) exitWith {};

private _query = format ["SELECT bountyID, bountyName, bounty FROM bounty WHERE bountyID='%1'",_uid];
private _queryResult = [_query,2] call DB_fnc_asyncCall;

private "_amount";
if !(count _queryResult isEqualTo 0) then {
    _amount = _queryResult param [2];
    if !(_amount isEqualTo 0) then {
        [_amount,_amount] remoteExecCall ["life_fnc_bountyHunterReceive",(owner _cop)];
    };
	if (_lebend) then {[_civ, 5] call life_fnc_arrestAction;};
};
