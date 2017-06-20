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
			{ "hgun_PDW2000_F", "", 30000, -1 },
			{ "SMG_01_F", "", 45000, -1 },
			{ "SMG_02_F", "", 55500, -1 },
			{ "arifle_SDAR_F", "", 25500, -1 }           
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 250 },
            { "6Rnd_45ACP_Cylinder", "", 500 },
            { "9Rnd_45ACP_Mag", "", 450 },
            { "30Rnd_9x21_Mag", "", 750 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 750 },
			{ "20Rnd_556x45_UW_mag", "", 750 },
			{ "30Rnd_556x45_Stanag", "", 750 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 7500 }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_TRG20_F", "", 85000, 2500 },
            { "arifle_Katiba_F", "", 120000, 5000 },
            { "srifle_DMR_01_F", "", 80000, -1 },
            { "arifle_SDAR_F", "", 20000, 7500 },
			{ "arifle_AKM_F", "", 100000, 2500 },
			{ "arifle_AKS_F", "", 95000, 2500 },
			{ "arifle_MX_F", "", 175000, 2500 },
			{ "arifle_MXC_F", "", 170000, 2500 },
			{ "arifle_MX_SW_F", "", 200000, 2500 },
			{ "arifle_MXM_F", "", 210000, 2500 },
			{ "srifle_DMR_03_F", "", 185000, 2500 },
			{ "srifle_EBR_F", "", 250000, 2500 }			
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 3000 },
            { "30Rnd_65x39_caseless_green", "", 2750 },
            { "10Rnd_762x54_Mag", "", 15000 },
            { "20Rnd_556x45_UW_mag", "", 1250 },
			{ "30Rnd_762x39_Mag_Tracer_F", "", 15000 },
			{ "30Rnd_545x39_Mag_Tracer_F", "", 15000 },
			{ "30Rnd_65x39_caseless_mag", "", 5000 },
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 5000 },
			{ "100Rnd_65x39_caseless_mag", "", 9000 },
			{ "20Rnd_762x51_Mag", "", 15000 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 12500 },
			{ "optic_MRCO", "", 12500 },
			{ "optic_Arco", "", 12500 },
			{ "optic_ERCO_blk_F", "", 12500 },
			{ "optic_ERCO_snd_F", "", 12500 },
            { "optic_Holosight", "", 12500 },
            { "optic_Hamr", "", 12500 },
			{ "optic_DMS", "", 35000 },
			{ "optic_NVS", "", 15500 },
            { "acc_flashlight", "", 3000 },
			{ "bipod_01_F_blk", "", 3000 },
			{ "bipod_01_F_snd", "", 3000 }	
        };
    };
	
	class pro_rebel {
        name = "Profi Rebellen Shop";
        side = "civ";
        license = "pro_rebel";
        level[] = { "", "", -1, "" };
        items[] = {			
			{ "LMG_Mk200_F", "", 350000, 2500 },
            { "srifle_LRR_F", "", 650000, 2500 },
            { "arifle_ARX_hex_F", "", 300000, 5000 },
            { "srifle_DMR_02_camo_F", "", 370000, 7500 },
			{ "srifle_DMR_05_hex_F", "", 450000, 5000 },
            { "LMG_Zafir_F", "", 470000, -1 }
        };
        mags[] = {
            { "200Rnd_65x39_cased_Box_Tracer", "", 20000 },
			{ "7Rnd_408_Mag", "", 35000 },
            { "30Rnd_65x39_caseless_green", "", 5000 },
            { "10Rnd_50BW_Mag_F", "", 50000 },
            { "10Rnd_338_Mag", "", 25000 },
			{ "10Rnd_93x64_DMR_05_Mag", "", 25000 },
			{ "150Rnd_762x54_Box_Tracer", "", 18000 }
        };
        accs[] = {
			{ "Rangefinder", "", 12500 },
            { "optic_ACO_grn", "", 12500 },
			{ "optic_MRCO", "", 12500 },
			{ "optic_Arco", "", 12500 },
			{ "optic_ERCO_blk_F", "", 12500 },
			{ "optic_ERCO_snd_F", "", 12500 },
            { "optic_Holosight", "", 12500 },
            { "optic_Hamr", "", 12500 },
			{ "optic_DMS", "", 35000 },
			{ "optic_KHS_blk", "", 35000 },
			{ "optic_AMS", "", 35000 },
			{ "optic_LRPS", "", 35000 },
			{ "optic_NVS", "", 15500 },
            { "acc_flashlight", "", 3000 },
			{ "muzzle_snds_L", "", 15500 },
			{ "muzzle_snds_M", "", 15500 },
			{ "muzzle_snds_H", "", 15500 },
			{ "muzzle_snds_B", "", 15500 },
			{ "muzzle_snds_65_TI_blk_F", "", 15500 },
			{ "muzzle_snds_65_TI_hex_F", "", 15500 },
			{ "muzzle_snds_338_black", "", 15500 },
			{ "muzzle_snds_338_sand", "", 15500 },
			{ "muzzle_snds_93mmg", "", 15500 },
			{ "muzzle_snds_93mmg_tan", "", 15500 },
			{ "muzzle_snds_65_H_snd_F", "", 15500 },
			{ "muzzle_snds_H_MG_blk_F", "", 15500 },
			{ "bipod_01_F_blk", "", 3000 },
			{ "bipod_01_F_snd", "", 3000 }
        };
    };
	
	class elite {
        name = "Elite Rebellen Shop";
        side = "civ";
        license = "elite";
        level[] = { "", "", -1, "" };
        items[] = {			
			{ "LMG_Mk200_F", "", 350000, 2500 },
            { "srifle_LRR_F", "", 650000, 2500 },
            { "arifle_ARX_hex_F", "", 300000, 5000 },
            { "srifle_DMR_02_camo_F", "", 370000, 7500 },
			{ "srifle_DMR_05_hex_F", "", 450000, 5000 },
            { "LMG_Zafir_F", "", 470000, -1 }
        };
        mags[] = {
            { "200Rnd_65x39_cased_Box_Tracer", "", 20000 },
			{ "7Rnd_408_Mag", "", 35000 },
            { "30Rnd_65x39_caseless_green", "", 5000 },
            { "10Rnd_50BW_Mag_F", "", 50000 },
            { "10Rnd_338_Mag", "", 25000 },
			{ "10Rnd_93x64_DMR_05_Mag", "", 25000 },
			{ "150Rnd_762x54_Box_Tracer", "", 18000 }
        };
        accs[] = {
			{ "Rangefinder", "", 12500 },
            { "optic_ACO_grn", "", 12500 },
			{ "optic_MRCO", "", 12500 },
			{ "optic_Arco", "", 12500 },
			{ "optic_ERCO_blk_F", "", 12500 },
			{ "optic_ERCO_snd_F", "", 12500 },
            { "optic_Holosight", "", 12500 },
            { "optic_Hamr", "", 12500 },
			{ "optic_DMS", "", 35000 },
			{ "optic_KHS_blk", "", 35000 },
			{ "optic_AMS", "", 35000 },
			{ "optic_LRPS", "", 35000 },
			{ "optic_NVS", "", 15500 },
            { "acc_flashlight", "", 3000 },
			{ "muzzle_snds_L", "", 15500 },
			{ "muzzle_snds_M", "", 15500 },
			{ "muzzle_snds_H", "", 15500 },
			{ "muzzle_snds_B", "", 15500 },
			{ "muzzle_snds_65_TI_blk_F", "", 15500 },
			{ "muzzle_snds_65_TI_hex_F", "", 15500 },
			{ "muzzle_snds_338_black", "", 15500 },
			{ "muzzle_snds_338_sand", "", 15500 },
			{ "muzzle_snds_93mmg", "", 15500 },
			{ "muzzle_snds_93mmg_tan", "", 15500 },
			{ "muzzle_snds_65_H_snd_F", "", 15500 },
			{ "muzzle_snds_H_MG_blk_F", "", 15500 },
			{ "bipod_01_F_blk", "", 3000 },
			{ "bipod_01_F_snd", "", 3000 }
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
            { "NVGoggles", "", 4000, 980 },
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
    class cop_pa {
        name = "Altis Cop Shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_sdar_F", "Taser Rifle", 10, 1 },
            { "hgun_Pistol_heavy_01_MRD_F", "Taser Pistole", 10, 1 },
            { "HandGrenade_Stone", "Flashbang", 10, 1 },
            { "Rangefinder", "", 10, 1 },
            { "B_UavTerminal", "", 10, 1 },
            { "Medikit", "", 10, 1 },
			{ "ToolKit", "", 10, 1 },
            { "NVGoggles", "", 10, 1 }
        };
        mags[] = {
            { "11Rnd_45ACP_Mag", "", 1 },
            { "20Rnd_556x45_UW_mag", "", 1 }
        };
        accs[] = {
            { "muzzle_snds_acp", "", 650 }
        };
    };

    class cop_pm {
        name = "Altis Patrol Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "You must be a Patrol Officer Rank!" };
        items[] = {
            { "arifle_MX_F", "", 35000, 7500 },
            { "SMG_02_ACO_F", "", 30000, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "acc_flashlight", "", 750, 100 },
            { "optic_Holosight", "", 1200, 275 },
            { "optic_Arco", "", 2500, -1 },
            { "muzzle_snds_H", "", 2750, -1 }
        };
        mags[] = {
            { "30Rnd_65x39_caseless_mag", "", 130 },
            { "30Rnd_9x21_Mag", "", 250 }
        };
        accs[] = {
            { "acc_flashlight", "", 750 },
            { "optic_Holosight", "", 1200 },
            { "optic_Arco", "", 2500 },
            { "muzzle_snds_H", "", 2750 }
        };
    };

    class cop_pom {
        name = "Altis Sergeant Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a Sergeant Rank!" };
        items[] = {
            { "hgun_ACPC2_F", "", 17500, -1 },
            { "SMG_02_ACO_F", "", 15000, -1 },
            { "arifle_MXC_F", "", 30000, 5000 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "optic_Arco", "", 2500, -1 },
            { "muzzle_snds_H", "", 2750, -1 }
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 200 },
            { "30Rnd_9x21_Mag", "", 60 },
            { "30Rnd_65x39_caseless_mag", "", 100 }
        };
        accs[] = {
            { "optic_Arco", "", 2500 },
            { "muzzle_snds_H", "", 2750 }
        };
    };
	
	class cop_phm {
        name = "Altis Sergeant Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a Sergeant Rank!" };
        items[] = {
            { "hgun_ACPC2_F", "", 17500, -1 },
            { "SMG_02_ACO_F", "", 15000, -1 },
            { "arifle_MXC_F", "", 30000, 5000 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "optic_Arco", "", 2500, -1 },
            { "muzzle_snds_H", "", 2750, -1 }
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 200 },
            { "30Rnd_9x21_Mag", "", 60 },
            { "30Rnd_65x39_caseless_mag", "", 100 }
        };
        accs[] = {
            { "optic_Arco", "", 2500 },
            { "muzzle_snds_H", "", 2750 }
        };
    };
	
	class cop_pka {
        name = "Altis Sergeant Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a Sergeant Rank!" };
        items[] = {
            { "hgun_ACPC2_F", "", 17500, -1 },
            { "SMG_02_ACO_F", "", 15000, -1 },
            { "arifle_MXC_F", "", 30000, 5000 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "optic_Arco", "", 2500, -1 },
            { "muzzle_snds_H", "", 2750, -1 }
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 200 },
            { "30Rnd_9x21_Mag", "", 60 },
            { "30Rnd_65x39_caseless_mag", "", 100 }
        };
        accs[] = {
            { "optic_Arco", "", 2500 },
            { "muzzle_snds_H", "", 2750 }
        };
    };
	
	class cop_pk {
        name = "Altis Sergeant Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a Sergeant Rank!" };
        items[] = {
            { "hgun_ACPC2_F", "", 17500, -1 },
            { "SMG_02_ACO_F", "", 15000, -1 },
            { "arifle_MXC_F", "", 30000, 5000 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "optic_Arco", "", 2500, -1 },
            { "muzzle_snds_H", "", 2750, -1 }
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 200 },
            { "30Rnd_9x21_Mag", "", 60 },
            { "30Rnd_65x39_caseless_mag", "", 100 }
        };
        accs[] = {
            { "optic_Arco", "", 2500 },
            { "muzzle_snds_H", "", 2750 }
        };
    };
	
	class cop_pok {
        name = "Altis Sergeant Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a Sergeant Rank!" };
        items[] = {
            { "hgun_ACPC2_F", "", 17500, -1 },
            { "SMG_02_ACO_F", "", 15000, -1 },
            { "arifle_MXC_F", "", 30000, 5000 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "optic_Arco", "", 2500, -1 },
            { "muzzle_snds_H", "", 2750, -1 }
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 200 },
            { "30Rnd_9x21_Mag", "", 60 },
            { "30Rnd_65x39_caseless_mag", "", 100 }
        };
        accs[] = {
            { "optic_Arco", "", 2500 },
            { "muzzle_snds_H", "", 2750 }
        };
    };
	
	class cop_pok_p {
        name = "Altis Sergeant Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a Sergeant Rank!" };
        items[] = {
            { "hgun_ACPC2_F", "", 17500, -1 },
            { "SMG_02_ACO_F", "", 15000, -1 },
            { "arifle_MXC_F", "", 30000, 5000 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "optic_Arco", "", 2500, -1 },
            { "muzzle_snds_H", "", 2750, -1 }
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 200 },
            { "30Rnd_9x21_Mag", "", 60 },
            { "30Rnd_65x39_caseless_mag", "", 100 }
        };
        accs[] = {
            { "optic_Arco", "", 2500 },
            { "muzzle_snds_H", "", 2750 }
        };
    };
	
	class cop_phk {
        name = "Altis Sergeant Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a Sergeant Rank!" };
        items[] = {
            { "hgun_ACPC2_F", "", 17500, -1 },
            { "SMG_02_ACO_F", "", 15000, -1 },
            { "arifle_MXC_F", "", 30000, 5000 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "optic_Arco", "", 2500, -1 },
            { "muzzle_snds_H", "", 2750, -1 }
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 200 },
            { "30Rnd_9x21_Mag", "", 60 },
            { "30Rnd_65x39_caseless_mag", "", 100 }
        };
        accs[] = {
            { "optic_Arco", "", 2500 },
            { "muzzle_snds_H", "", 2750 }
        };
    };
	
	class cop_phk_p {
        name = "Altis Sergeant Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a Sergeant Rank!" };
        items[] = {
            { "hgun_ACPC2_F", "", 17500, -1 },
            { "SMG_02_ACO_F", "", 15000, -1 },
            { "arifle_MXC_F", "", 30000, 5000 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "optic_Arco", "", 2500, -1 },
            { "muzzle_snds_H", "", 2750, -1 }
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 200 },
            { "30Rnd_9x21_Mag", "", 60 },
            { "30Rnd_65x39_caseless_mag", "", 100 }
        };
        accs[] = {
            { "optic_Arco", "", 2500 },
            { "muzzle_snds_H", "", 2750 }
        };
    };
	
	class cop_ephk {
        name = "Altis Sergeant Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a Sergeant Rank!" };
        items[] = {
            { "hgun_ACPC2_F", "", 17500, -1 },
            { "SMG_02_ACO_F", "", 15000, -1 },
            { "arifle_MXC_F", "", 30000, 5000 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "optic_Arco", "", 2500, -1 },
            { "muzzle_snds_H", "", 2750, -1 }
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 200 },
            { "30Rnd_9x21_Mag", "", 60 },
            { "30Rnd_65x39_caseless_mag", "", 100 }
        };
        accs[] = {
            { "optic_Arco", "", 2500 },
            { "muzzle_snds_H", "", 2750 }
        };
    };
	
	class cop_pd {
        name = "Altis Sergeant Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a Sergeant Rank!" };
        items[] = {
            { "hgun_ACPC2_F", "", 17500, -1 },
            { "SMG_02_ACO_F", "", 15000, -1 },
            { "arifle_MXC_F", "", 30000, 5000 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "optic_Arco", "", 2500, -1 },
            { "muzzle_snds_H", "", 2750, -1 }
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 200 },
            { "30Rnd_9x21_Mag", "", 60 },
            { "30Rnd_65x39_caseless_mag", "", 100 }
        };
        accs[] = {
            { "optic_Arco", "", 2500 },
            { "muzzle_snds_H", "", 2750 }
        };
    };
	
	class cop_lpd {
        name = "Altis Sergeant Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a Sergeant Rank!" };
        items[] = {
            { "hgun_ACPC2_F", "", 17500, -1 },
            { "SMG_02_ACO_F", "", 15000, -1 },
            { "arifle_MXC_F", "", 30000, 5000 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "optic_Arco", "", 2500, -1 },
            { "muzzle_snds_H", "", 2750, -1 }
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 200 },
            { "30Rnd_9x21_Mag", "", 60 },
            { "30Rnd_65x39_caseless_mag", "", 100 }
        };
        accs[] = {
            { "optic_Arco", "", 2500 },
            { "muzzle_snds_H", "", 2750 }
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
            { "NVGoggles", "", 1200, 980 }
        };
        mags[] = {};
        accs[] = {};
    };
};
