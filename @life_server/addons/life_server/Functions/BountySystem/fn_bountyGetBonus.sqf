/*
    File: fn_bountyGetBonus.sqf
    Author: Valle
    Description:
	Bountyhunter gets payed if he delivers the target near a bh marker.
    
*/
params [
    ["_uid","",[""]],
    ["_civ",objNull,[objNull]],
    ["_cop",objNull,[objNull]],
	["_lebend",false,[false]]
];

private ["_amount","_bonusCash","_bonusKonto","_BonusID","_query","_queryResult"];

_BonusID = "00000000000000001";
_bonusCash = 0;

//Bonus Teil
_query = format ["SELECT bountyID, bountyName, bounty FROM bounty WHERE bountyID='%1'",_BonusID];
_queryResult = [_query,2] call DB_fnc_asyncCall;
if !(count _queryResult isEqualTo 0) then {
	_bonusKonto = _queryResult param [2];
	_bonusCash =  _bonusKonto * (round(random(30)+1)/100);
	_bonusKonto = _bonusKonto - _bonusCash;
	
	_query = format ["UPDATE bounty SET bounty='%1' WHERE bountyID ='%2'",_bonusKonto,_BonusID];
	[_query,2] call DB_fnc_asyncCall;
};
[_uid,_civ,_cop,_lebend,_bonusCash] remoteExecCall ["life_fnc_amountBounty",RSERV];
diag_log format ["%1 hat einen Kopfgeldbonus von $%2 bekommen",name _cop,_bonusCash];
