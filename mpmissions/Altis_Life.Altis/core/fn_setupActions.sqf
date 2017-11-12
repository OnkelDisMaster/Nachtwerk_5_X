/*
    File: fn_setupActions.sqf
    Author:

    Description:
    Master addAction file handler for all client-based actions.
*/
switch (playerSide) do {
    case west:
	{
		life_actions pushBack (player addAction["<t color = '#D660D6'>Anschnallen</t>",life_fnc_seatbelt,"",7,false,false,"",' !life_seatbelt && vehicle player != player ']);
		life_actions pushBack (player addAction["<t color = '#D660D6'>Abschnallen</t>",life_fnc_seatbelt,"",7,false,false,"",' life_seatbelt && vehicle player != player ']);
		//Straßensperren aufheben
		life_actions = life_actions + [player addAction["Straßensperre aufheben",life_fnc_packupmauer,"",0,false,false,"",' _mauer = nearestObjects[getPos player,["RoadBarrier_F"],8] select 0; !isNil "_mauer" && !isNil {(_mauer getVariable "item")}']];
		//Schranken aufheben
		life_actions = life_actions + [player addAction["Schranke aufheben",life_fnc_packupschranke,"",0,false,false,"",' _schranke = nearestObjects[getPos player,["Land_BarGate_F"],8] select 0; !isNil "_schranke" && !isNil {(_schranke getVariable "item")}']];
		//Blitzer aufheben
		life_actions = life_actions + [player addAction["Blitzer aufheben",life_fnc_packupblitzer,"",0,false,false,"",' _blitzer = nearestObjects[getPos player,["Land_Runway_PAPI"],8] select 0; !isNil "_blitzer" && !isNil {(_blitzer getVariable "item")}']];
		//Plastikabsperrungen aufheben
		life_actions = life_actions + [player addAction["Plastikabsperrungen aufheben",life_fnc_packupplastik,"",0,false,false,"",' _plastik = nearestObjects[getPos player,["PlasticBarrier_02_grey_F"],8] select 0; !isNil "_plastik" && !isNil {(_plastik getVariable "item")}']];
		//Bunker aufheben
		life_actions = life_actions + [player addAction["Bunker abbauen",life_fnc_packupbunker,"",0,false,false,"",' _bunker = nearestObjects[getPos player,["Land_Medevac_HQ_V1_F"],8] select 0; !isNil "_bunker" && !isNil {(_bunker getVariable "item")}']];
		//Flutlicht aufheben
		life_actions = life_actions + [player addAction["Fluticht aufheben",life_fnc_packupflutlicht,"",0,false,false,"",' _flutlicht = nearestObjects[getPos player,["Land_PortableLight_double_F"],8] select 0; !isNil "_flutlicht" && !isNil {(_flutlicht getVariable "item")}']];
		//Lichticht aufheben
		life_actions = life_actions + [player addAction["Licht aufheben",life_fnc_packuplicht,"",0,false,false,"",' _licht = nearestObjects[getPos player,["Land_Flush_Light_red_F"],8] select 0; !isNil "_licht" && !isNil {(_licht getVariable "item")}']];
		
		//Nagelbänder aufheben
		life_actions = life_actions + [player addAction["Nagelband aufheben",life_fnc_packupSpikes,"",0,false,false,"",' _spikes = nearestObjects[getPos player,["Land_Razorwire_F"],8] select 0; !isNil "_spikes" && !isNil {(_spikes getVariable "item")}']];
		//Aussteigen aus Fahrzeugen
		life_actions = life_actions + [player addAction["Get out",life_fnc_copEnter,"exit",100,false,false,"",'(vehicle player != player) && (locked(vehicle player)==2)']];
		//Hinsetzen
		life_actions = life_actions + [player addAction["Hinsetzen",life_fnc_sitDown,cursorTarget,10,false,false,"",' !isNull cursorTarget && (player distance cursorTarget) < 3 && (typeOf (cursorTarget) in ["Land_Cha_ChairPlastic_F", "Land_CampingChair_V1_F", "Land_CampingChair_V2_F", "Land_ChairWood_F", "Land_OfficeChair_01_F", "Land_Bench_F", "Land_ChairPlastic_F", "Land_RattanChair_01_F"])']];
		//Aufstehen
		life_actions = life_actions + [player addAction["Aufstehen", life_fnc_sitDown,cursorTarget,10,false,false,"",'life_sitting']];
		//Ausweis 
  		life_actions = life_actions + [player addAction["Ausweis zeigen",life_fnc_Lizenzzeigen,"",1,false,true,"",'!isNull cursorTarget && cursorTarget isKindOf "Man"']];
		};
	case civilian:
	{
		life_actions pushBack (player addAction["<t color = '#D660D6'>Anschnallen</t>",life_fnc_seatbelt,"",7,false,false,"",' !life_seatbelt && vehicle player != player ']);
		life_actions pushBack (player addAction["<t color = '#D660D6'>Abschnallen</t>",life_fnc_seatbelt,"",7,false,false,"",' life_seatbelt && vehicle player != player ']);
		//Take The Organs
		life_actions = life_actions + [player addAction["Steal Organs",life_fnc_takeOrgans,"",0,false,false,"",'!isNull cursorTarget && cursorTarget isKindOf "Man" && (isPlayer cursorTarget) && alive cursorTarget && cursorTarget distance player < 3.5 && !(cursorTarget getVariable ["missingOrgan",FALSE]) && !(player getVariable "Escorting") && !(player getVariable "hasOrgan") && !(player getVariable "transporting") && animationState cursorTarget == "Incapacitated"']];
		//Hinsetzen
		life_actions = life_actions + [player addAction["Hinsetzen",life_fnc_sitDown,cursorTarget,10,false,false,"",' !isNull cursorTarget && (player distance cursorTarget) < 3 && (typeOf (cursorTarget) in ["Land_Cha_ChairPlastic_F", "Land_CampingChair_V1_F", "Land_CampingChair_V2_F", "Land_ChairWood_F", "Land_OfficeChair_01_F", "Land_Bench_F", "Land_ChairPlastic_F", "Land_RattanChair_01_F"])']];
		//Aufstehen
		life_actions = life_actions + [player addAction["Aufstehen", life_fnc_sitDown,cursorTarget,10,false,false,"",'life_sitting']];
		//Ausweis
 	    life_actions = life_actions + [player addAction["Ausweis zeigen",life_fnc_Lizenzzeigen,"",1,false,true,"",'!isNull cursorTarget && cursorTarget isKindOf "Man"']];
		};
	case independent:
 	{
		life_actions pushBack (player addAction["<t color = '#D660D6'>Anschnallen</t>",life_fnc_seatbelt,"",7,false,false,"",' !life_seatbelt && vehicle player != player ']);
		life_actions pushBack (player addAction["<t color = '#D660D6'>Abschnallen</t>",life_fnc_seatbelt,"",7,false,false,"",' life_seatbelt && vehicle player != player ']);
        //Hinsetzen
		life_actions = life_actions + [player addAction["Hinsetzen",life_fnc_sitDown,cursorTarget,10,false,false,"",' !isNull cursorTarget && (player distance cursorTarget) < 3 && (typeOf (cursorTarget) in ["Land_Cha_ChairPlastic_F", "Land_CampingChair_V1_F", "Land_CampingChair_V2_F", "Land_ChairWood_F", "Land_OfficeChair_01_F", "Land_Bench_F", "Land_ChairPlastic_F", "Land_RattanChair_01_F"])']];
		//Aufstehen
		life_actions = life_actions + [player addAction["Aufstehen", life_fnc_sitDown,cursorTarget,10,false,false,"",'life_sitting']];
		//Ausweis  
  		life_actions = life_actions + [player addAction["Ausweis zeigen",life_fnc_Lizenzzeigen,"",1,false,true,"",'!isNull cursorTarget && cursorTarget isKindOf "Man"']];
		//Straßensperren aufheben
		life_actions = life_actions + [player addAction["Straßensperre aufheben",life_fnc_packupmauer,"",0,false,false,"",' _mauer = nearestObjects[getPos player,["RoadBarrier_F"],8] select 0; !isNil "_mauer" && !isNil {(_mauer getVariable "item")}']];
		//Nagelbänder aufheben
		life_actions = life_actions + [player addAction["Nagelband aufheben",life_fnc_packupSpikes,"",0,false,false,"",' _spikes = nearestObjects[getPos player,["Land_Razorwire_F"],8] select 0; !isNil "_spikes" && !isNil {(_spikes getVariable "item")}']];
		//Plastikabsperrungen aufheben
		life_actions = life_actions + [player addAction["Plastikabsperrungen aufheben",life_fnc_packupplastik,"",0,false,false,"",' _plastik = nearestObjects[getPos player,["PlasticBarrier_02_grey_F"],8] select 0; !isNil "_plastik" && !isNil {(_plastik getVariable "item")}']];
		//Bunker aufheben
		life_actions = life_actions + [player addAction["Bunker abbauen",life_fnc_packupbunker,"",0,false,false,"",' _bunker = nearestObjects[getPos player,["Land_Medevac_HQ_V1_F"],8] select 0; !isNil "_bunker" && !isNil {(_bunker getVariable "item")}']];
		//Flutlicht aufheben
		life_actions = life_actions + [player addAction["Fluticht aufheben",life_fnc_packupflutlicht,"",0,false,false,"",' _flutlicht = nearestObjects[getPos player,["Land_PortableLight_double_F"],8] select 0; !isNil "_flutlicht" && !isNil {(_flutlicht getVariable "item")}']];
		//Lichticht aufheben
		life_actions = life_actions + [player addAction["Licht aufheben",life_fnc_packuplicht,"",0,false,false,"",' _licht = nearestObjects[getPos player,["Land_Flush_Light_red_F"],8] select 0; !isNil "_licht" && !isNil {(_licht getVariable "item")}']];
	};
};
