/*
	Author: Bryan "Tonic" Boardwine

	Description:
	Updates the storage for a house blah blah
*/
private["_house"];
<<<<<<< HEAD
_container = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
if (isNull _container) exitWith {};

_trunkData = _container getVariable["Trunk",[[],0]];
_containerID = _container getVariable["container_id",-1];
=======
_house = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
if(isNull _house) exitWith {};

_trunkData = _house getVariable["Trunk",[[],0]];
_houseID = _house getVariable["house_id",-1];
>>>>>>> origin/master

if(_houseID == -1) exitWith {}; //Dafuq?

<<<<<<< HEAD
_trunkData = [_trunkData] call DB_fnc_mresArray;
_query = format["UPDATE containers SET inventory='%1' WHERE id='%2'",_trunkData,_containerID];
=======
_query = format["housingUpdateInventory:%1:%2",_trunkData,_houseID];
>>>>>>> origin/master

[_query,1] call DB_fnc_asyncCall;