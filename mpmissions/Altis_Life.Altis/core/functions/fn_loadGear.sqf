#include "..\..\script_macros.hpp"
/*
    File: fn_loadGear.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Loads saved civilian gear, this is limited for a reason and that's balance.
*/
private ["_itemArray","_handle"];
_itemArray = life_gear;
waitUntil {!(isNull (findDisplay 46))};

_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

if (count _itemArray isEqualTo 0) exitWith {
    switch (playerSide) do {
        case west: {
            [] call life_fnc_copLoadout;
        };

        case civilian: {
            [] call life_fnc_civLoadout;
        };

        case independent: {
            [] call life_fnc_medicLoadout;
        };
    };
};

_itemArray params [
    "_uniform",
    "_vest",
    "_backpack",
    "_goggles",
    "_headgear",
    ["_items",[]],
    "_prim",
    "_seco",
    ["_uItems",[]],
    ["_uMags",[]],
    ["_bItems",[]],
    ["_bMags",[]],
    ["_vItems",[]],
    ["_vMags",[]],
    ["_pItems",[]],
    ["_hItems",[]],
    ["_yItems",[]]
];

if (!(_goggles isEqualTo "")) then {_handle = [_goggles,true,false,false,false] spawn life_fnc_handleItem; waitUntil {scriptDone _handle};};
if (!(_headgear isEqualTo "")) then {_handle = [_headgear,true,false,false,false] spawn life_fnc_handleItem; waitUntil {scriptDone _handle};};
if (!(_uniform isEqualTo "")) then {_handle = [_uniform,true,false,false,false] spawn life_fnc_handleItem; waitUntil {scriptDone _handle};};
if (!(_vest isEqualTo "")) then {_handle = [_vest,true,false,false,false] spawn life_fnc_handleItem; waitUntil {scriptDone _handle};};
if (!(_backpack isEqualTo "")) then {_handle = [_backpack,true,false,false,false] spawn life_fnc_handleItem; waitUntil {scriptDone _handle};};

/* Hotfix for losing virtual items on login */
if (!isNil {(_this select 0)}) then {
    life_maxWeight = life_maxWeight + (round(FETCH_CONFIG2(getNumber,"CfgVehicles",(backpack player),"maximumload") / 4));
};

{_handle = [_x,true,false,false,false] spawn life_fnc_handleItem; waitUntil {scriptDone _handle};} forEach _items;

{player addItemToUniform _x;} forEach (_uItems);
{(uniformContainer player) addItemCargoGlobal [_x,1];} forEach (_uMags);
{player addItemToVest _x;} forEach (_vItems);
{(vestContainer player) addItemCargoGlobal [_x,1];} forEach (_vMags);
{player addItemToBackpack _x;} forEach (_bItems);
{(backpackContainer player) addItemCargoGlobal [_x,1];} forEach (_bMags);
life_maxWeight = 100;

{
    [true,(_x select 0),(_x select 1)] call life_fnc_handleInv;
} forEach (_yItems);

life_maxWeight = 24;
//Primary & Secondary (Handgun) should be added last as magazines do not automatically load into the gun.
if (!(_prim isEqualTo "")) then {_handle = [_prim,true,false,false,false] spawn life_fnc_handleItem; waitUntil {scriptDone _handle};};
if (!(_seco isEqualTo "")) then {_handle = [_seco,true,false,false,false] spawn life_fnc_handleItem; waitUntil {scriptDone _handle};};

{
    if (!(_x isEqualTo "")) then {
        player addPrimaryWeaponItem _x;
    };
} forEach (_pItems);
{
    if (!(_x isEqualTo "")) then {
        player addHandgunItem _x;
    };
} forEach (_hItems);

if((backpack player) isEqualTo "") then {  
        life_maxWeight = LIFE_SETTINGS(getNumber,"total_maxWeight");    
    } else {  
        if (!(backpack player isEqualTo "")) then {  
			_load = 0;
			if((backpack player) isEqualTo "B_AssaultPack_khk") then { _load = 30; };            
			if((backpack player) isEqualTo "B_AssaultPack_Kerry") then { _load = 30; };
			if((backpack player) isEqualTo "B_AssaultPack_blk") then { _load = 30; };
			if((backpack player) isEqualTo "B_AssaultPack_cbr") then { _load = 30; };            
			if((backpack player) isEqualTo "B_AssaultPack_sgg") then { _load = 30; };
			if((backpack player) isEqualTo "B_Bergen_blk") then { _load = 50; };
			if((backpack player) isEqualTo "B_TacticalPack_oli") then { _load = 50; };
			if((backpack player) isEqualTo "B_Bergen_sgg") then { _load = 50; };
			if((backpack player) isEqualTo "B_Bergen_rgr") then { _load = 50; };            
			if((backpack player) isEqualTo "B_AssaultPack_mcamo_AT") then { _load = 70; };
			if((backpack player) isEqualTo "B_Kitbag_cbr") then { _load = 70; };
			if((backpack player) isEqualTo "B_Kitbag_sgg") then { _load = 70; };            
			if((backpack player) isEqualTo "B_Carryall_khk") then { _load = 80; };
			if((backpack player) isEqualTo "B_Carryall_oli") then { _load = 80; };            
			if((backpack player) isEqualTo "B_Carryall_cbr") then { _load = 80; };	
			if((backpack player) isEqualTo "B_Carryall_oucamo") then { _load = 80; };
			if((backpack player) isEqualTo "B_Carryall_mcamo") then { _load = 80; };            
			if((backpack player) isEqualTo "B_Carryall_ocamo") then { _load = 80; };			
			if((backpack player) isEqualTo "B_Bergen_hex_F") then { _load = 100; };
			if((backpack player) isEqualTo "B_Bergen_mcamo_F") then { _load = 100; };
			if((backpack player) isEqualTo "B_Bergen_dgtl_F") then { _load = 100; };		
			if((backpack player) isEqualTo "B_ViperHarness_ghex_F") then { _load = 130; };
			if((backpack player) isEqualTo "B_ViperHarness_blk_F") then { _load = 130; };
			if((backpack player) isEqualTo "B_ViperHarness_hex_F") then { _load = 120; };
			if((backpack player) isEqualTo "B_ViperHarness_khk_F") then { _load = 120; };
			if((backpack player) isEqualTo "B_ViperHarness_oli_F") then { _load = 120; };
			if (license_civ_implantat_backpack) then {_load = _load + 30;};	
            life_maxWeight = LIFE_SETTINGS(getNumber,"total_maxWeight") + _load;  
        };  
    };

[] call life_fnc_playerSkins;
