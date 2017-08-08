/*
*    Format:
*        licenses: ARRAY (This is for limiting spawn to certain things)
*           0: License Name
*           1: License Check Type
*                false: If license isn't set
*                true: If license is set
*           Example:
*                licenses[] = { { "pilot", true }, { "rebel", false } }; //Shows up for players with pilot and without rebel license.
*
*        level: ARRAY (This is for limiting spawn to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL / INVERSE)
*                SCALAR: VALUE => VALUE
*                BOOL: VALUE EXISTS
*                EQUAL: VALUE == VALUE
*                INVERSE: VALUE <= VALUE
*            2: What to compare to (-1 = Check Disabled)
*
*/
class CfgSpawnPoints {
    class Civilian {
        class LaTrinite {
            displayName = "LaTrinite Hauptstadt";
            spawnMarker = "civ_spawn_1";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };
		
		class Flugfeld {
            displayName = "Flugfeld";
            spawnMarker = "civ_spawn_2";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "pilot", true } };
            level[] = { "", "", -1 };
        };
		
        class Chapoi {
            displayName = "Chapoi";
            spawnMarker = "civ_spawn_3";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Pessagne {
            displayName = "Pessagne";
            spawnMarker = "civ_spawn_4";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };
		
		class TWL {
            displayName = "TWL Base";
            spawnMarker = "twl_spawn";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "gang_twl", true } };
            level[] = { "", "", -1 };
        };
		
		class IRA {
            displayName = "IRA Base";
            spawnMarker = "ira_spawn";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "gang_ira", true } };
            level[] = { "", "", -1 };
        };
		
		class BT {
            displayName = "BT Base";
            spawnMarker = "bt_spawn";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "gang_bt", true } };
            level[] = { "", "", -1 };
        };

        class RebelN {
            displayName = "Rebellen HQ Nord";
            spawnMarker = "reb_spawn_1";
            icon = "\a3\ui_f\data\map\MapControl\bunker_ca.paa";
            licenses[] = { { "rebel", true } };
            level[] = { "", "", -1 };
        };
		
		class Elite {
            displayName = "Elite Rebellen HQ";
            spawnMarker = "elite_spawn";
            icon = "\a3\ui_f\data\map\MapControl\bunker_ca.paa";
            licenses[] = { { "elite", true } };
            level[] = { "", "", -1 };
        };
    };

    class Cop {
        class LaTrinite {
            displayName = "La Trinite HQ";
            spawnMarker = "cop_spawn_1";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Chapoi {
            displayName = "Chapoi HQ";
            spawnMarker = "cop_spawn_2";
            icon = "\a3\ui_f\data\map\MapControl\fuelstation_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Pessagne {
            displayName = "Pessagne HQ";
            spawnMarker = "cop_spawn_3";
            icon = "\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Air {
            displayName = "Gefängnis";
            spawnMarker = "cop_spawn_4";
            icon = "\a3\ui_f\data\map\Markers\NATO\b_air.paa";
            licenses[] = { { "cAir", true } };
            level[] = { "life_coplevel", "SCALAR", 2 };
        };
		
		class ubung {
            displayName = "Schießplatz";
            spawnMarker = "cop_spawn_5";
            icon = "\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };
		
        class SEK {
            displayName = "SEK Zentrale";
            spawnMarker = "sek_spawn";
            icon = "\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa";
            licenses[] = { { "", true } };
            level[] = { "life_coplevel", "SCALAR", 9 };
        };
		
	/*	class sek {
            displayName = "SEK Zentrale";
            spawnMarker = "cop_spawn_6";
            icon = "\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa";
            licenses[] = { { "", true } };
            level[] = { "life_coplevel", "SCALAR", 9 };
        };	*/
    };

    class Medic {
        class LaTrinite {
            displayName = "LaTrinite Krankenhaus";
            spawnMarker = "med_spawn_1";
            icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Flugfeld {
            displayName = "Krankenhaus-Flugstation";
            spawnMarker = "med_spawn_2";
            icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };
    };
};
