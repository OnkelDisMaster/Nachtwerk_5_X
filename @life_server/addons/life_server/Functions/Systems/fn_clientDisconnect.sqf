#include "\life_server\script_macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	When a client disconnects this will remove their corpse and
	clean up their storage boxes in their house.
*/
<<<<<<< HEAD
private["_unit","_id","_uid","_name","_alive","_position","_side"];
_unit = _this select 0;
if (isNull _unit) exitWith {};
_id = _this select 1;
_uid = _this select 2;
_name = _this select 3;
_side = side _unit;

//Save player info
if (isNil "HC_UID" || {_uid != HC_UID}) then {
    _position = getPosATL _unit;
    if ((getMarkerPos "respawn_civilian" distance _position) > 300) then {
        //Call UpdateRequest as unit
        [] remoteExecCall ["SOCK_fnc_updateRequest",_unit];

        //Civilian position
        if (life_save_civilian_position && _side isEqualTo civilian) then {
            _alive = alive _unit;
            if (life_HC_isActive) then {[_uid,_side,_alive,4,_position] remoteExec ["HC_fnc_updatePartial",HC_Life];} else {[_uid,_side,_alive,4,_position] spawn DB_fnc_updatePartial;};
        };
    };
};
=======
private["_unit","_id","_uid","_name"];
_unit = SEL(_this,0);
if(isNull _unit) exitWith {};
_id = SEL(_this,1);
_uid = SEL(_this,2);
_name = SEL(_this,3);
>>>>>>> origin/master

_containers = nearestObjects[_unit,["WeaponHolderSimulated"],5];
{deleteVehicle _x;} foreach _containers;
deleteVehicle _unit;

_uid spawn TON_fnc_houseCleanup;