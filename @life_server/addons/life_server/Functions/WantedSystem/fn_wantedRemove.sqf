/*
	File: fn_wantedRemove.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Removes a person from the wanted list.
*/
<<<<<<< HEAD
private["_uid","_query"];
_uid = [_this,0,"",[""]] call BIS_fnc_param;
if (_uid isEqualTo "") exitWith {}; //Bad data

_query = format["UPDATE wanted SET active = '0', wantedCrimes = '[]', wantedBounty = 0 WHERE wantedID='%1'",_uid];
[_query,2] call DB_fnc_asyncCall;
=======
private["_uid","_index"];
_uid = [_this,0,"",[""]] call BIS_fnc_param;
if(_uid == "") exitWith {}; //Bad data

_index = [_uid,life_wanted_list] call TON_fnc_index;
if(_index == -1) exitWith {};
life_wanted_list set[_index,-1];
life_wanted_list = life_wanted_list - [-1];
[[],_uid] spawn TON_fnc_saveBounties;
>>>>>>> origin/master
