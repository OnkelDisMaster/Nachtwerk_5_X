/*
    File: fn_wantedRemove.sqf
    Author: Bryan "Tonic" Boardwine"
    Database Persistence By: ColinM
    Assistance by: Paronity
    Stress Tests by: Midgetgrimm

    Description:
    Removes a person from the wanted list.
*/
private["_uid","_query","_dataArr","_array"];
_uid = [_this,0,"",[""]] call BIS_fnc_param;
_dataArr = toArray(_data);
_array = toString(_dataArr);
_array = call compile format ["%1", _array];
if (_uid isEqualTo "") exitWith {}; //Bad data

_query = format["UPDATE wanted SET active = '0', wantedCrimes = '[]', wantedBounty = 0 WHERE wantedID='%1'",_array select 1];
[_query,2] call DB_fnc_asyncCall;
