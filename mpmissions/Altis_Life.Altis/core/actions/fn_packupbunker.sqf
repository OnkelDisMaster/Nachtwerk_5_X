/*
	Autor: Valle
*/
private["_bunker"];
_bunker = nearestObjects[getPos player,["Land_Medevac_HQ_V1_F"],8] select 0;
if(isNil "_bunker") exitWith {};

if(([true,"bunker",1] call life_fnc_handleInv)) then
{
    player removeAction life_action_bunkerPickup;
    life_action_bunkerPickup = nil;
    deleteVehicle _bunker;
};