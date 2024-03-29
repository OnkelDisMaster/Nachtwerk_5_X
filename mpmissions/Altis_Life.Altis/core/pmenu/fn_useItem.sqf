#include "..\..\script_macros.hpp"
/*
    File: fn_useItem.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Main function for item effects and functionality through the player menu.
*/
private "_item";
disableSerialization;
if ((lbCurSel 2005) isEqualTo -1) exitWith {hint localize "STR_ISTR_SelectItemFirst";};
_item = CONTROL_DATA(2005);

switch (true) do {
    case (_item in ["waterBottle","coffee","redgull","redGullPalette"]): {
        if ([false,_item,1] call life_fnc_handleInv) then {
            life_thirst = 100;
            if ((_item isEqualTo "redgull") && (playerside isEqualTo civilian)) then {
                [] spawn {
                    life_redgull_effect = time;
                    titleText[localize "STR_ISTR_RedGullEffect","PLAIN"];
                    player enableFatigue false;
                    waitUntil {!alive player || ((time - life_redgull_effect) > (3 * 60))};
                    player enableFatigue true;
                };
            };
			if ((_item isEqualTo "redGullPalette") && (playerside isEqualTo civilian)) then {
                [] spawn {
                    titleText["Du fühlst dich für die restliche Inselperiode beflügelt!","PLAIN"];
					life_redgull_effect = -1;
                    player enableFatigue false;
                };
            };
        };
    };
	
	case (_item == "schmerzmittel"):
	{
		if(vehicle player != player) exitWith {hintSilent "Du kannst dich nicht in einem Fahrzeug heilen..."};
		if(([false,_item,1] call life_fnc_handleInv)) then
		{
			player setDamage 0;
		//	player setFatigue 0;
			player allowDamage true;
			player enableSimulation true;
			closeDialog 0;
			hintSilent "Die Schmerzmittel haben gewirkt! Du hast nun wieder volles Leben."
		};
	};
	
    case (_item isEqualTo "boltcutter"): {
        [cursorObject] spawn life_fnc_boltcutter;
        closeDialog 0;
    };
	
	case (_item isEqualTo "implantatHitmarker"): {
		if (playerSide != civilian) exitWith {hint "Du kannst diesen Gegenstand nicht benutzen!"};
		if (license_civ_implantat_hitmarker) exitWith {hint "Du besitzt dieses Implantat bereits!";};
		if ([false,_item,1] call life_fnc_handleInv) then {
            license_civ_implantat_hitmarker = true;
			closeDialog 0;
        };
    };
	
	case (_item isEqualTo "implantatPaycheck"): {
		if (playerSide != civilian) exitWith {hint "Du kannst diesen Gegenstand nicht benutzen!"};
		if (license_civ_implantat_paycheck) exitWith {hint "Du besitzt dieses Implantat bereits!";};
		if ([false,_item,1] call life_fnc_handleInv) then {
            license_civ_implantat_paycheck = true;
			closeDialog 0;
        };
    };
	
	case (_item isEqualTo "implantatBackpack"): {
		if (playerSide != civilian) exitWith {hint "Du kannst diesen Gegenstand nicht benutzen!"};
		if (license_civ_implantat_backpack) exitWith {hint "Du besitzt dieses Implantat bereits!";};
		if ([false,_item,1] call life_fnc_handleInv) then {
            license_civ_implantat_backpack = true;
			closeDialog 0;
        };
    };
	
	case (_item isEqualTo "implantatAusdauer"): {
		if (playerSide != civilian) exitWith {hint "Du kannst diesen Gegenstand nicht benutzen!"}; 
		if (license_civ_implantat_ausdauer) exitWith {hint "Du besitzt dieses Implantat bereits!";};
		if ([false,_item,1] call life_fnc_handleInv) then {
            license_civ_implantat_ausdauer = true;
			closeDialog 0;
        };   
    };
	
	case (_item isEqualTo "implantatSchneller"): {
		if (playerSide != civilian) exitWith {hint "Du kannst diesen Gegenstand nicht benutzen!"};
		if (license_civ_implantat_schneller) exitWith {hint "Du besitzt dieses Implantat bereits!";};
		if ([false,_item,1] call life_fnc_handleInv) then {
            license_civ_implantat_schneller = true;
			closeDialog 0;
        };  
    };
	
	case (_item isEqualTo "implantatNachtsicht"): {
		if (playerSide != civilian) exitWith {hint "Du kannst diesen Gegenstand nicht benutzen!"};
		if (license_civ_implantat_nachtsicht) exitWith {hint "Du besitzt dieses Implantat bereits!";};
		if ([false,_item,1] call life_fnc_handleInv) then {
            license_civ_implantat_nachtsicht = true;
			closeDialog 0;
        };  
    };
	
	case (_item isEqualTo "gpstracker"): {
        [cursorObject] spawn life_fnc_gpsTracker;
        closeDialog 0;
    };

    case (_item isEqualTo "blastingcharge"): {
        player reveal fed_bank;
        (group player) reveal fed_bank;
        [cursorObject] spawn life_fnc_blastingCharge;
        closeDialog 0;
    };
	
	case (_item isEqualTo "speedbomb"):
    {
    	[] spawn life_fnc_speedBomb;
    };
	
    case (_item isEqualTo "defusekit"): {
        [cursorObject] spawn life_fnc_defuseKit;
        closeDialog 0;
    };

    case (_item isEqualTo "storagesmall"): {
        [false] call life_fnc_storageBox;
    };

    case (_item isEqualTo "storagebig"): {
        [true] call life_fnc_storageBox;
    };

    case (_item isEqualTo "spikeStrip"): {
        if (!isNull life_spikestrip) exitWith {hint localize "STR_ISTR_SpikesDeployment"; closeDialog 0};
        if ([false,_item,1] call life_fnc_handleInv) then {
            [] spawn life_fnc_spikeStrip;
            closeDialog 0;
        };
    };
	
	case (_item isEqualTo "blitzer"): {
        if (!isNull life_spikestrip) exitWith {hint localize "STR_ISTR_SpikesDeployment"; closeDialog 0};
        if ([false,_item,1] call life_fnc_handleInv) then {
            [] spawn life_fnc_blitzer;
            closeDialog 0;
        };
    };
	
	case (_item isEqualTo "bunker"): {
        if (!isNull life_spikestrip) exitWith {hint localize "STR_ISTR_SpikesDeployment"; closeDialog 0};
        if ([false,_item,1] call life_fnc_handleInv) then {
            [] spawn life_fnc_bunker;
            closeDialog 0;
        };
    };
	
	case (_item isEqualTo "flutlicht"): {
        if (!isNull life_spikestrip) exitWith {hint localize "STR_ISTR_SpikesDeployment"; closeDialog 0};
        if ([false,_item,1] call life_fnc_handleInv) then {
            [] spawn life_fnc_flutlicht;
            closeDialog 0;
        };
    };
	
	case (_item isEqualTo "licht"): {
        if (!isNull life_spikestrip) exitWith {hint localize "STR_ISTR_SpikesDeployment"; closeDialog 0};
        if ([false,_item,1] call life_fnc_handleInv) then {
            [] spawn life_fnc_licht;
            closeDialog 0;
        };
    };
	
	case (_item isEqualTo "plastik"): {
        if (!isNull life_spikestrip) exitWith {hint localize "STR_ISTR_SpikesDeployment"; closeDialog 0};
        if ([false,_item,1] call life_fnc_handleInv) then {
            [] spawn life_fnc_plastik;
            closeDialog 0;
        };
    };
	
	case (_item isEqualTo "schranke"): {
        if (!isNull life_spikestrip) exitWith {hint localize "STR_ISTR_SpikesDeployment"; closeDialog 0};
        if ([false,_item,1] call life_fnc_handleInv) then {
            [] spawn life_fnc_schranke;
            closeDialog 0;
        };
    };
	
	case (_item isEqualTo "mauer"): {
        if (!isNull life_spikestrip) exitWith {hint localize "STR_ISTR_SpikesDeployment"; closeDialog 0};
        if ([false,_item,1] call life_fnc_handleInv) then {
            [] spawn life_fnc_mauer;
            closeDialog 0;
        };
    };

    case (_item isEqualTo "fuelFull"): {
        if (vehicle player != player) exitWith {hint localize "STR_ISTR_RefuelInVehicle"};
        [] spawn life_fnc_jerryRefuel;
        closeDialog 0;
    };

    case (_item isEqualTo "fuelEmpty"): {
        [] spawn life_fnc_jerrycanRefuel;
        closeDialog 0;
    };

    case (_item isEqualTo "lockpick"): {
        [] spawn life_fnc_lockpick;
        closeDialog 0;
    };

    case (_item in ["apple","rabbit","salema","ornate","mackerel","tuna","mullet","catshark","turtle_soup","hen","rooster","sheep","goat","donuts","tbacon","peach"]): {
        if (!(M_CONFIG(getNumber,"VirtualItems",_item,"edible") isEqualTo -1)) then {
            if ([false,_item,1] call life_fnc_handleInv) then {
                _val = M_CONFIG(getNumber,"VirtualItems",_item,"edible");
                _sum = life_hunger + _val;
                switch (true) do {
                    case (_val < 0 && _sum < 1): {life_hunger = 5;}; //This adds the ability to set the entry edible to a negative value and decrease the hunger without death
                    case (_sum > 100): {life_hunger = 100;};
                    default {life_hunger = _sum;};
                };
            };
        };
    };

    default {
        hint localize "STR_ISTR_NotUsable";
    };
};

[] call life_fnc_p_updateMenu;
[] call life_fnc_hudUpdate;