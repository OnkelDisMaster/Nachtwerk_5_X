/*
    File: fn_bountyRemove.sqf
	Author: !TS JORDAN
	Modified by Valle @Nachtwerk Community
	
    Description:
    Removes a person from the bounty list.
*/
private ["_Kopfgeld","_delKopfgeld","_Bonus","_BonusID","_uid"];
_uid = param [0,"",[""]];
if (_uid isEqualTo "") exitWith {}; //Bad data
_Kopfgeld = param [1,0];

if (_Kopfgeld != 0) then
	{
		_BonusID = "00000000000000001";

		_delKopfgeld = (_Kopfgeld * 1.5);
			
		private _query = format ["SELECT bounty FROM bounty WHERE bountyID='%1'",_BonusID];
		private _queryResult = [_query,2] call DB_fnc_asyncCall;
			
		_Bonus = (_queryResult param [0]) + (_delKopfgeld - _Kopfgeld);
		private _query = format ["UPDATE bounty SET bounty='%1' WHERE bountyID ='%2'",_Bonus,_BonusID];
		[_query,2] call DB_fnc_asyncCall;
	};
	
	private _query = format ["DELETE FROM bounty WHERE bountyID ='%1'",_uid];
	[_query,2] call DB_fnc_asyncCall;

	
