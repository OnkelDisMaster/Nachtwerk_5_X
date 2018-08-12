/*
    File: fn_setupActions.sqf
    Author:

    Description:
    Master addAction file handler for all client-based actions.
*/

life_actions = [];

switch (playerSide) do {

        life_actions pushBack (player addAction["<t color = '#D660D6'>Anschnallen</t>",life_fnc_seatbelt,"",7,false,false,"",' !life_seatbelt && vehicle player != player ']);
        life_actions pushBack (player addAction["<t color = '#D660D6'>Abschnallen</t>",life_fnc_seatbelt,"",7,false,false,"",' life_seatbelt && vehicle player != player ']);
		//Ausweis 
  		life_actions pushBack (player addAction["Ausweis zeigen",life_fnc_Lizenzzeigen,"",1,false,true,"",'!isNull cursorTarget && cursorTarget isKindOf "Man"']);
        
    //Civilian
    case civilian: {
        //Drop fishing net
        life_actions pushBack (player addAction[localize "STR_pAct_DropFishingNet",life_fnc_dropFishingNet,"",0,false,false,"",'
        (surfaceisWater (getPos vehicle player)) && (vehicle player isKindOf "Ship") && life_carryWeight < life_maxWeight && speed (vehicle player) < 2 && speed (vehicle player) > -1 && !life_net_dropped ']);

        //Rob person
        life_actions pushBack (player addAction[localize "STR_pAct_RobPerson",life_fnc_robAction,"",0,false,false,"",'
        !isNull cursorObject && player distance cursorObject < 3.5 && isPlayer cursorObject && animationState cursorObject == "Incapacitated" && !(cursorObject getVariable ["robbed",false]) ']);
    };
    
    //Cops
    case west: { 
        //Straßensperren aufheben
		life_actions pushBack (player addAction["Straßensperre aufheben",life_fnc_packupmauer,"",0,false,false,"",' _mauer = nearestObjects[getPos player,["RoadBarrier_F"],8] select 0; !isNil "_mauer" && !isNil {(_mauer getVariable "item")}']);
		//Schranken aufheben
		life_actions pushBack (player addAction["Schranke aufheben",life_fnc_packupschranke,"",0,false,false,"",' _schranke = nearestObjects[getPos player,["Land_BarGate_F"],8] select 0; !isNil "_schranke" && !isNil {(_schranke getVariable "item")}']);
		//Blitzer aufheben
		life_actions pushBack (player addAction["Blitzer aufheben",life_fnc_packupblitzer,"",0,false,false,"",' _blitzer = nearestObjects[getPos player,["Land_Runway_PAPI"],8] select 0; !isNil "_blitzer" && !isNil {(_blitzer getVariable "item")}']);
		//Plastikabsperrungen aufheben
		life_actions pushBack (player addAction["Plastikabsperrungen aufheben",life_fnc_packupplastik,"",0,false,false,"",' _plastik = nearestObjects[getPos player,["PlasticBarrier_02_grey_F"],8] select 0; !isNil "_plastik" && !isNil {(_plastik getVariable "item")}']);
		//Bunker aufheben
		life_actions pushBack (player addAction["Bunker abbauen",life_fnc_packupbunker,"",0,false,false,"",' _bunker = nearestObjects[getPos player,["Land_Medevac_HQ_V1_F"],8] select 0; !isNil "_bunker" && !isNil {(_bunker getVariable "item")}']);
		//Flutlicht aufheben
		life_actions pushBack (player addAction["Fluticht aufheben",life_fnc_packupflutlicht,"",0,false,false,"",' _flutlicht = nearestObjects[getPos player,["Land_PortableLight_double_F"],8] select 0; !isNil "_flutlicht" && !isNil {(_flutlicht getVariable "item")}']);
		//Lichticht aufheben
		life_actions pushBack (player addAction["Licht aufheben",life_fnc_packuplicht,"",0,false,false,"",' _licht = nearestObjects[getPos player,["Land_Flush_Light_red_F"],8] select 0; !isNil "_licht" && !isNil {(_licht getVariable "item")}']);
        
        //Aussteigen aus Fahrzeugen
		life_actions pushBack (player addAction["Get out",life_fnc_copEnter,"exit",100,false,false,"",'(vehicle player != player) && (locked(vehicle player)==2)']);
    };
    
    //EMS
    case independent: { 
        //Straßensperren aufheben
		life_actions pushBack (player addAction["Straßensperre aufheben",life_fnc_packupmauer,"",0,false,false,"",' _mauer = nearestObjects[getPos player,["RoadBarrier_F"],8] select 0; !isNil "_mauer" && !isNil {(_mauer getVariable "item")}']);
		//Schranken aufheben
		life_actions pushBack (player addAction["Schranke aufheben",life_fnc_packupschranke,"",0,false,false,"",' _schranke = nearestObjects[getPos player,["Land_BarGate_F"],8] select 0; !isNil "_schranke" && !isNil {(_schranke getVariable "item")}']);
		//Blitzer aufheben
		life_actions pushBack (player addAction["Blitzer aufheben",life_fnc_packupblitzer,"",0,false,false,"",' _blitzer = nearestObjects[getPos player,["Land_Runway_PAPI"],8] select 0; !isNil "_blitzer" && !isNil {(_blitzer getVariable "item")}']);
		//Plastikabsperrungen aufheben
		life_actions pushBack (player addAction["Plastikabsperrungen aufheben",life_fnc_packupplastik,"",0,false,false,"",' _plastik = nearestObjects[getPos player,["PlasticBarrier_02_grey_F"],8] select 0; !isNil "_plastik" && !isNil {(_plastik getVariable "item")}']);
		//Flutlicht aufheben
		life_actions pushBack (player addAction["Fluticht aufheben",life_fnc_packupflutlicht,"",0,false,false,"",' _flutlicht = nearestObjects[getPos player,["Land_PortableLight_double_F"],8] select 0; !isNil "_flutlicht" && !isNil {(_flutlicht getVariable "item")}']);
		//Lichticht aufheben
		life_actions pushBack (player addAction["Licht aufheben",life_fnc_packuplicht,"",0,false,false,"",' _licht = nearestObjects[getPos player,["Land_Flush_Light_red_F"],8] select 0; !isNil "_licht" && !isNil {(_licht getVariable "item")}']);

    };

};
