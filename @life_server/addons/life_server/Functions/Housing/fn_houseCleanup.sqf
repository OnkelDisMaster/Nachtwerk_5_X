/*
	Author: Bryan "Tonic" Boardwine

	Description:
	Cleans up containers inside the house.
*/
<<<<<<< HEAD
private["_query","_containers"];
_query = format["SELECT pid, pos FROM containers WHERE pid='%1' AND owned='1'",_this];
=======
private["_query","_houses"];
_query = format["housingCleanup:%1",_this];
>>>>>>> origin/master

_houses = [_query,2,true] call DB_fnc_asyncCall;

if(count _houses == 0) exitWith {};
{
<<<<<<< HEAD
    _pos = call compile format["%1",_x select 1];
    _container = nearestObjects[_pos,["Box_IND_Grenades_F","B_supplyCrate_F"],12];
    {
        deleteVehicle _x;
    } forEach _container;
} forEach _containers;
=======
	_pos = call compile format["%1",_x select 1];
	_house = nearestBuilding _pos;

	if(!isNil {(_house getVariable "containers")}) then {
		{if(!isNull _x) then {deleteVehicle _x;};} foreach (_house getVariable "containers");
		_house setVariable["containers",nil,true];
	};
} foreach _houses;
>>>>>>> origin/master
