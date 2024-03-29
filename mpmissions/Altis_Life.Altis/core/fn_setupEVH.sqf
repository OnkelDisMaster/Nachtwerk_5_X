/*
    File: fn_setupEVH.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Master eventhandler file
*/
player addEventHandler ["Killed", {_this call life_fnc_onPlayerKilled}];
player addEventHandler ["HandleDamage", {_this call life_fnc_handleDamage}];
player addEventHandler ["Respawn", {_this call life_fnc_onPlayerRespawn}];
player addEventHandler ["Take", {_this call life_fnc_onTakeItem}];
player addEventHandler ["Fired", {_this call life_fnc_onFired}];
player addEventHandler ["InventoryClosed", {_this call life_fnc_inventoryClosed}];
player addEventHandler ["InventoryOpened", {_this call life_fnc_inventoryOpened}];
player addEventHandler ["HandleRating", {0}];

addMissionEventHandler ["Map", {_this call life_fnc_checkMap}];
									//	Getroffener, der event triggert				                                                                        //Schütze
player addMPEventHandler ["mphit", { if (!isNull (_this select 0) && !isNull (_this select 3) && (alive (_this select 3)) && (alive(_this select 0))) then {[_this select 0] remoteExec ["life_fnc_hitMarker",(_this select 3)];};}];
