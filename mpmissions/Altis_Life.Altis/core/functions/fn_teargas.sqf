/*
	teargas.sqf
	
	Description: activate ppEffects if a smoke grenade is near a player
	
	Author : Unknown ,reworked by Blackd0g
*/
playerNearGas=false;

[] spawn {
	while {true} do {
		if((((nearestObject [getpos player, "SmokeShellBlue"]) distance player < 20) && (getpos (nearestObject [getpos player, "SmokeShellBlue"]) select 2 < 0.5)) || (((nearestObject [getpos player, "G_40mm_SmokeBlue"]) distance player < 20) && (getpos (nearestObject [getpos player, "G_40mm_SmokeBlue"]) select 2 < 0.5)) ) then { 
            playerNearGas=true; 
		} else {
            playerNearGas=false;
		};
	uiSleep 3;
	};	
};

[] spawn {
	while {true} do {
        "dynamicBlur" ppEffectEnable true; // enables ppeffect
		"dynamicBlur" ppEffectAdjust [0]; // enables normal vision
		"dynamicBlur" ppEffectCommit 15; // time it takes to normal
		resetCamShake; // resets the shake
		20 fadeSound 1; //fades the sound back to normal
		
		waituntil {playerNearGas}; // Wait till a Gas Grenade is near player


	/*	if (vest player != "V_PlateCarrier1_blk" || vest player != "V_PlateCarrierSpec_blk") then {
            antidote1 = 2583
        }; // Player has no Suit
		if (vest player == "V_PlateCarrier1_blk" || vest player == "V_PlateCarrierSpec_blk") then {
            antidote1 = 2581
        }; // Player carries the Gas Suit   */
		
		if (playerSide == civilian) then {
            antidote1 = 2583
        };
		if (playerSide == west || playerSide == independent) then {
            antidote1 = 2581
        };
		

		if (antidote1 == 2583) then {
            "dynamicBlur" ppEffectEnable true; // enables ppeffect
            "dynamicBlur" ppEffectAdjust [20]; // intensity of blur
            "dynamicBlur" ppEffectCommit 4; // time till vision is fully blurred
            enableCamShake false; // enables camera shake
            addCamShake [10, 45, 10]; // sets shakevalues
            player setFatigue 1; // sets the fatigue to 100%
            5 fadeSound 0.1; // fades the sound to 10% in 5 seconds
		};

	uiSleep 1;
	};
};