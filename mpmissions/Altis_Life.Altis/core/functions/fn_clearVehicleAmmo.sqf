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
    _vehicle removeMagazinesTurret ["200Rnd_40mm_G_belt",[-1]];
};
*/

switch (_veh) do
{	
	case "O_Plane_CAS_02_F":
	{
		//Remove ammo and Flaires
		_vehicle setVehicleAmmo 0;
		_vehicle setDamage 0;
		_vehicle allowDamage true;
		_vehicle setAmmoCargo 0;
        _vehicle setFuelCargo 0; // kein betanken durch Tankfahrzeuge mehr
		_vehicle setRepairCargo 0; // Repariert
		
		_vehicle removeWeaponTurret ["Cannon_30mm_Plane_CAS_02_F",[-1]];
		_vehicle removeMagazinesTurret ["Cannon_30mm_Plane_CAS_02_F",[-1]];
		
		_vehicle removeWeaponTurret ["Missile_AA_03_Plane_CAS_02_F",[-1]];
		_vehicle removeMagazinesTurret ["Missile_AA_03_Plane_CAS_02_F",[-1]];
		
		_vehicle removeWeaponTurret ["Missile_AGM_01_Plane_CAS_02_F",[-1]];
		_vehicle removeMagazinesTurret ["Missile_AGM_01_Plane_CAS_02_F",[-1]];
		
		_vehicle removeWeaponTurret ["Rocket_03_HE_Plane_CAS_02_F",[-1]];
		_vehicle removeMagazinesTurret ["Rocket_03_HE_Plane_CAS_02_F",[-1]];
		
		_vehicle removeWeaponTurret ["Rocket_03_AP_Plane_CAS_02_F",[-1]];
		_vehicle removeMagazinesTurret ["Rocket_03_AP_Plane_CAS_02_F",[-1]];
		
		_vehicle removeWeaponTurret ["Bomb_03_Plane_CAS_02_F",[-1]];
		_vehicle removeMagazinesTurret ["Bomb_03_Plane_CAS_02_F",[-1]];

		
    };
	
	case "I_Plane_Fighter_04_F":
	{
		//Remove ammo and Flaires
		_vehicle setVehicleAmmo 0;
		_vehicle setDamage 0;
		_vehicle allowDamage true;
		_vehicle setAmmoCargo 0;
        _vehicle setFuelCargo 0; // kein betanken durch Tankfahrzeuge mehr
		_vehicle setRepairCargo 0; // Repariert
		
		_vehicle removeWeaponTurret ["weapon_Fighter_Gun20mm_AA",[-1]]; 
		_vehicle removeMagazinesTurret ["weapon_Fighter_Gun20mm_AA",[-1]];
		
		_vehicle removeWeaponTurret ["weapon_BIM9xLauncher",[-1]]; 
		_vehicle removeMagazinesTurret ["weapon_BIM9xLauncher",[-1]];  
		
		_vehicle removeWeaponTurret ["weapon_AMRAAMLauncher",[-1]];
		_vehicle removeMagazinesTurret ["weapon_AMRAAMLauncher",[-1]];
		
		_vehicle removeWeaponTurret ["weapon_AGM_65Launcher",[-1]];
		_vehicle removeMagazinesTurret ["weapon_AGM_65Launcher",[-1]];

		
    };
	
	case "O_Plane_Fighter_02_F":
	{
		//Remove ammo and Flaires
		_vehicle setVehicleAmmo 0;
		_vehicle setDamage 0;
		_vehicle allowDamage true;
		_vehicle setAmmoCargo 0;
        _vehicle setFuelCargo 0; // kein betanken durch Tankfahrzeuge mehr
		_vehicle setRepairCargo 0; // Repariert
		
		_vehicle removeWeaponTurret ["weapon_Fighter_Gun_30mm",[-1]];
		_vehicle removeMagazinesTurret ["weapon_Fighter_Gun_30mm",[-1]];
		
		_vehicle removeWeaponTurret ["weapon_R73Launcher",[-1]]; 
		_vehicle removeMagazinesTurret ["weapon_R73Launcher",[-1]];  
		
		_vehicle removeWeaponTurret ["weapon_R77Launcher",[-1]]; 
		_vehicle removeMagazinesTurret ["weapon_R77Launcher",[-1]]; 
		
		_vehicle removeWeaponTurret ["weapon_KAB250Launcher",[-1]];
		_vehicle removeMagazinesTurret ["weapon_KAB250Launcher",[-1]];

		
    };
	
	case "B_Plane_Fighter_01_F":
	{
		//Remove ammo and Flaires
		_vehicle setVehicleAmmo 0;
		_vehicle setDamage 0;
		_vehicle allowDamage true;
		_vehicle setAmmoCargo 0;
        _vehicle setFuelCargo 0; // kein betanken durch Tankfahrzeuge mehr
		_vehicle setRepairCargo 0; // Repariert
		
		_vehicle removeWeaponTurret ["weapon_Fighter_Gun20mm_AA",[-1]];
		_vehicle removeMagazinesTurret ["weapon_Fighter_Gun20mm_AA",[-1]];
		
		_vehicle removeWeaponTurret ["weapon_BIM9xLauncher",[-1]]; 
		_vehicle removeMagazinesTurret ["weapon_BIM9xLauncher",[-1]]; 
		
		_vehicle removeWeaponTurret ["weapon_GBU12Launcher",[-1]]; 
		_vehicle removeMagazinesTurret ["weapon_GBU12Launcher",[-1]]; 
		
		_vehicle removeWeaponTurret ["weapon_AMRAAMLauncher",[-1]];
		_vehicle removeMagazinesTurret ["weapon_AMRAAMLauncher",[-1]];
		
		_vehicle removeWeaponTurret ["weapon_AGM_65Launcher",[-1]];
		_vehicle removeMagazinesTurret ["weapon_AGM_65Launcher",[-1]];

		
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
		
    };
	
	//Marid
	case "O_APC_Wheeled_02_rcws_F":
	{
		//Remove ammo and Flaires
 		_vehicle setDamage 0;
 		_vehicle allowDamage false;
		
		_vehicle removeWeaponTurret ["HMG_127_APC",[0]];
		_vehicle removeMagazinesTurret ["HMG_127_APC",[0]];
		
		_vehicle removeWeaponTurret ["GMG_40mm",[0]];
		_vehicle removeMagazinesTurret ["GMG_40mm",[0]];
    };
	
	//GhostHawk
	case "B_Heli_Transport_01_F":
    {
        //Remove ammo and Flaires
        _vehicle setVehicleAmmo 0;
		_vehicle setDamage 0;
		_vehicle allowDamage true;
		_vehicle setAmmoCargo 0;
        _vehicle setFuelCargo 0; // kein betanken durch Tankfahrzeuge mehr
		_vehicle setRepairCargo 0; // Repariert
		
		_vehicle removeWeaponTurret ["LMG_Minigun_Transport",[1]];
		_vehicle removeMagazinesTurret ["LMG_Minigun_Transport",[1]];
		
		_vehicle removeWeaponTurret ["LMG_Minigun_Transport2",[2]];
		_vehicle removeMagazinesTurret ["LMG_Minigun_Transport2",[2]];
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
		
		_vehicle removeWeaponTurret ["LMG_Minigun_Transport",[1]];
		_vehicle removeMagazinesTurret ["LMG_Minigun_Transport",[1]];
		
		_vehicle removeWeaponTurret ["LMG_Minigun_Transport2",[2]];
		_vehicle removeMagazinesTurret ["LMG_Minigun_Transport2",[2]];
    };
	
	//GhostHawk (Khaki)
	case "B_CTRG_Heli_Transport_01_tropic_F":
    {
        //Remove ammo and Flaires
        _vehicle setVehicleAmmo 0;
		_vehicle setDamage 0;
		_vehicle allowDamage true;
		_vehicle setAmmoCargo 0;
        _vehicle setFuelCargo 0; // kein betanken durch Tankfahrzeuge mehr
		_vehicle setRepairCargo 0; // Repariert
		
		_vehicle removeWeaponTurret ["LMG_Minigun_Transport",[1]];
		_vehicle removeMagazinesTurret ["LMG_Minigun_Transport",[1]];
		
		_vehicle removeWeaponTurret ["LMG_Minigun_Transport2",[2]];
		_vehicle removeMagazinesTurret ["LMG_Minigun_Transport2",[2]];
		
		
    };
	
	//GhostHawk (Sand)
	case "B_CTRG_Heli_Transport_01_sand_F":
    {
        //Remove ammo and Flaires
        _vehicle setVehicleAmmo 0;
		_vehicle setDamage 0;
		_vehicle allowDamage true;
		_vehicle setAmmoCargo 0;
        _vehicle setFuelCargo 0; // kein betanken durch Tankfahrzeuge mehr
		_vehicle setRepairCargo 0; // Repariert
		
		_vehicle removeWeaponTurret ["LMG_Minigun_Transport",[1]];
		_vehicle removeMagazinesTurret ["LMG_Minigun_Transport",[1]];
		
		_vehicle removeWeaponTurret ["LMG_Minigun_Transport2",[2]];
		_vehicle removeMagazinesTurret ["LMG_Minigun_Transport2",[2]];
		
		
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
		
		_vehicle removeWeaponTurret ["gatling_30mm_VTOL_02",[0]];
		_vehicle removeMagazinesTurret ["gatling_30mm_VTOL_02",[0]];
		
		_vehicle removeWeaponTurret ["missiles_SCALPEL",[0]];
		_vehicle removeMagazinesTurret ["missiles_SCALPEL",[0]];
		
		_vehicle removeWeaponTurret ["rockets_Skyfire",[0]];
		_vehicle removeMagazinesTurret ["rockets_Skyfire",[0]];
		
    };
	
	//Falcon
	case "B_T_UAV_03_F":    //Event Fahrzeug
    {
        //Remove ammo and Flaires
        _vehicle setVehicleAmmo 0;
		_vehicle setDamage 0;
		_vehicle allowDamage true;
		_vehicle setAmmoCargo 0;
		_vehicle setFuelCargo 0; // kein betanken durch Tankfahrzeuge mehr
		_vehicle setRepairCargo 0; // Repariert
		
		_vehicle removeWeaponTurret ["missiles_SCALPEL",[0]];
		_vehicle removeMagazinesTurret ["missiles_SCALPEL",[0]];
		
		_vehicle removeWeaponTurret ["missiles_DAR",[0]];
		_vehicle removeMagazinesTurret ["missiles_DAR",[0]];
		
		_vehicle removeWeaponTurret ["rockets_Skyfire",[0]];
		_vehicle removeMagazinesTurret ["rockets_Skyfire",[0]];
		
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
