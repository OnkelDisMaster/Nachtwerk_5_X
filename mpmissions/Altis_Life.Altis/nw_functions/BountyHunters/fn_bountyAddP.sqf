#include "..\..\script_macros.hpp"
/*
    File: fn_bountyAddP.sqf
    Author: !TS JORDAN
	Originally Made for: Underbelly ArmA 

    Description: Gather the required info to send to the DB. 
*/
if !(playerSide isEqualTo civilian) exitWith {hint localize "STR_bounty_bountyList_notBH";};
if ((lbCurSel 97600) isEqualTo -1) exitWith {hint localize "STR_bounty_bountyList_noPlayerSelected";};
if ((lbCurSel 97700) isEqualTo -1) exitWith {hint localize "STR_bounty_bountyList_noAmountSelected";};
private _unit = lbData [97600,lbCurSel 97600];
_unit = call compile format ["%1",_unit];
private _amount = lbData [97700,lbCurSel 97700];
private _unitsToNotify = [];
private _amountP = parseNumber _amount;
if (isNil "_unit") exitWith {};
if (isNull _unit) exitWith {};
{
	if(_x getVariable ["isBountyH",true]) then {_unitsToNotify pushBack _x};
} forEach playableUnits;

if (life_cash < _amountP) then {
	hint "Du hast nicht genügend Bargeld dabei, wähle einen kleineren Betrag aus oder gehe zu einem ATM.";
} else {
	[1,[_unit,180,"Mil_dot",format["%1 - zuletzt gesichteter Kopfgeld Aufenthaltsort",name _unit]]] remoteExec ["life_fnc_markers",_unitsToNotify];
	life_cash = life_cash - _amountP;
	
	if (life_HC_isActive) then {
		[getPlayerUID _unit,_unit getVariable ["realname",name _unit],_amount] remoteExecCall ["HC_fnc_bountyAdd",HC_Life];
		[getPlayerUID _unit,_unit getVariable ["realname",name _unit],_amount,_unitsToNotify] remoteExecCall ["HC_fnc_bountyAmountGather",HC_Life];
	} else {
		[getPlayerUID _unit,_unit getVariable ["realname",name _unit],_amount] remoteExecCall ["life_fnc_bountyAdd",RSERV];
		[getPlayerUID _unit,_unit getVariable ["realname",name _unit],_amount,_unitsToNotify] remoteExecCall ["life_fnc_bountyAmountGather",RSERV];
	};
	
	_unit setvariable ["hatKopfgeld",true,true];
};

