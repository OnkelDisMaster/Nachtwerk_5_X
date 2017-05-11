/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 6500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 9850, -1 },
            { "hgun_ACPC2_F", "", 11500, -1 },
            { "hgun_PDW2000_F", "", 20000, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 2500 }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_TRG20_F", "", 25000, 2500 },
            { "arifle_Katiba_F", "", 30000, 5000 },
            { "srifle_DMR_01_F", "", 50000, -1 },
            { "arifle_SDAR_F", "", 20000, 7500 },
			{ "srifle_EBR_F", "", 100000, -1 },
			{ "srifle_LRR_F", "", 800000, -1 },
			{ "LMG_Mk200_F", "", 200000, -1 },
			{ "hgun_ACPC2_F", "", 20000, -1 },
			{ "hgun_Pistol_heavy_01_F", "", 20000, -1 },
			{ "hgun_Pistol_heavy_02_F", "", 20000, -1 },
			{ "hgun_Rook40_F", "", 20000, -1 },
			{ "arifle_Mk20_F", "", 25000, -1 },
			{ "arifle_MXC_F", "", 50000, -1 },
			{ "arifle_MX_F", "", 50000, -1 },
			{ "arifle_MX_SW_F", "", 80000, -1 },
			{ "arifle_MXM_F", "", 100000, -1 },
			{ "launch_RPG7_F", "", 600000, -1 },
			{ "Rangefinder", "", 6000, -1 },
			{ "NVGoggles", "", 600, -1 },
			{ "FirstAidKit", "", 600, -1 },
			{ "ToolKit", "", 600, -1 }
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 300 },
            { "30Rnd_65x39_caseless_green", "", 275 },
            { "10Rnd_762x54_Mag", "", 500 },
			{ "20Rnd_762x51_Mag", "", 500 },
			{ "7Rnd_408_Mag", "", 1000 },
			{ "200Rnd_65x39_cased_Box", "", 600 },
			{ "200Rnd_65x39_cased_Box_Tracer", "", 600 },
			{ "9Rnd_45ACP_Mag", "", 500 },
			{ "11Rnd_45ACP_Mag", "", 500 },
			{ "6Rnd_45ACP_Cylinder", "", 500 },
			{ "16Rnd_9x21_Mag", "", 500 },
			{ "30Rnd_9x21_Mag", "", 500 },
			{ "30Rnd_65x39_caseless_mag", "", 800 },
			{ "100Rnd_65x39_caseless_mag", "", 5000 },
			{ "RPG7_F", "", 50000 },
            { "20Rnd_556x45_UW_mag", "", 125 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500 },
            { "optic_Holosight", "", 3600 },
            { "optic_Hamr", "", 7500 },
			{ "muzzle_snds_H", "", 750 },
			{ "muzzle_snds_L", "", 750 },
			{ "muzzle_snds_M", "", 750 },
			{ "muzzle_snds_B", "", 750 },
			{ "muzzle_snds_H_MG", "", 750 },
			{ "optic_Arco", "", 7500 },
			{ "optic_Aco", "", 7500 },
			{ "acc_pointer_IR", "", 750 },
			{ "optic_SOS", "", 7500 },
			{ "optic_MRCO", "", 7500 },
			{ "muzzle_snds_acp", "", 750 },
			{ "optic_NVS", "", 70500 },
			{ "optic_DMS", "", 7500 },
			{ "optic_Yorris", "", 7500 },
			{ "optic_LRPS", "", 70500 },
			{ "optic_ERCO_blk_F", "", 7500 },
			{ "bipod_01_F_khk", "", 7500 },
			{ "optic_KHS_old", "", 7500 },
			{ "optic_AMS", "", 7500 },
            { "acc_flashlight", "", 100 }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 1500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 2500, -1 },
            { "hgun_ACPC2_F", "", 4500, -1 },
            { "hgun_PDW2000_F", "", 9500, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 950 }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 },
            { "Chemlight_red", "", 300, -1 },
            { "Chemlight_yellow", "", 300, 50 },
            { "Chemlight_green", "", 300, 50 },
            { "Chemlight_blue", "", 300, 50 }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 750, -1 },
            { "ItemGPS", "", 500, 45 },
            { "ItemMap", "", 250, 35 },
            { "ItemCompass", "", 250, 25 },
            { "ItemWatch", "", 250, -1 },
            { "FirstAidKit", "", 750, 65 },
            { "NVGoggles", "", 10000, 980 },
            { "Chemlight_red", "", 1500, -1 },
            { "Chemlight_yellow", "", 1500, 50 },
            { "Chemlight_green", "", 1500, 50 },
            { "Chemlight_blue", "", 1500, 50 }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Altis Cop Shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_sdar_F", "Taser Rifle", 20000, 7500 },
            { "hgun_P07_snds_F", "Stun Pistol", 2000, 650 },
            { "hgun_P07_F", "", 7500, 1500 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 45 }
        };
        accs[] = {
            { "muzzle_snds_L", "", 650 }
        };
    };

    class cop_patrol {
        name = "Altis Patrol Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "You must be a Patrol Officer Rank!" };
        items[] = {
            { "arifle_MX_Black_F", "", 35000, 7500 },
			{ "arifle_SPAR_01_blk_F", "", 35000, 7500 },
			{ "arifle_SPAR_03_blk_F", "", 35000, 7500 },
			{ "srifle_EBR_F", "", 35000, 7500 },
            { "SMG_02_ACO_F", "", 30000, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "acc_flashlight", "", 750, 100 },
            { "optic_Holosight", "", 1200, 275 },
            { "optic_Arco", "", 2500, -1 },
            { "muzzle_snds_H", "", 2750, -1 },
			{ "optic_Hamr", "", 2500, -1 },
			{ "optic_Holosight", "", 2500, -1 },
			{ "muzzle_snds_B", "", 2500, -1 },
			{ "muzzle_snds_H", "", 2500, -1 }
        };
        mags[] = {
            { "30Rnd_65x39_caseless_mag", "", 130 },
			{ "30Rnd_556x45_Stanag", "", 130 },
			{ "20Rnd_762x51_Mag", "", 130 },
			{ "30Rnd_65x39_caseless_mag", "", 130 },
            { "30Rnd_9x21_Mag", "", 250 },
        };
        accs[] = {
            { "acc_flashlight", "", 750 },
            { "optic_Holosight", "", 1200 },
            { "optic_Arco", "", 2500 },
            { "muzzle_snds_H", "", 2750 },
			{ "optic_Holosight", "", 2750 },
			{ "optic_Hamr", "", 2500 },
			{ "muzzle_snds_B", "", 2500, -1 },
			{ "muzzle_snds_H", "", 2500, -1 }
        };
    };

    class cop_sergeant {
        name = "Altis Sergeant Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a Sergeant Rank!" };
        items[] = {
            { "hgun_ACPC2_F", "", 17500, -1 },
			{ "srifle_DMR_02_F", "", 175000, -1 },
			{ "srifle_DMR_03_F", "", 175000, -1 },
			{ "srifle_DMR_05_blk_F", "", 175000, -1 },
			{ "arifle_SPAR_02_blk_F", "", 40000, -1 },
            { "SMG_02_ACO_F", "", 15000, -1 },
            { "arifle_MXC_Black_F", "", 30000, 5000 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "optic_Arco", "", 2500, -1 },
			{ "	Rangefinder", "", 2500, -1 },
            { "muzzle_snds_H", "", 2750, -1 },
			{ "optic_KHS_blk", "", 2500, -1 },
			{ "bipod_01_F_blk", "", 2500, -1 },
			{ "optic_Hamr", "", 2500, -1 },
			{ "optic_Holosight", "", 2500, -1 },
			{ "muzzle_snds_B", "", 2500, -1 },
			{ "muzzle_snds_H", "", 2500, -1 },
			{ "optic_AMS", "", 2500, -1 },
			{ "muzzle_snds_M", "", 2500, -1 }
        };
        mags[] = {
            { "10Rnd_338_Mag", "", 2000 },
			{ "20Rnd_762x51_Mag", "", 2000 },
			{ "10Rnd_93x64_DMR_05_Mag", "", 2000 },
			{ "9Rnd_45ACP_Mag", "", 200 },
            { "30Rnd_9x21_Mag", "", 60 },
            { "30Rnd_65x39_caseless_mag", "", 100 },
			{ "150Rnd_556x45_Drum_Mag_F", "", 100 }
        };
        accs[] = {
            { "optic_Arco", "", 2500 },
            { "optic_Holosight", "", 2750 },
			{ "optic_Hamr", "", 2500 },
			{ "bipod_01_F_blk", "", 2500 },
			{ "optic_KHS_blk", "", 2500 },
			{ "muzzle_snds_H", "", 2500 },
			{ "muzzle_snds_B", "", 2500, -1 },
			{ "muzzle_snds_H", "", 2500, -1 },
			{ "optic_AMS", "", 2500, -1 },
			{ "muzzle_snds_M", "", 2500, -1 }
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 100, 45 },
            { "Binocular", "", 150, -1 },
            { "FirstAidKit", "", 150, 65 },
			{ "Medikit", "", 150, 65 },
            { "NVGoggles", "", 1200, 980 }
        };
        mags[] = {};
        accs[] = {};
    };
};
