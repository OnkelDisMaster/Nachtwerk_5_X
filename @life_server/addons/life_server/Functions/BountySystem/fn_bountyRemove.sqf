/*
    File: fn_bountyRemove.sqf
	Author: !TS JORDAN
	Modified by Valle @Nachtwerk Community
	Originally Made for: Underbelly ArmA 

    Description:
    Removes a person from the bounty list.
*/
private _uid = param [0,"",[""]];
private ["_Kopfgeld","_delKopfgeld","_Bonus","_BonusID"];
if (_uid isEqualTo "") exitWith {}; //Bad data
//diag_log format ["UID: %1", _uid];

private _query = format ["SELECT bounty FROM bounty WHERE bountyID='%1'",_uid];
private _queryResult = [_query,2] call DB_fnc_asyncCall;
_BonusID = "00000000000000001";

if !(count _queryResult isEqualTo 0) then 
{
    _Kopfgeld = _queryResult param [0];

	_delKopfgeld = (_Kopfgeld * 1.5);

	if (life_atmbank > _delKopfgeld) then 
	{
		life_atmbank = life_atmbank - _delKopfgeld;
		
		private _query = format ["SELECT bounty FROM bounty WHERE bountyID='%1'",_BonusID];
		private _queryResult = [_query,2] call DB_fnc_asyncCall;
		
		_Bonus = _queryResult param [0] + (_delKopfgeld - _Kopfgeld);
		private _query = format ["UPDATE bounty SET bounty='%1' WHERE bountyID ='%2'",_Bonus,_BonusID];
		[_query,2] call DB_fnc_asyncCall;
		
		hint format ["Du hast %1$ Kopfgeld für %2$ entfernt",_Kopfgeld,_delKopfgeld];
		[1] call SOCK_fnc_updatePartial;
	} else {
		hint format ["Du hast nicht genügend Geld auf dem Konto um %1$ Kopfgeld zu entfernen!",_Kopfgeld];
	};

	private _query = format ["DELETE FROM bounty WHERE bountyID ='%1'",_uid];
	[_query,2] call DB_fnc_asyncCall;

} else { hint " Error";};