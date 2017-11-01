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
diag_log format ["%1 ruft Kopfgeldbetrag von %2 ab...",name _hunter, name _civ];

if (isNull _civ || isNull _hunter) exitWith {};

private ["_amount","_bonusCash","_bonusKonto","_BonusID","_query","_queryResult"];

_BonusID = "00000000000000001";
_bonusCash = 0;

/*
private _uid = getPlayerUID _civ;
private _query = format ["SELECT bountyID, bountyName, bounty FROM bounty WHERE bountyID='%1'",_uid];
private _queryResult = [_query,2] call DB_fnc_asyncCall;

if !(count _queryResult isEqualTo 0) then {
    _amount = _queryResult param [2];
    if !(_amount isEqualTo 0) then {
        [_civ,_hunter,_amount] remoteExecCall ["life_fnc_bountyBetrag",(owner _hunter)];
    } else {[_civ,_hunter,0] remoteExecCall ["life_fnc_bountyBetrag",(owner _hunter)];};
} else {
	[_civ,_hunter,0] remoteExecCall ["life_fnc_bountyBetrag",(owner _hunter)];
};

*/

//Bonus Teil
_query = format ["SELECT bountyID, bountyName, bounty WHERE bountyID='%1'",_BonusID];
_queryResult = [_query,2] call DB_fnc_asyncCall;
if !(count _queryResult isEqualTo 0) then {
	_bonusKonto = _queryResult param [2];
/*	_bonusCash =  _bonusKonto * 0.25;//(round(random(30)+1)/100);
	_bonusKonto = _bonusKonto - _bonusCash;
	
	_query = format ["UPDATE bounty SET bounty='%1' WHERE bountyID ='%2'",_bonusKonto,_BonusID];
	[_query,2] call DB_fnc_asyncCall;	*/
	[_civ,_hunter,_bonusKonto] remoteExecCall ["life_fnc_bountyBetrag",(owner _hunter)];
};