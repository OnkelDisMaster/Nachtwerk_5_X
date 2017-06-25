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
        class Kavala {
            displayName = "Kavala";
            spawnMarker = "civ_spawn_1";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "rebel", false } };
            level[] = { "", "", -1 };
        };

        class Athira {
            displayName = "Athira";
            spawnMarker = "civ_spawn_3";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Pyrgos {
            displayName = "Pyrgos";
            spawnMarker = "civ_spawn_2";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Sofia {
            displayName = "Sofia";
            spawnMarker = "civ_spawn_4";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };
		
		class EliteHQ {
            displayName = "Eliterebellen HQ";
            spawnMarker = "reb_spawn_1";
            icon = "\a3\ui_f\data\map\MapControl\bunker_ca.paa";
            licenses[] = { { "elite", true } };
            level[] = { "", "", -1 };
        };
		
        class RebelHQ {
            displayName = "Rebellen HQ";
            spawnMarker = "reb_spawn_1";
            icon = "\a3\ui_f\data\map\MapControl\bunker_ca.paa";
            licenses[] = { { "rebel", true } };
            level[] = { "", "", -1 };
        };

        class Rebellenlager {
            displayName = "Rebellenlager";
            spawnMarker = "reb_spawn_2";
            icon = "\a3\ui_f\data\map\MapControl\bunker_ca.paa";
            licenses[] = { { "rebel", true } };
            level[] = { "", "", -1 };
        };

        class RebelS {
            displayName = "Rebellen Süd";
            spawnMarker = "reb_spawn_3";
            icon = "\a3\ui_f\data\map\MapControl\bunker_ca.paa";
            licenses[] = { { "rebel", true } };
            level[] = { "", "", -1 };
        };
    };

    class Cop {
        class Kavala {
            displayName = "Kavala HQ";
            spawnMarker = "cop_spawn_1";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Athira {
            displayName = "Athira HQ";
            spawnMarker = "cop_spawn_3";
            icon = "\a3\ui_f\data\map\MapControl\fuelstation_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Pyrgos {
            displayName = "Pyrgos HQ";
            spawnMarker = "cop_spawn_2";
            icon = "\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Jail {
            displayName = "Gefängnis";
            spawnMarker = "cop_spawn_4";
            icon = "\a3\ui_f\data\map\Markers\NATO\b_air.paa";
            licenses[] = { { "cAir", true } };
            level[] = { "life_coplevel", "SCALAR", 2 };
        };

        class Schiessplatz {
            displayName = "Übungsgelände";
            spawnMarker = "spawn_trainer";
            icon = "\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa";
            licenses[] = { { "", true } };
            level[] = { "life_coplevel", "SCALAR", 1 };
        };
		
		class SEK {
            displayName = "SEK Zentrale";
            spawnMarker = "cop_spawn_5";
            icon = "\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa";
            licenses[] = { { "", true } };
            level[] = { "life_coplevel", "SCALAR", 9 };
        };
		
		class SZ2 {
            displayName = "Sicherheitszone 2";
            spawnMarker = "cop_spawn_6";
            icon = "\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa";
            licenses[] = { { "", true } };
            level[] = { "life_coplevel", "SCALAR", 1 };
        };
    };

    class Medic {
        class Kavala {
            displayName = "Kavala Hospital";
            spawnMarker = "medic_spawn_1";
            icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Sophia {
            displayName = "Sophia Regional";
            spawnMarker = "medic_spawn_3";
            icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Pyrgos {
            displayName = "Pyrgos Hospital";
            spawnMarker = "medic_spawn_2";
            icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };
		
		class Air HQ {
            displayName = "Air HQ";
            spawnMarker = "medic_spawn_4";
            icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };
    };
};
