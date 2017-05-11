/*
	BLAH BLAH
	I LOVE NOTEPAD++ GET OVER IT
	BLAH!
*/
<<<<<<< HEAD
private["_containerID","_containers","_query","_vehItems","_vehMags","_vehWeapons","_vehBackpacks","_cargo"];
_container = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
if (isNull _container) exitWith {};
_containerID = _container getVariable["container_id",-1];
if (_houseID isEqualTo -1) exitWith {};
=======
private["_house","_houseID","_containers","_query"];
_house = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
if(isNull _house) exitWith {systemChat "House null";};
_houseID = _house getVariable["house_id",-1];
if(_houseID == -1) exitWith {systemChat "HouseID invalid";};

_containers = _house getVariable ["containers",[]];
>>>>>>> origin/master

//systemChat format["Number of containers found: %1",count _containers];
_arr = [];
{
	_className = typeOf _x;
	_weapons = getWeaponCargo _x;
	_magazines = getMagazineCargo _x;
	_items = getItemCargo _x;
	_backpacks = getBackpackCargo _x;

	_arr pushBack [_className,[_weapons,_magazines,_items,_backpacks]];
} foreach _containers;

<<<<<<< HEAD
_query = format["UPDATE containers SET gear='%1' WHERE id='%2'",_cargo,_containerID];
=======
_query = format["houseUpdateContainer:%1:%2",_arr,_houseID];
>>>>>>> origin/master

[_query,1] call DB_fnc_asyncCall;
//systemChat "Query ran?";