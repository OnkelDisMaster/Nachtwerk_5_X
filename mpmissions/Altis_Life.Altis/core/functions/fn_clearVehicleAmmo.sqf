#include "..\..\script_macros.hpp"
/*
    File: fn_clearVehicleAmmo.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Clears the vehicle of ammo types that we don't want.

    Syntax: _vehicle removeMagazinesTurret [magazineName, turretPath]
    Documentation: https://community.bistudio.com/wiki/removeMagazinesTurret
*/
private["_vehicle","_veh"];
_vehicle = [_this,0,objNull,[objNull]] call BIS_fnc_param;
if (isNull _vehicle) exitWith {};
_veh = typeOf _vehicle;

/*
if (_veh isEqualTo "B_Boat_Armed_01_minigun_F") then {
    _vehicle removeMagazinesTurret ["200Rnd_40mm_G_belt",[0]];
};
*/

switch (_classname) do
{	
	//Jet A-10
	case "O_Plane_CAS_02_F":
	{
		//Remove ammo and Flaires
		_vehicle setVehicleAmmo 0;
		_vehicle setDamage 0;
		_vehicle allowDamage true;
		_vehicle setAmmoCargo 0;
        _vehicle setFuelCargo 0; // kein betanken durch Tankfahrzeuge mehr
		_vehicle setRepairCargo 0; // Repariert
		
		_vehicle removeWeaponTurret ["Cannon_30mm_Plane_CAS_02_F",[0]];
		_vehicle removeMagazinesTurret ["Cannon_30mm_Plane_CAS_02_F",[0]];
		
		_vehicle removeWeaponTurret ["Missile_AA_03_Plane_CAS_02_F",[0]];
		_vehicle removeMagazinesTurret ["Missile_AA_03_Plane_CAS_02_F",[0]];
		
		_vehicle removeWeaponTurret ["Missile_AGM_01_Plane_CAS_02_F",[0]];
		_vehicle removeMagazinesTurret ["Missile_AGM_01_Plane_CAS_02_F",[0]];
		
		_vehicle removeWeaponTurret ["Rocket_03_HE_Plane_CAS_02_F",[0]];
		_vehicle removeMagazinesTurret ["Rocket_03_HE_Plane_CAS_02_F",[0]];
		
		_vehicle removeWeaponTurret ["Rocket_03_AP_Plane_CAS_02_F",[0]];
		_vehicle removeMagazinesTurret ["Rocket_03_AP_Plane_CAS_02_F",[0]];
		
		_vehicle removeWeaponTurret ["Bomb_03_Plane_CAS_02_F",[0]];
		_vehicle removeMagazinesTurret ["Bomb_03_Plane_CAS_02_F",[0]];

		systemChat "Waffen entfernt und Repariert";
    };
	
	//Gorgon
	case "I_APC_Wheeled_03_cannon_F":
	{
		//Remove ammo and Flaires
		_vehicle setVehicleAmmo 0;
		_vehicle setDamage 0;
		_vehicle allowDamage false;
		_vehicle setAmmoCargo 0;
        _vehicle setFuelCargo 0; // kein betanken durch Tankfahrzeuge mehr
		_vehicle setRepairCargo 0; // Repariert
		systemChat "Waffen entfernt und Repariert";
    };
	
	//Marid
	case "O_APC_Wheeled_02_rcws_F":
	{
		//Remove ammo and Flaires
 		_vehicle setDamage 0;
 		_vehicle allowDamage false;
    };
	
	
	//GhostHawk (Camo)
	case "B_Heli_Transport_01_camo_F":
    {
        //Remove ammo and Flaires
        _vehicle setVehicleAmmo 0;
		_vehicle setDamage 0;
		_vehicle allowDamage true;
		_vehicle setAmmoCargo 0;
        _vehicle setFuelCargo 0; // kein betanken durch Tankfahrzeuge mehr
		_vehicle setRepairCargo 0; // Repariert
		systemChat "Waffen entfernt und Repariert";
    };
	
/*	//GhostHawk (Khaki)
	case "B_CTRG_Heli_Transport_01_tropic_F":
    {
        //Remove ammo and Flaires
        _vehicle setVehicleAmmo 0;
		_vehicle setDamage 0;
		_vehicle allowDamage true;
		_vehicle setAmmoCargo 0;
        _vehicle setFuelCargo 0; // kein betanken durch Tankfahrzeuge mehr
		_vehicle setRepairCargo 0; // Repariert
		systemChat "Waffen entfernt und Repariert";
    };
*/
	//Mohawk
	case "I_Heli_Transport_02_F":
    {
        //Remove ammo and Flaires
        _vehicle setVehicleAmmo 0;
		_vehicle setDamage 0;
		_vehicle allowDamage true;
		_vehicle setAmmoCargo 0;
        _vehicle setFuelCargo 0; // kein betanken durch Tankfahrzeuge mehr
		_vehicle setRepairCargo 0; // Repariert
		systemChat "Waffen entfernt und Repariert";
    };
	
	//Xi'an
	case "O_T_VTOL_02_vehicle_hex_F":    //Event Fahrzeug
    {
        //Remove ammo and Flaires
        _vehicle setVehicleAmmo 0;
		_vehicle setDamage 0;
		_vehicle allowDamage true;
		_vehicle setAmmoCargo 0;
		_vehicle setFuelCargo 0; // kein betanken durch Tankfahrzeuge mehr
		_vehicle setRepairCargo 0; // Repariert
		systemChat "Waffen entfernt und Repariert";
    };
	
	//MiniGun Boat
	case "B_Boat_Armed_01_minigun_F":
	{
		//Remove ammo and Flaires
		_vehicle setVehicleAmmo 0;
		_vehicle setDamage 0;
		_vehicle allowDamage true;
		_vehicle setAmmoCargo 0;
		_vehicle setFuelCargo 0; // kein betanken durch Tankfahrzeuge mehr
		_vehicle setRepairCargo 0; // Repariert
		systemChat "Waffen entfernt und Repariert";
	};	
};

clearWeaponCargoGlobal _vehicle;
clearMagazineCargoGlobal _vehicle;
clearItemCargoGlobal _vehicle;
clearBackpackCargoGlobal _vehicle;

if (_veh in ["B_T_UAV_03_F","B_UAV_02_F","B_UAV_02_CAS_F","O_T_UAV_04_CAS_F","B_UAV_01_F"]) then 
{
	createVehicleCrew _vehicle;
};
