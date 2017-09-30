#include "..\script_macros.hpp"
/*
    File: fn_survival.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    All survival? things merged into one thread.
*/
private["_fnc_food","_fnc_water","_foodTime","_waterTime","_bp","_walkDis","_lastPos","_curPos","_fatigue","_load"];

switch (playerside) do 
{
	case west: {_fatigue = false};
	case east: {_fatigue = false};
	case independent: {_fatigue = false};
	case civilian: {_fatigue = true};
};

_fnc_food =  {
    if (life_hunger < 2) then {player setDamage 1; hint localize "STR_NOTF_EatMSG_Death";}
    else
    {
        life_hunger = life_hunger - 10;
        [] call life_fnc_hudUpdate;
        if (life_hunger < 2) then {player setDamage 1; hint localize "STR_NOTF_EatMSG_Death";};
        switch (life_hunger) do {
            case 30: {hint localize "STR_NOTF_EatMSG_1";};
            case 20: {hint localize "STR_NOTF_EatMSG_2";};
            case 10: {
                hint localize "STR_NOTF_EatMSG_3";
                if (_fatigue) then {player setFatigue 1;};
            };
        };
    };
};

_fnc_water = {
    if (life_thirst < 2) then {player setDamage 1; hint localize "STR_NOTF_DrinkMSG_Death";}
    else
    {
        life_thirst = life_thirst - 10;
        [] call life_fnc_hudUpdate;
        if (life_thirst < 2) then {player setDamage 1; hint localize "STR_NOTF_DrinkMSG_Death";};
        switch (life_thirst) do  {
            case 30: {hint localize "STR_NOTF_DrinkMSG_1";};
            case 20: {
                hint localize "STR_NOTF_DrinkMSG_2";
                if (_fatigue) then {player setFatigue 1;};
            };
            case 10: {
                hint localize "STR_NOTF_DrinkMSG_3";
                if (_fatigue) then {player setFatigue 1;};
            };
        };
    };
};

//Setup the time-based variables.
_foodTime = time;
_waterTime = time;
_walkDis = 0;
_lastPos = visiblePosition player;
_lastPos = (_lastPos select 0) + (_lastPos select 1);
_lastState = vehicle player;

for "_i" from 0 to 1 step 0 do {
    /* Thirst / Hunger adjustment that is time based */
    if ((time - _waterTime) > 600) then {[] call _fnc_water; _waterTime = time;};
    if ((time - _foodTime) > 850) then {[] call _fnc_food; _foodTime = time;};


    /* Check if the player's state changed? */
    if (vehicle player != _lastState || {!alive player}) then {
        [] call life_fnc_updateViewDistance;
        _lastState = vehicle player;
    };

    /* Check if the weight has changed and the player is carrying to much */
    if (life_carryWeight > life_maxWeight && {!isForcedWalk player}) then {
        player forceWalk true;
        if (_fatigue) then {player setFatigue 1;};
        hint localize "STR_NOTF_MaxWeight";
    } else {
        if (isForcedWalk player) then {
            player forceWalk false;
        };
    };

	 /* Adjustment of carrying capacity based on backpack changes */  
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
	
    /* Travelling distance to decrease thirst/hunger which is captured every second so the distance is actually greater then 650 */
    if (!alive player) then {_walkDis = 0;} else {
        _curPos = visiblePosition player;
        _curPos = (_curPos select 0) + (_curPos select 1);
        if (!(_curPos isEqualTo _lastPos) && {(isNull objectParent player)}) then {
            _walkDis = _walkDis + 1;
            if (_walkDis isEqualTo 650) then {
                _walkDis = 0;
                life_thirst = life_thirst - 5;
                life_hunger = life_hunger - 5;
                [] call life_fnc_hudUpdate;
            };
        };
        _lastPos = visiblePosition player;
        _lastPos = (_lastPos select 0) + (_lastPos select 1);
    };
    uiSleep 1;
	
	[] spawn {
	if (playerside isEqualTo west) then {
	//Unsichtbare Rucksäcke
		while {true} do {
			if (!isNull(unitBackpack player)) then {
				(unitBackpack player) setObjectTextureGlobal [0, ""]; //Macht Rucks?cke unsichtbar
			};
			Sleep 10;
		};
	};
};
};


