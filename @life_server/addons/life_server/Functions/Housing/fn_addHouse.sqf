/*
	Author: Bryan "Tonic" Boardwine

	Description:
	Blah
*/
<<<<<<< HEAD
private["_housePos","_query"];
params [
    ["_uid","",[""]],
    ["_house",objNull,[objNull]]
];
if (isNull _house || _uid isEqualTo "") exitWith {};

_housePos = getPosATL _house;

_query = format["INSERT INTO houses (pid, pos, owned) VALUES('%1', '%2', '1')",_uid,_housePos];
if (EXTDB_SETTING(getNumber,"DebugMode") isEqualTo 1) then {
    diag_log format["Query: %1",_query];
};

[_query,1] call DB_fnc_asyncCall;

uiSleep 0.3;

_query = format["SELECT id FROM houses WHERE pos='%1' AND pid='%2' AND owned='1'",_housePos,_uid];
_queryResult = [_query,2] call DB_fnc_asyncCall;
//systemChat format["House ID assigned: %1",_queryResult select 0];
=======
private["_house","_uid","_housePos","_query"];
_uid = [_this,0,"",[""]] call BIS_fnc_param;
_house = [_this,1,ObjNull,[ObjNull]] call BIS_fnc_param;
if(isNull _house OR _uid == "") exitWith {};

_housePos = getPosATL _house;


_query = format["housingAddHouse:%1:%2:%3:%4:%5",_uid,_housePos,[[],0],[],1];
_queryResult = [_query,2] call DB_fnc_asyncCall;
systemChat format["House ID assigned: %1",_queryResult select 0];
>>>>>>> origin/master
_house setVariable["house_id",(_queryResult select 0),true];
