#include "..\script_macros.hpp"
/*
    File: fn_initCiv.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Initializes the civilian.
*/
private["_spawnPos"];
civ_spawn_1 = nearestObjects[getMarkerPos  "civ_spawn_1", ["Land_i_Shop_01_V1_F","Land_i_Shop_01_V2_F","Land_i_Shop_01_V3_F","Land_i_Shop_02_V1_F","Land_i_Shop_02_V2_F","Land_i_Shop_02_V3_F"],250];
civ_spawn_2 = nearestObjects[getMarkerPos  "civ_spawn_2", ["Land_i_Shop_01_V1_F","Land_i_Shop_01_V2_F","Land_i_Shop_01_V3_F","Land_i_Shop_02_V1_F","Land_i_Shop_02_V2_F","Land_i_Shop_02_V3_F"],250];
civ_spawn_3 = nearestObjects[getMarkerPos  "civ_spawn_3", ["Land_i_Shop_01_V1_F","Land_i_Shop_01_V2_F","Land_i_Shop_01_V3_F","Land_i_Shop_02_V1_F","Land_i_Shop_02_V2_F","Land_i_Shop_02_V3_F"],250];
civ_spawn_4 = nearestObjects[getMarkerPos  "civ_spawn_4", ["Land_i_Shop_01_V1_F","Land_i_Shop_01_V2_F","Land_i_Shop_01_V3_F","Land_i_Shop_02_V1_F","Land_i_Shop_02_V2_F","Land_i_Shop_02_V3_F"],250];
waitUntil {!(isNull (findDisplay 46))};
if (life_is_alive && !life_is_arrested) then {
    /* Spawn at our last position */
    player setVehiclePosition [life_civ_position, [], 0, "CAN_COLLIDE"];
} else {
    if (!life_is_alive && !life_is_arrested) then {
        //if (LIFE_SETTINGS(getNumber,"save_civilian_positionStrict") isEqualTo 1) then {
        //    _handle = [] spawn life_fnc_civLoadout;
        //    waitUntil {scriptDone _handle}; CASH = 0;
        //};
        [] call life_fnc_spawnMenu;
        waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
        waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.
    } else {
        if (life_is_arrested) then {
            life_is_arrested = false;
            [player,true] spawn life_fnc_jail;
        };
    };
};
if (license_civ_implantat_hitmarker) then {life_hitmarker = true;};
if (license_civ_transport) then {[] execVM "core\vehicle\IgiLoad\IgiLoadInit.sqf";};
if (license_civ_logistikpilot_plus) then {[["O_APC_Wheeled_02_rcws_F"],["B_Heli_Light_01_F"]] execVM "core\vehicle\Lifting\lift_init.sqf";} else {
	if (license_civ_logistikpilot) then {[["O_Truck_03_ammo_F","O_Truck_03_device_F","O_Truck_03_fuel_F","B_Truck_01_box_F","B_Truck_01_fuel_F","B_Truck_01_ammo_F","O_APC_Wheeled_02_rcws_F"],["B_Heli_Light_01_F"]] execVM "core\vehicle\Lifting\lift_init.sqf";};
};
if (license_civ_bountyH) then {player setvariable ["isBountyH",true,true];} else {player setvariable ["isBountyH",false,true];};
player setvariable ["GoldGameAnz",-1];
[player] remoteExecCall ["life_fnc_hatBounty",RSERV];	//Bounty Var set

if (license_civ_implantat_ausdauer) then {player enableFatigue false; life_redgull_effect = -1;} else {player enableFatigue true;};
[] spawn life_fnc_IntroCam;
[] call life_fnc_initPayChecks;

life_is_alive = true;
player addRating 9999999;
