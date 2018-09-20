#include "..\..\..\script_macros.hpp"
private ["veh","_objektTypen"];
_veh = objNull;

_objektTypen = ["Car","Ship","Tank"];
_objektTypen append (LIFE_SETTINGS(getArray,"life_container"));
_veh = nearestObject [vehicle player,_objektTypen];

if ((_veh in CUP_vehBlacklist) || (typeOf _veh in CUP_vehBlacklist)) exitWith
{
  cutText ["This vehicle cannot be lifted", "PLAIN"];
};

_id = _this select 2;
_vehPos = getPos _veh;
_veh setPos [_vehPos select 0, _vehPos select 1, 1];
_veh attachTo [vehicle player, [0, 0, -5]];

_EHid = vehicle player addMPEventHandler ["MPKilled", {_this call CUP_killedEH;}];

vehicle player setVariable ["CUP_attached", [1, _veh, _EHid], true];