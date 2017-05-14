/*
    File: fn_packupschranke.sqf
    Author: Valle
*/
private["_schranke"];
_schranke = nearestObjects[getPos player,["Land_BarGate_F"],8] select 0;
if(isNil "_schranke") exitWith {};

if(([true,"schranke",1] call life_fnc_handleInv)) then
{
    player removeAction life_action_schrankePickup;
    life_action_schrankePickup = nil;
    deleteVehicle _schranke;
};