/*
	Autor: Valle
*/
private["_blitzer"];
_blitzer = nearestObjects[getPos player,["Land_Runway_PAPI"],8] select 0;
if(isNil "_blitzer") exitWith {};

if(([true,"blitzer",1] call life_fnc_handleInv)) then
{
    player removeAction life_action_blitzerPickup;
    life_action_blitzerPickup = nil;
    deleteVehicle _blitzer;
};