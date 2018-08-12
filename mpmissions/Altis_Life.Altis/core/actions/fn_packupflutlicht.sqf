/*
	Autor: Valle
*/
private["_flutlicht"];
_flutlicht = nearestObjects[getPos player,["Land_PortableLight_double_F"],8] select 0;
if(isNil "_flutlicht") exitWith {};

if(([true,"flutlicht",1] call life_fnc_handleInv)) then
{
    player removeAction life_action_flutlichtPickup;
    life_action_flutlichtPickup = nil;
    deleteVehicle _flutlicht;
};