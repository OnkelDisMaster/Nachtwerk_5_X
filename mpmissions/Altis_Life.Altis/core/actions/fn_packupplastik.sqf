/*
    File: fn_packupplastik.sqf
    Author: Valle

*/
private["_plastik"];
_plastik = nearestObjects[getPos player,["PlasticBarrier_02_grey_F"],8] select 0;
if(isNil "_plastik") exitWith {};

if(([true,"plastik",1] call life_fnc_handleInv)) then
{
    player removeAction life_action_plastikPickup;
    life_action_plastikPickup = nil;
    deleteVehicle _plastik;
};