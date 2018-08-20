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
        conditions = "license_civ_gun";
        items[] = {
            { "hgun_Rook40_F", "", 26500, -1, "" },
            { "hgun_Pistol_heavy_02_F", "", 29850, -1, "" },
            { "hgun_ACPC2_F", "", 21500, -1, "" },
			{ "hgun_PDW2000_F", "", 40000, -1, "" },
			{ "SMG_01_F", "", 45000, -1, "" },
			{ "SMG_02_F", "", 50500, -1, "" },
			{ "arifle_SDAR_F", "", 55500, -1, "" }           
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 250, -1, "" },
            { "6Rnd_45ACP_Cylinder", "", 500, -1, "" },
            { "9Rnd_45ACP_Mag", "", 450, -1, "" },
            { "30Rnd_9x21_Mag", "", 750, -1, "" },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 750, -1, "" },
			{ "20Rnd_556x45_UW_mag", "", 750, -1, "" },
			{ "30Rnd_556x45_Stanag", "", 750, -1, "" }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 25500, -1, "" }
        };
    };
	
	class jagd {
        name = "Jagdwaffen";
        side = "civ";
        conditions = "license_civ_jagd";
        items[] = {
            { "hgun_Pistol_01_F", "", 55000, -1, "" },
			{ "srifle_DMR_06_olive_F", "", 1450000, -1, "" },
			{ "srifle_DMR_06_camo_F", "", 1450000, -1, "" }           
        };
        mags[] = {
			{ "10Rnd_9x21_Mag", "", 750, -1, "" }, //9mm
			{ "20Rnd_762x51_Mag", "", 750, -1, "" }	//Mk 14
			
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 7500, -1, "" },
			{ "optic_Hamr", "", 50000, -1, "" },
			{ "optic_KHS_old", "", 75000, -1, "" }
        };
    };
	
	class airsoft {
        name = "Airsoft und Paintball Waffenshop";
        side = "civ";
        conditions = "license_civ_airsoft";
        items[] = {
            { "hgun_Pistol_Signal_F", "", 550000, -1, "" }         
        };
        mags[] = {
			{ "6Rnd_GreenSignal_F", "", 25000, -1, "" },
			{ "6Rnd_RedSignal_F", "", 25000, -1, "" }				
        };
        accs[] = {};
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
            { "arifle_TRG20_F", "", 195000, -1, "" },
			{ "arifle_TRG21_F", "", 250000, -1, "" },
			{ "arifle_Mk20C_plain_F", "", 300000, -1, "" },
			{ "arifle_Mk20_plain_F", "", 320000, -1, "" },
            { "arifle_Katiba_F", "", 250000, -1, "" },
            { "srifle_DMR_01_F", "", 290000, -1, "" },
            { "arifle_SDAR_F", "", 50000, -1, "" },
			{ "arifle_AKM_F", "", 280000, -1, "" },
			{ "arifle_AKS_F", "", 50000, -1, "" },
			{ "arifle_MX_F", "", 475000, -1, "" },
			{ "arifle_MXC_F", "", 470000, -1, "" },
			{ "arifle_MX_SW_F", "", 520000, -1, "" },
			{ "arifle_MXM_F", "", 540000, -1, "" },
			{ "srifle_EBR_F", "", 1000000, -1, "" }			
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 3000, -1, "" },
			{ "30Rnd_556x45_Stanag_Tracer_Red", "", 3000, -1, "" },
            { "30Rnd_65x39_caseless_green", "", 2750, -1, "" },
            { "10Rnd_762x54_Mag", "", 15000, -1, "" },
            { "20Rnd_556x45_UW_mag", "", 1250, -1, "" },
			{ "30Rnd_762x39_Mag_Tracer_F", "", 15000, -1, "" },
			{ "30Rnd_545x39_Mag_Tracer_Green_F", "", 15000, -1, "" },
			{ "30Rnd_65x39_caseless_mag", "", 5000, -1, "" },
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 5000, -1, "" },
			{ "100Rnd_65x39_caseless_mag", "", 9000, -1, "" },
			{ "20Rnd_762x51_Mag", "", 15000, -1, "" }
        };
        accs[] = {
            { "optic_ACO_grn", "", 22500, -1, "" },
			{ "optic_MRCO", "", 22500, -1, "" },
			{ "optic_Arco", "", 22500, -1, "" },
			{ "optic_ERCO_blk_F", "", 22500, -1, "" },
			{ "optic_ERCO_snd_F", "", 22500, -1, "" },
            { "optic_Holosight", "", 22500, -1, "" },
            { "optic_Hamr", "", 22500, -1, "" },
			{ "optic_DMS", "", 45000, -1, "" },
			{ "optic_NVS", "", 25500, -1, "" },
            { "acc_flashlight", "", 3000, -1, "" },
			{ "bipod_01_F_blk", "", 3000, -1, "" },
			{ "bipod_01_F_snd", "", 3000, -1, "" }	
        };
    };
	
	class pro_rebel {
        name = "Profi Rebellen Shop";
        side = "civ";
        conditions = "license_civ_pro_rebel";
        items[] = {
			{ "arifle_TRG20_F", "", 95000, -1, "" },
			{ "arifle_TRG21_F", "", 150000, -1, "" },
			{ "arifle_Mk20C_plain_F", "", 200000, -1, "" },
			{ "arifle_Mk20_plain_F", "", 220000, -1, "" },
            { "arifle_Katiba_F", "", 150000, -1, "" },
            { "srifle_DMR_01_F", "", 190000, -1, "" },
            { "arifle_SDAR_F", "", 30000, -1, "" },
			{ "arifle_AKM_F", "", 220000, -1, "" },
			{ "arifle_AKS_F", "", 40000, -1, "" },
			{ "arifle_MX_F", "", 415000, -1, "" },
			{ "arifle_MXC_F", "", 410000, -1, "" },
			{ "arifle_MX_SW_F", "", 460000, -1, "" },
			{ "arifle_MXM_F", "", 480000, -1, "" },
			{ "srifle_DMR_03_F", "", 1000000, -1, "" },
			{ "srifle_DMR_03_multicam_F", "", 1000000, -1, "" },
			{ "srifle_DMR_03_khaki_F", "", 1000000, -1, "" },
			{ "srifle_DMR_03_tan_F", "", 1000000, -1, "" },
			{ "srifle_DMR_03_woodland_F", "", 1000000, -1, "" },
			{ "srifle_EBR_F", "", 940000, -1, "" },
			{ "LMG_Mk200_F", "", 1800000, -1, "" },
            { "srifle_LRR_F", "", 4000000, -1, "" },
            { "arifle_ARX_hex_F", "", 600000, -1, "" },
			{ "10Rnd_50BW_Mag_F", "", 150000, -1, "" },
			{ "Rangefinder", "", 72500, -1, "" }
    //      { "srifle_DMR_02_camo_F", "", 2850000, -1, "" },
	//		{ "srifle_DMR_05_hex_F", "", 2870000, -1, "" },
    //      { "LMG_Zafir_F", "", 1540000, -1, "" }
        };
        mags[] = {
			{ "30Rnd_556x45_Stanag", "", 3000, -1, "" },
            { "10Rnd_762x54_Mag", "", 15000, -1, "" },
            { "20Rnd_556x45_UW_mag", "", 1250, -1, "" },
			{ "30Rnd_762x39_Mag_Tracer_F", "", 15000, -1, "" },
			{ "30Rnd_545x39_Mag_Tracer_F", "", 15000, -1, "" },
			{ "30Rnd_65x39_caseless_mag", "", 5000, -1, "" },
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 5000, -1, "" },
			{ "100Rnd_65x39_caseless_mag", "", 9000, -1, "" },
			{ "20Rnd_762x51_Mag", "", 15000, -1, "" },
            { "200Rnd_65x39_cased_Box_Tracer", "", 20000, -1, "" },
			{ "7Rnd_408_Mag", "", 35000, -1, "" },
            { "30Rnd_65x39_caseless_green", "", 10000, -1, "" }
        //  { "10Rnd_338_Mag", "", 55000, -1, "" },
		//	{ "10Rnd_93x64_DMR_05_Mag", "", 55000, -1, "" },
		//	{ "150Rnd_762x54_Box_Tracer", "", 18000 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 22500, -1, "" },
			{ "optic_MRCO", "", 22500, -1, "" },
			{ "optic_Arco", "", 22500, -1, "" },
			{ "optic_ERCO_blk_F", "", 22500, -1, "" },
			{ "optic_ERCO_snd_F", "", 22500, -1, "" },
            { "optic_Holosight", "", 22500, -1, "" },
            { "optic_Hamr", "", 22500, -1, "" },
			{ "optic_DMS", "", 45000, -1, "" },
			{ "optic_KHS_blk", "", 45000, -1, "" },
			{ "optic_AMS", "", 45000, -1, "" },
			{ "optic_LRPS", "", 45000, -1, "" },
			{ "optic_NVS", "", 25500, -1, "" },
            { "acc_flashlight", "", 3000, -1, "" },
			{ "muzzle_snds_L", "", 25500, -1, "" },
			{ "muzzle_snds_M", "", 25500, -1, "" },
			{ "muzzle_snds_H", "", 25500, -1, "" },
			{ "muzzle_snds_B", "", 25500, -1, "" },
			{ "muzzle_snds_65_TI_blk_F", "", 25500, -1, "" },
			{ "muzzle_snds_65_TI_hex_F", "", 25500, -1, "" },
			{ "muzzle_snds_338_black", "", 25500, -1, "" },
			{ "muzzle_snds_338_sand", "", 25500, -1, "" },
			{ "muzzle_snds_93mmg", "", 25500, -1, "" },
			{ "muzzle_snds_93mmg_tan", "", 25500, -1, "" },
			{ "muzzle_snds_65_H_snd_F", "", 25500, -1, "" },
			{ "muzzle_snds_H_MG_blk_F", "", 25500, -1, "" },
			{ "bipod_01_F_blk", "", 3000, -1, "" },
			{ "bipod_01_F_snd", "", 3000, -1, "" }
        };
    };
	
	class elite {
        name = "Elite Rebellen Shop";
        side = "civ";
        conditions = "license_civ_elite";
        items[] = {	
			{ "arifle_AK12_F", "", 900000, -1, "" },
			{ "arifle_SPAR_01_khk_F", "", 300000, -1, "" },
			{ "arifle_SPAR_02_khk_F", "", 450000, -1, "" },
			{ "arifle_SPAR_03_khk_F", "", 1400000, -1, "" },
			{ "arifle_CTAR_ghex_F", "", 280000, -1, "" },
			{ "arifle_CTARS_ghex_F", "", 430000, -1, "" },
			{ "LMG_03_F", "", 1800000, -1, "" },
			{ "LMG_Mk200_F", "", 1500000, -1, "" },
            { "srifle_LRR_tna_LRPS_F", "", 3550000, -1, "" },
            { "arifle_ARX_ghex_F", "", 260000, -1, "" },
			{ "10Rnd_50BW_Mag_F", "", 50000, -1, "" },
        //    { "srifle_DMR_02_camo_F", "", 335000, -1, "" },
		//	{ "srifle_DMR_05_hex_F", "", 420000, -1, "" },
        //    { "LMG_Zafir_F", "", 410000, -1, "" },
			{ "arifle_TRG20_F", "", 50000, -1, "" },
            { "arifle_Katiba_F", "", 60000, -1, "" },
            { "srifle_DMR_01_F", "", 40000, -1, "" },
            { "arifle_SDAR_F", "", 10000, -1, "" },
			{ "arifle_AKM_F", "", 90000, -1, "" },
			{ "arifle_AKS_F", "", 30000, -1, "" },
			{ "arifle_MX_khk_ACO_Pointer_Snds_F", "", 310000, -1, "" },
			{ "arifle_MXC_khk_ACO_Pointer_Snds_F", "", 300000, -1, "" },
			{ "arifle_MX_SW_khk_Pointer_F", "", 420000, -1, "" },
			{ "arifle_MXM_khk_F", "", 440000, -1, "" },
			{ "srifle_DMR_03_F", "", 850000, -1, "" },
			{ "srifle_DMR_03_multicam_F", "", 850000, -1, "" },
			{ "srifle_DMR_03_khaki_F", "", 850000, -1, "" },
			{ "srifle_DMR_03_tan_F", "", 850000, -1, "" },
			{ "srifle_DMR_03_woodland_F", "", 850000, -1, "" },
			{ "srifle_EBR_F", "", 790000, -1, "" },
			{ "hgun_P07_khk_F", "", 25000, -1, "" },
			{ "Rangefinder", "", 50000, -1, "" }
        };
        mags[] = {
			{ "30Rnd_762x39_Mag_Tracer_Green_F", "", 2500, -1, "" },
			{ "30Rnd_556x45_Stanag_green", "", 4000, -1, "" },
			{ "150Rnd_556x45_Drum_Mag_Tracer_F", "", 9000, -1, "" },
			{ "30Rnd_580x42_Mag_Tracer_F", "", 5000, -1, "" },
			{ "100Rnd_580x42_Mag_Tracer_F", "", 18000, -1, "" },
			{ "200Rnd_556x45_Box_Tracer_F", "", 250000, -1, "" },
            { "200Rnd_65x39_cased_Box_Tracer", "", 20000, -1, "" },
			{ "7Rnd_408_Mag", "", 35000, -1, "" },
            { "30Rnd_65x39_caseless_green", "", 5000, -1, "" },
            { "10Rnd_338_Mag", "", 25000, -1, "" },
			{ "10Rnd_93x64_DMR_05_Mag", "", 25000, -1, "" },
			{ "150Rnd_762x54_Box_Tracer", "", 18000, -1, "" },
			{ "30Rnd_556x45_Stanag", "", 3000, -1, "" },
            { "30Rnd_65x39_caseless_green", "", 2750 },
            { "10Rnd_762x54_Mag", "", 15000, -1, "" },
            { "20Rnd_556x45_UW_mag", "", 1250 },
			{ "30Rnd_762x39_Mag_Tracer_F", "", 15000, -1, "" },
			{ "30Rnd_545x39_Mag_Tracer_F", "", 15000, -1, "" },
			{ "30Rnd_65x39_caseless_mag", "", 5000, -1, "" },
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 5000, -1, "" },
			{ "100Rnd_65x39_caseless_mag", "", 9000, -1, "" },
			{ "20Rnd_762x51_Mag", "", 15000, -1, "" },
			{ "30Rnd_9x21_Green_Mag", "", 15000, -1, "" }
        };
        accs[] = {
            { "optic_ACO_grn", "", 12500, -1, "" },
			{ "optic_MRCO", "", 12500, -1, "" },
			{ "optic_Arco", "", 12500, -1, "" },
			{ "optic_ERCO_blk_F", "", 12500, -1, "" },
			{ "optic_ERCO_snd_F", "", 12500, -1, "" },
            { "optic_Holosight", "", 12500, -1, "" },
            { "optic_Hamr", "", 12500, -1, "" },
			{ "optic_DMS", "", 35000, -1, "" },
			{ "optic_KHS_blk", "", 35000, -1, "" },
			{ "optic_AMS", "", 35000, -1, "" },
			{ "optic_LRPS", "", 35000, -1, "" },
			{ "optic_NVS", "", 15500, -1, "" },
            { "acc_flashlight", "", 3000, -1, "" },
			{ "muzzle_snds_L", "", 15500, -1, "" },
			{ "muzzle_snds_M", "", 15500, -1, "" },
			{ "muzzle_snds_H", "", 15500, -1, "" },
			{ "muzzle_snds_B", "", 15500, -1, "" },
			{ "muzzle_snds_65_TI_blk_F", "", 15500, -1, "" },
			{ "muzzle_snds_65_TI_hex_F", "", 15500, -1, "" },
			{ "muzzle_snds_338_black", "", 15500, -1, "" },
			{ "muzzle_snds_338_sand", "", 15500, -1, "" },
			{ "muzzle_snds_93mmg", "", 15500, -1, "" },
			{ "muzzle_snds_93mmg_tan", "", 15500, -1, "" },
			{ "muzzle_snds_65_H_snd_F", "", 15500, -1, "" },
			{ "muzzle_snds_H_MG_blk_F", "", 15500, -1, "" },
			{ "muzzle_snds_H_khk_F", "", 15500, -1, "" },
			{ "muzzle_snds_m_khk_F", "", 15500, -1, "" },
			{ "muzzle_snds_B_khk_F", "", 15500, -1, "" },
			{ "bipod_01_F_khk", "", 3000, -1, "" },
			{ "bipod_01_F_blk", "", 3000, -1, "" },
			{ "bipod_01_F_snd", "", 3000, -1, "" }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        conditions = "";
        items[] = {
            { "arifle_TRG20_F", "", 395000, -1, "" },
            { "arifle_Katiba_F", "", 450000, -1, "" },
            { "srifle_DMR_01_F", "", 490000, -1, "" },
            { "arifle_SDAR_F", "", 50000, -1, "" },
			{ "arifle_AKM_F", "", 480000, -1, "" },
			{ "arifle_AKS_F", "", 55000, -1, "" }		
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 3000, -1, "" },
            { "30Rnd_65x39_caseless_green", "", 2750, -1, "" },
            { "10Rnd_762x54_Mag", "", 15000, -1, "" },
            { "20Rnd_556x45_UW_mag", "", 1250, -1, "" },
			{ "30Rnd_762x39_Mag_Tracer_F", "", 15000, -1, "" },
			{ "30Rnd_545x39_Mag_Tracer_Green_F", "", 15000, -1, "" }
        };
        accs[] = {
            { "optic_ACO_grn", "", 12500, -1, "" },
			{ "optic_MRCO", "", 12500, -1, "" },
			{ "optic_Arco", "", 12500, -1, "" },
			{ "optic_ERCO_blk_F", "", 12500, -1, "" },
			{ "optic_ERCO_snd_F", "", 12500, -1, "" },
            { "optic_Holosight", "", 12500, -1, "" },
            { "optic_Hamr", "", 12500, -1, "" },
			{ "optic_DMS", "", 35000, -1, "" },
			{ "optic_NVS", "", 15500, -1, "" },
            { "acc_flashlight", "", 3000, -1, "" },
			{ "bipod_01_F_blk", "", 3000, -1, "" },
			{ "bipod_01_F_snd", "", 3000, -1, "" }	
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, -1, "" },
            { "ItemGPS", "", 100, -1, "" },
            { "ItemMap", "", 50, -1, "" },
            { "ItemCompass", "", 50, -1, "" },
            { "ItemWatch", "", 50, -1, "" },
            { "FirstAidKit", "", 150, -1, "" },
			{ "ToolKit", "", 3000, 100, -1, "" },
            { "NVGoggles", "", 4000, -1, "" },
            { "Chemlight_red", "", 300, -1, "" },
            { "Chemlight_yellow", "", 300, -1, "" },
            { "Chemlight_green", "", 300, -1, "" },
            { "Chemlight_blue", "", 300, -1, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        conditions = "";
        items[] = {
            { "Binocular", "", 750, -1, "" },
            { "ItemGPS", "", 500, -1, "" },
            { "ItemMap", "", 250, -1, "" },
            { "ItemCompass", "", 250, -1, "" },
            { "ItemWatch", "", 250, -1, "" },
            { "FirstAidKit", "", 750, -1, "" },
			{ "ToolKit", "", 5000, 100, -1, "" },
            { "NVGoggles", "", 10000, -1, "" },
            { "Chemlight_red", "", 1500, -1, "" },
            { "Chemlight_yellow", "", 1500, -1, "" },
            { "Chemlight_green", "", 1500, -1, "" },
            { "Chemlight_blue", "", 1500, -1, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_weapon {
        name = "Polizei Waffenshop";
        side = "cop";
        conditions = "playerSide isEqualTo west";
        items[] = {
            { "arifle_sdar_F", "Taser Rifle", 1, 1, "call life_coplevel >= 1" },
            { "SMG_01_Holo_pointer_snds_F", "", 1, 1, "call life_coplevel >= 2" },
			{ "SMG_05_F", "", 1, 1, "call life_coplevel >= 2" },
			{ "arifle_SPAR_01_blk_F", "", 1, 1, "call life_coplevel >= 3" },
			{ "arifle_SPAR_01_GL_blk_F", "", 1, 1, "call life_coplevel >= 3" },
			{ "arifle_SPAR_02_blk_F", "", 1, 1, "call life_coplevel >= 3" },			
            { "arifle_MX_Black_F", "", 1, 1, "call life_coplevel >= 3" },
			{ "arifle_MX_GL_Black_Hamr_pointer_F", "", 1, 1, "call life_coplevel >= 3" },
			{ "arifle_MXC_Black_F", "", 1, 1, "call life_coplevel >= 3" },
			{ "arifle_MXM_Black_F", "", 1, 1, "call life_coplevel >= 3" },
			{ "arifle_MX_SW_Black_F", "", 1, 1, "call life_coplevel >= 3" },
			{ "arifle_Mk20_MRCO_pointer_F", "", 1, 1, "call life_coplevel >= 3" },
			{ "arifle_CTAR_blk_F", "", 1, 1, "call life_coplevel >= 4" },
			{ "arifle_CTAR_GL_blk_F", "", 1, 1, "call life_coplevel >= 4" },
			{ "arifle_CTARS_blk_F", "", 1, 1, "call life_coplevel >= 4" },
			{ "srifle_DMR_03_F", "", 1, 1, "call life_coplevel >= 5" },
			{ "srifle_DMR_06_olive_F", "", 1, 1, "call life_coplevel >= 5" },
			{ "srifle_EBR_ARCO_pointer_snds_F", "", 1, 1, "call life_coplevel >= 5" },
			{ "srifle_DMR_07_blk_DMS_Snds_F", "", 1, 1, "call life_coplevel >= 5" },
			{ "arifle_SPAR_03_blk_F", "", 1, 1, "call life_coplevel >= 5" },			
			{ "arifle_AK12_GL_F", "", 1, 1, "call life_coplevel >= 6" },
			{ "srifle_DMR_02_F", "", 1, 1, "call life_coplevel >= 6" },
			{ "srifle_DMR_05_MRCO_F", "", 1, 1, "call life_coplevel >= 6" },
			{ "LMG_03_F", "", 1, 1, "call life_coplevel >= 7" },
			{ "srifle_LRR_F", "", 1, 1, "call life_coplevel >= 8" },
			{ "arifle_ARX_blk_F", "", 1, 1, "call life_coplevel >= 8" },
			{ "LMG_Mk200_LP_BI_F", "", 1, 1, "call life_coplevel >= 9" },
			{ "LMG_Zafir_F", "", 1, 1, "call life_coplevel >= 9" },
			{ "srifle_GM6_LRPS_F", "", 1, 1, "call life_coplevel >= 10" },
			{ "hgun_Pistol_heavy_01_MRD_F", "Taser Pistole", 1, 1, "call life_coplevel >= 1" },
			{ "HandGrenade_Stone", "Flashbang", 1, 1, "call life_coplevel >= 3" },
			{ "SmokeShellBlue","CE-Gas", 1, 1, "call life_coplevel >= 3" },
			{ "1Rnd_SmokeBlue_Grenade_shell","1er-CE-Gas", 1, 1, "call life_coplevel >= 3" },
			{ "3Rnd_SmokeBlue_Grenade_shell","3er-CE-Gas", 1, 1, "call life_coplevel >= 3" },
			{ "1Rnd_HE_Grenade_shell","1er-HE-Granate", 1, 1, "call life_coplevel >= 6" },
			{ "3Rnd_HE_Grenade_shell","3er-HE-Granate", 1, 1, "call life_coplevel >= 6" },
			{ "10Rnd_50BW_Mag_F","Typ 115 Sekundärmagazin", 1, 1, "call life_coplevel >= 9" },
			{ "SatchelCharge_Remote_Mag", "", 1, 1, "call life_coplevel >= 9" },
			{ "DemoCharge_Remote_Mag", "", 1, 1, "call life_coplevel >= 9" },
			{ "Rangefinder", "", 1, 1, "" },
            { "B_UavTerminal", "", 1, 1, "" },
            { "Medikit", "", 1, 1, "" },
			{ "ToolKit", "", 1, 1, "" },
            { "NVGoggles_OPFOR", "", 1, 1, "" }
        };
        mags[] = {
            { "11Rnd_45ACP_Mag", "", 1, 1, "" },
			{ "30Rnd_762x39_Mag_F", "AK-12 Normales Mag", 1, 1, ""  },
			{ "30Rnd_762x39_Mag_Tracer_Green_F", "AK-12 Taser Mag", 1, 1, ""  },
			{ "200Rnd_65x39_cased_Box", "", 1, 1, "" },
			{ "200Rnd_65x39_cased_Box_Tracer", "", 1, 1, "" },
			{ "150Rnd_762x54_Box", "", 1, 1, "" },
			{ "150Rnd_762x54_Box_Tracer", "", 1, 1, "" },
			{ "7Rnd_408_Mag", "", 1, 1, "" },
			{ "5Rnd_127x108_Mag", "", 1, 1, "" },
			{ "30Rnd_65x39_caseless_green","Typ 115 Primärmagazin", 1, 1, ""  },
			{ "10Rnd_50BW_Mag_F","Typ 115 Sekundärmagazin", 1, 1, ""  },
			{ "10Rnd_338_Mag", "", 1, 1, "" },
			{ "10Rnd_93x64_DMR_05_Mag", "", 1, 1, "" },
			{ "20Rnd_762x51_Mag", "", 1, 1, "" },
			{ "20Rnd_650x39_Cased_Mag_F", "", 1, 1, "" },
			{ "30Rnd_556x45_Stanag_green", "", 1, 1, "" },
			{ "150Rnd_556x45_Drum_Mag_F", "", 1, 1, "" },
			{ "150Rnd_556x45_Drum_Mag_Tracer_F", "", 1, 1, "" },
			{ "30Rnd_580x42_Mag_F", "", 1, 1, "" },
			{ "100Rnd_580x42_Mag_F", "", 1, 1, "" },
            { "30Rnd_65x39_caseless_mag", "", 1, 1, "" },
			{ "30Rnd_65x39_caseless_mag_Tracer", "MX Leuchtspur magazin", 1, 1, ""  },
			{ "100Rnd_65x39_caseless_mag","100er MX SW magazin", 1, 1, ""  },
			{ "100Rnd_65x39_caseless_mag_tracer","MX SW Tracer magazin", 1, 1, ""  }
        };
        accs[] = {
			{ "muzzle_snds_acp", "", 1, 1, "" },
			{ "optic_Holosight", "", 1, 1, "" },
			{ "optic_Holosight_smg_blk_F", "", 1, 1, "" },
			{ "optic_ACO_smg", "", 1, 1, "" },
			{ "optic_MRCO", "", 1, 1, "" },
			{ "optic_LRPS", "", 1, 1, "" },
			{ "optic_KHS_blk", "", 1, 1, "" },
			{ "optic_AMS", "", 1, 1, "" },
			{ "optic_DMS", "", 1, 1, "" },
			{ "optic_NVS", "", 1, 1, "" },
			{ "optic_Arco", "", 1, 1, "" },
			{ "optic_ERCO_blk_F", "", 1, 1, "" },
			{ "muzzle_snds_acp", "", 1, 1, "" },
			{ "muzzle_snds_L", "", 1, 1, "" },
			{ "muzzle_snds_M", "", 1, 1, "" },
			{ "muzzle_snds_B", "", 1, 1, "" },
			{ "muzzle_snds_58_blk_F", "", 1, 1, "" },
			{ "muzzle_snds_65_TI_blk_F", "", 1, 1, "" },
			{ "muzzle_snds_338_black", "", 1, 1, "" },
			{ "muzzle_snds_93mmg", "", 1, 1, "" },
			{ "muzzle_snds_65_TI_blk_F", "", 1, 1, "" },
			{ "muzzle_snds_H_MG_blk_F", "", 1, 1, "" },
			{ "bipod_01_F_blk","Schwarzes Zweibein", 1, 1, "" },
			{ "bipod_01_F_snd","Sandfarbenes Zweibein", 1, 1, "" }
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        conditions = "";
        items[] = {
            { "ItemGPS", "", 10, -1, "" },
            { "Binocular", "", 15, -1 },
            { "FirstAidKit", "", 150, -1, "" },
			{ "Medikit", "", 100, 1 },
            { "NVGoggles", "", 12, -1 }
        };
        mags[] = {};
        accs[] = {};
    };
};
