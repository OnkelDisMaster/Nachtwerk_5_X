/*
	Autor: Valle
*/
private["_licht"];
_licht = nearestObjects[getPos player,["Land_Flush_Light_red_F"],8] select 0;
if(isNil "_licht") exitWith {};

if(([true,"licht",1] call life_fnc_handleInv)) then
{
    player removeAction life_action_lichtPickup;
    life_action_lichtPickup = nil;
    deleteVehicle _licht;
};