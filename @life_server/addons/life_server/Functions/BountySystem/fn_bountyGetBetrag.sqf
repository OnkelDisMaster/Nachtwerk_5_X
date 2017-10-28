/*
    File: fn_bountyGetBetrag.sqf
    Author: Valle

    Description:
	Bountyhunter gets payed if he delivers the target near a bh marker.
    
*/

params [
    ["_civ",objNull,[objNull]],
    ["_hunter",objNull,[objNull]]
];
diag_log format ["Get Bounty Betrag..."];

if (isNull _civ || isNull _hunter) exitWith {};
private _uid = getPlayerUID _civ;
private _query = format ["SELECT bountyID, bountyName, bounty FROM bounty WHERE bountyID='%1'",_uid];
private _queryResult = [_query,2] call DB_fnc_asyncCall;

private "_amount";
if !(count _queryResult isEqualTo 0) then {
    _amount = _queryResult param [2];
    if !(_amount isEqualTo 0) then {
        [_civ,_hunter,_amount] remoteExecCall ["life_fnc_bountyBetrag",(owner _hunter)];
    } else {[_civ,_hunter,0] remoteExecCall ["life_fnc_bountyBetrag",(owner _hunter)];};
} else {
	[_civ,_hunter,0] remoteExecCall ["life_fnc_bountyBetrag",(owner _hunter)];
};