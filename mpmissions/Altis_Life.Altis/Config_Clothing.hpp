/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        4: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Poloshirt_stripped", "Poloshirt stripped", 125, { "", "", -1 } },
            { "U_C_Poloshirt_redwhite", "Poloshirt Red/White", 150, { "", "", -1 } },
            { "U_C_Poloshirt_salmon", "Poloshirt Salmon", 175, { "", "", -1 } },
            { "U_C_Poloshirt_blue", "Poloshirt Blue", 250, { "", "", -1 } },
            { "U_C_Poor_2", "Rag tagged clothes", 250, { "", "", -1 } },
            { "U_C_Poloshirt_burgundy", "Poloshirt Burgundy", 275, { "", "", -1 } },
            { "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 350, { "", "", -1 } },
            { "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 650, { "", "", -1 } },
            { "U_IG_Guerilla3_1", "Brown Jacket & Pants", 735, { "", "", -1 } },
            { "U_OrestesBody", "Surfing On Land", 1100, { "", "", -1 } },
            { "U_IG_Guerilla2_3", "The Outback Rangler", 1200, { "", "", -1 } },
            { "U_C_HunterBody_grn", "The Hunters Look", 1500, { "", "", -1 } },
            { "U_C_WorkerCoveralls", "Mechanic Coveralls", 2500, { "", "", -1 } },
            { "U_NikosAgedBody", "Casual Wears", 5000, { "", "", -1 } },
			{ "U_C_Poor_2","Hello Kitty", 5000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Bandanna_camo", "Camo Bandanna", 120, { "", "", -1 } },
            { "H_Bandanna_surfer", "Surfer Bandanna", 130, { "", "", -1 } },
            { "H_Bandanna_surfer", "", 135, { "", "", -1 } },
            { "H_Bandanna_khk", "Khaki Bandanna", 145, { "", "", -1 } },
            { "H_Cap_blu", "", 150, { "", "", -1 } },
            { "H_Cap_grn", "", 150, { "", "", -1 } },
            { "H_Cap_grn_BI", "", 150, { "", "", -1 } },
            { "H_Cap_oli", "", 150, { "", "", -1 } },
            { "H_Cap_red", "", 150, { "", "", -1 } },
            { "H_Cap_tan", "", 150, { "", "", -1 } },
            { "H_Bandanna_gry", "Grey Bandanna", 150, { "", "", -1 } },
            { "H_Bandanna_sgg", "Sage Bandanna", 160, { "", "", -1 } },
            { "H_Bandanna_cbr", "", 165, { "", "", -1 } },
            { "H_StrawHat", "Straw Fedora", 225, { "", "", -1 } },
            { "H_Hat_tan", "", 265, { "", "", -1 } },
            { "H_Hat_brown", "", 276, { "", "", -1 } },
            { "H_Hat_grey", "", 280, { "", "", -1 } },
            { "H_BandMask_blk", "Hat & Bandanna", 300, { "", "", -1 } },
            { "H_Hat_blue", "", 310, { "", "", -1 } },
            { "H_Hat_checker", "", 340, { "", "", -1 } },
            { "H_Booniehat_tan", "", 425, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 20, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Shades_Green", "", 20, { "", "", -1 } },
            { "G_Shades_Red", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 25, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 25, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 25, { "", "", -1 } },
            { "G_Sport_Checkered", "", 25, { "", "", -1 } },
            { "G_Sport_Greenblack", "", 25, { "", "", -1 } },
            { "G_Sport_Red", "", 25, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Squares", "", 50, { "", "", -1 } },
            { "G_Aviator", "", 100, { "", "", -1 } },
            { "G_Combat", "", 125, { "", "", -1 } },
            { "G_Lady_Mirror", "", 150, { "", "", -1 } },
            { "G_Lady_Dark", "", 150, { "", "", -1 } },
            { "G_Lady_Blue", "", 150, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 500, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 2000, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 2500, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 3500, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 3500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 3500, { "", "", -1 } },
            { "B_FieldPack_blk", "", 5000, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 5000, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 5000, { "", "", -1 } },
            { "B_Bergen_sgg_F", "", 6500, { "", "", -1 } },
            { "B_Bergen_mcamo_F", "", 30000, { "", "", -1 } },
            { "B_Bergen_rgr_F", "", 30000, { "", "", -1 } },
            { "B_Bergen_blk_F", "", 30000, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oli", "", 7500, { "", "", -1 } },
            { "B_Carryall_khk", "", 7500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 7500, { "", "", -1 } }
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        license = "";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_Rangemaster","Praktikant", 1, { "", "", -1 } },
            { "U_B_SpecopsUniform_sgg", "Beamten Uniform", 1, { "life_coplevel", "SCALAR", 2 } },
            { "U_B_Wetsuit","Taucher Anzug", 1, { "life_coplevel", "SCALAR", 2 } },
			{ "U_B_CombatUniform_mcam_vest", "", 1, { "life_coplevel", "SCALAR", 5 } },
			{ "U_B_FullGhillie_lsh", "", 1, { "life_coplevel", "SCALAR", 7 } },
			{ "U_B_FullGhillie_sard", "", 1, { "life_coplevel", "SCALAR", 7 } },
			{ "U_B_FullGhillie_ard", "", 1, { "life_coplevel", "SCALAR", 7 } },
			{ "U_B_CombatUniform_mcam","SEK-Uniform", 1, { "life_coplevel", "SCALAR", 9 } },
			{ "U_B_GEN_Soldier_F","Zivile-SEK-Uniform", 1, { "life_coplevel", "SCALAR", 9 } },
			{ "U_B_CombatUniform_mcam_worn","SEK-Uniform-Digi", 1, { "life_coplevel", "SCALAR", 9 } },
            { "U_B_GEN_Commander_F","Zivile-Leitungs-Uniform", 1, { "life_coplevel", "SCALAR", 12 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Cap_police", "", 1, { "", "", -1 } },
            { "H_MilCap_gen_F", "", 1, { "life_coplevel", "SCALAR", 3 } },
            { "H_Watchcap_blk", "", 1, { "life_coplevel", "SCALAR", 3 } },
			{ "H_HelmetB_light_black", "", 1, { "life_coplevel", "SCALAR", 3 } },
            { "H_Beret_blk", "", 1, { "life_coplevel", "SCALAR", 5 } },
			{ "H_Beret_blk_POLICE", "", 1, { "life_coplevel", "SCALAR", 5 } },
			{ "H_HelmetB_black","Schwerer Helm", 1, { "life_coplevel", "SCALAR", 5 } },
			{ "H_Beret_02", "", 1, { "life_coplevel", "SCALAR", 6 } },
			{ "H_HelmetIA", "", 1, { "life_coplevel", "SCALAR", 6 } },
			{ "H_Beret_Colonel", "", 1, { "life_coplevel", "SCALAR", 7 } },
			{ "H_Beret_Gen_F", "", 1, { "life_coplevel", "SCALAR", 8 } },
			{ "H_CrewHelmetHeli_B", "", 1, { "life_coplevel", "SCALAR", 8 } },
			{ "H_HelmetSpecB_blk", "", 1, { "life_coplevel", "SCALAR", 8 } },
			{ "H_StrawHat", "", 1, { "life_coplevel", "SCALAR", 12 } },
            { "H_Booniehat_mcamo", "", 1, { "life_coplevel", "SCALAR", 1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Squares", "", 1, { "", "", -1 } },
            { "G_Shades_Blue", "", 1, { "", "", -1 } },
            { "G_Sport_Blackred", "", 1, { "", "", -1 } },
            { "G_Sport_Checkered", "", 1, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 1, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 1, { "", "", -1 } },
            { "G_Shades_Black", "", 1, { "", "", -1 } },
            { "G_Lowprofile", "", 1, { "", "", -1 } },
            { "G_Aviator", "", 1, { "", "", -1 } },
            { "G_Lady_Mirror", "", 1, { "", "", -1 } },
            { "G_Lady_Dark", "", 1, { "", "", -1 } },
            { "G_Lady_Blue", "", 1, { "", "", -1 } },
            { "G_Combat", "", 1, { "life_coplevel", "SCALAR", 6 } },
			{ "G_Balaclava_blk", "", 1, { "life_coplevel", "SCALAR", 6 } },
			{ "G_Balaclava_TI_blk_F", "", 1, { "life_coplevel", "SCALAR", 6 } },
			{ "G_Balaclava_TI_G_blk_F", "", 1, { "life_coplevel", "SCALAR", 6 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 1, { "", "", -1 } },
            { "V_RebreatherB", "", 1, { "life_coplevel", "SCALAR", 2 } },
            { "V_TacVest_blk_POLICE","Polizeiweste", 1, { "life_coplevel", "SCALAR", 2 } },
			{ "V_TacVestIR_blk","Einsatzweste", 1, { "life_coplevel", "SCALAR", 4 } },
			{ "V_PlateCarrier1_blk","Schwere Weste", 1, { "life_coplevel", "SCALAR", 6 } },
			{ "V_PlateCarrierSpec_blk","SEK Weste", 1, { "life_coplevel", "SCALAR", 9 } }
			};
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 1, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 1, { "", "", -1 } },
            { "B_FieldPack_cbr", "", 1, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 1, { "", "", -1 } },
            { "B_Bergen_sgg_F", "", 1, { "", "", -1 } },
			{ "B_Bergen_mcamo_F", "", 1, { "", "", -1 } },
			{ "B_Bergen_dgtl_F", "", 1, { "", "", -1 } },
			{ "B_Carryall_cbr", "", 1, { "", "", -1 } },
			{ "B_FieldPack_cbr_Ammo", "", 1, { "", "", -1 } },
			{ "B_Carryall_oucamo", "", 1, { "", "", -1 } },
			{ "B_Bergen_blk_F", "", 1, { "", "", -1 } },
			{ "B_UAV_01_backpack_F", "", 1, { "life_coplevel", "SCALAR", 4 } }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        license = "dive";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_B_Wetsuit", "", 5000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Diving", "", 500, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_RebreatherB", "", 5000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        license = "gun";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 2000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };
	
	class uran_clothing {
        title = "STR_Shops_Uran";
        license = "gun";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_I_HeliPilotCoveralls","Anti-Strahlungs Anzug", 100000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };
	
    class gang_clothing {
        title = "STR_Shops_C_Gang";
        license = "";
        side = "civ";
        uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_I_C_Soldier_Bandit_1_F", "", 5000, {"", "", -1} },
            { "U_I_C_Soldier_Bandit_2_F", "", 5000, { "", "", -1 } },
            { "U_I_C_Soldier_Bandit_3_F", "", 5000, { "", "", -1 } },
            { "U_I_C_Soldier_Bandit_4_F", "", 5000, { "", "", -1 } },
            { "U_I_C_Soldier_Bandit_5_F", "", 5000, { "", "", -1 } },
            { "U_IG_Guerilla1_1", "", 5000, { "", "", -1 } },
            { "U_I_G_Story_Protagonist_F", "", 10000, { "", "", -1 } },
			{ "U_BG_Guerrilla_6_1", "", 10000, { "", "", -1 } },
			{ "U_O_CombatUniform_ocamo", "", 10000, { "", "", -1 } },
			{ "U_O_CombatUniform_oucamo", "", 10000, { "", "", -1 } },
			{ "U_I_G_resistanceLeader_F", "", 10000, { "", "", -1 } },
			{ "U_O_SpecopsUniform_ocamo", "", 10000, { "", "", -1 } },
			{ "U_O_PilotCoveralls", "", 10000, { "", "", -1 } },
			{ "U_IG_leader", "", 10000, { "", "", -1 } },
			{ "U_O_GhillieSuit", "", 50000, { "", "", -1 } },
			{ "U_B_CTRG_1", "", 10000, { "", "", -1 } },
			{ "U_B_CTRG_Soldier_F", "", 10000, { "", "", -1 } },
			{ "U_B_CTRG_Soldier_2_F", "", 10000, { "", "", -1 } },
			{ "U_B_CTRG_Soldier_3_F", "", 10000, { "", "", -1 } },
			{ "U_B_CTRG_Soldier_urb_1_F", "", 10000, { "", "", -1 } },
			{ "U_B_CTRG_Soldier_urb_2_F", "", 10000, { "", "", -1 } },
			{ "U_B_CTRG_Soldier_urb_3_F", "", 10000, { "", "", -1 } },
			{ "U_B_T_Sniper_F", "", 50000, { "", "", -1 } },
			{ "U_B_T_FullGhillie_tna_F", "", 90000, { "", "", -1 } },
			{ "U_B_FullGhillie_lsh", "", 90000, { "", "", -1 } },
			{ "U_B_FullGhillie_sard", "", 90000, { "", "", -1 } },
			{ "U_B_FullGhillie_ard", "", 90000, { "", "", -1 } },
			{ "U_O_FullGhillie_lsh", "", 90000, { "", "", -1 } },
			{ "U_O_FullGhillie_sard", "", 90000, { "", "", -1 } },
			{ "U_O_FullGhillie_ard", "", 90000, { "", "", -1 } },
			{ "U_I_FullGhillie_ard", "", 90000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_ShemagOpen_tan", "", 650, { "", "", -1 } },
            { "H_Shemag_olive", "", 800, { "", "", -1 } },
            { "H_ShemagOpen_khk", "", 850, { "", "", -1 } },
            { "H_HelmetO_ocamo", "", 5000, { "", "", -1 } },
            { "H_MilCap_oucamo", "", 1200, { "", "", -1 } },
            { "H_Bandanna_camo", "", 2500, { "", "", -1 } },
			{ "H_Watchcap_blk", "", 2500, { "", "", -1 } },
			{ "H_CrewHelmetHeli_I", "", 10000, { "", "", -1 } },
			{ "H_HelmetB_light_sand", "", 10000, { "", "", -1 } },
			{ "H_HelmetB_sand", "", 10000, { "", "", -1 } },
			{ "H_HelmetSpecB_sand", "", 10000, { "", "", -1 } },
			{ "H_HelmetB_TI_tna_F", "", 10000, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Aviator", "", 50, { "", "", -1 } },
            { "G_Shades_Black", "", 50, { "", "", -1 } },
            { "G_Shades_Blue", "", 50, { "", "", -1 } },
            { "G_Sport_Blackred", "", 50, { "", "", -1 } },
            { "G_Sport_Checkered", "", 50, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 50, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 50, { "", "", -1 } },
            { "G_Lowprofile", "", 50, { "", "", -1 } },
            { "G_Squares", "", 50, { "", "", -1 } },
            { "G_Combat", "", 50, { "", "", -1 } },
            { "G_Balaclava_blk", "", 50, { "", "", -1 } },
            { "G_Balaclava_combat", "", 50, { "", "", -1 } },
            { "G_Balaclava_lowprofile", "", 50, { "", "", -1 } },
            { "G_Balaclava_oli", "", 50, { "", "", -1 } },
            { "G_Bandanna_aviator", "", 50, { "", "", -1 } },
            { "G_Bandanna_beast", "", 50, { "", "", -1 } },
            { "G_Bandanna_blk", "", 50, { "", "", -1 } },
            { "G_Bandanna_khk", "", 50, { "", "", -1 } },
            { "G_Bandanna_oli", "", 50, { "", "", -1 } },
            { "G_Bandanna_shades", "", 50, { "", "", -1 } },
            { "G_Bandanna_sport", "", 50, { "", "", -1 } },
            { "G_Bandanna_tan", "", 50, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_BandollierB_cbr", "", 20000, { "", "", -1 } },
            { "V_HarnessO_brn", "", 30000, { "", "", -1 } },
			{ "V_PlateCarrier_Kerry", "", 40000, { "", "", -1 } },
			{ "V_TacVest_khk", "", 50000, { "", "", -1 } },
			{ "V_TacVest_brn", "", 60000, { "", "", -1 } },
			{ "V_Chestrig_khk", "", 70000, { "", "", -1 } },
			{ "V_PlateCarrierH_CTRG", "", 80000, { "", "", -1 } },
			{ "V_PlateCarrier1_rgr_noflag_F", "", 90000, { "", "", -1 } },
			{ "V_PlateCarrierGL_mtp", "", 100000, { "", "", -1 } },
            { "V_PlateCarrier2_rgr_noflag_F", "", 11000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 500, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 2000, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 2500, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 3500, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 3500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 3500, { "", "", -1 } },
            { "B_FieldPack_blk", "", 5000, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 5000, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 5000, { "", "", -1 } },
            { "B_Bergen_sgg", "", 20000, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 20000, { "", "", -1 } },
            { "B_Bergen_rgr", "", 20000, { "", "", -1 } },
            { "B_Bergen_blk", "", 20000, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 5000, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 5000, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 5000, { "", "", -1 } },
            { "B_Carryall_oli", "", 5000, { "", "", -1 } },
            { "B_Carryall_khk", "", 5000, { "", "", -1 } },
            { "B_Carryall_cbr", "", 5000, { "", "", -1 } }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        license = "";
        side = "med";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_B_CombatUniform_mcam","Feuerwehr Uniform", 10, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Beret_blk", "", 10, { "", "", -1 } },
			{ "H_Cap_blk", "", 10, { "", "", -1 } },
			{ "H_Cap_marshal", "", 10, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 10, { "", "", -1 } },
			{ "G_Shades_Blue", "", 10, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 10, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 10, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 10, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 10, { "", "", -1 } },
			{ "G_Aviator", "", 10, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Lowprofile", "", 10, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_Kitbag_sgg","MEDIC-Backpack", 10, { "", "", -1 } }
        };
    };

    class rebel {
        title = "STR_Shops_C_Rebel";
        license = "rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_I_C_Soldier_Bandit_1_F", "", 5000, {"", "", -1} },
            { "U_I_C_Soldier_Bandit_2_F", "", 5000, { "", "", -1 } },
            { "U_I_C_Soldier_Bandit_3_F", "", 5000, { "", "", -1 } },
            { "U_I_C_Soldier_Bandit_4_F", "", 5000, { "", "", -1 } },
            { "U_I_C_Soldier_Bandit_5_F", "", 5000, { "", "", -1 } },
            { "U_IG_Guerilla1_1", "", 5000, { "", "", -1 } },
            { "U_I_G_Story_Protagonist_F", "", 10000, { "", "", -1 } },
			{ "U_BG_Guerrilla_6_1", "", 10000, { "", "", -1 } },
			{ "U_O_CombatUniform_ocamo", "", 10000, { "", "", -1 } },
			{ "U_O_CombatUniform_oucamo", "", 10000, { "", "", -1 } },
			{ "U_I_G_resistanceLeader_F", "", 10000, { "", "", -1 } },
			{ "U_O_SpecopsUniform_ocamo", "", 10000, { "", "", -1 } },
			{ "U_O_PilotCoveralls", "", 10000, { "", "", -1 } },
			{ "U_IG_leader", "", 10000, { "", "", -1 } },
			{ "U_O_GhillieSuit", "", 50000, { "", "", -1 } },
			{ "U_B_CTRG_1", "", 10000, { "", "", -1 } },
			{ "U_B_CTRG_Soldier_F", "", 10000, { "", "", -1 } },
			{ "U_B_CTRG_Soldier_2_F", "", 10000, { "", "", -1 } },
			{ "U_B_CTRG_Soldier_3_F", "", 10000, { "", "", -1 } },
			{ "U_B_CTRG_Soldier_urb_1_F", "", 10000, { "", "", -1 } },
			{ "U_B_CTRG_Soldier_urb_2_F", "", 10000, { "", "", -1 } },
			{ "U_B_CTRG_Soldier_urb_3_F", "", 10000, { "", "", -1 } },
			{ "U_B_T_Sniper_F", "", 50000, { "", "", -1 } },
			{ "U_B_T_FullGhillie_tna_F", "", 100000, { "", "", -1 } },
			{ "U_B_FullGhillie_lsh", "", 100000, { "", "", -1 } },
			{ "U_B_FullGhillie_sard", "", 100000, { "", "", -1 } },
			{ "U_B_FullGhillie_ard", "", 100000, { "", "", -1 } },
			{ "U_O_FullGhillie_lsh", "", 100000, { "", "", -1 } },
			{ "U_O_FullGhillie_sard", "", 100000, { "", "", -1 } },
			{ "U_O_FullGhillie_ard", "", 100000, { "", "", -1 } },
			{ "U_I_FullGhillie_ard", "", 100000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_ShemagOpen_tan", "", 650, { "", "", -1 } },
            { "H_Shemag_olive", "", 800, { "", "", -1 } },
            { "H_ShemagOpen_khk", "", 850, { "", "", -1 } },
            { "H_HelmetO_ocamo", "", 5000, { "", "", -1 } },
            { "H_MilCap_oucamo", "", 1200, { "", "", -1 } },
            { "H_Bandanna_camo", "", 2500, { "", "", -1 } },
			{ "H_Watchcap_blk", "", 2500, { "", "", -1 } },
			{ "H_CrewHelmetHeli_I", "", 10000, { "", "", -1 } },
			{ "H_HelmetB_light_sand", "", 10000, { "", "", -1 } },
			{ "H_HelmetB_sand", "", 10000, { "", "", -1 } },
			{ "H_HelmetSpecB_sand", "", 10000, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Aviator", "", 50, { "", "", -1 } },
            { "G_Shades_Black", "", 50, { "", "", -1 } },
            { "G_Shades_Blue", "", 50, { "", "", -1 } },
            { "G_Sport_Blackred", "", 50, { "", "", -1 } },
            { "G_Sport_Checkered", "", 50, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 50, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 50, { "", "", -1 } },
            { "G_Lowprofile", "", 50, { "", "", -1 } },
            { "G_Squares", "", 50, { "", "", -1 } },
            { "G_Combat", "", 50, { "", "", -1 } },
            { "G_Balaclava_blk", "", 50, { "", "", -1 } },
            { "G_Balaclava_combat", "", 50, { "", "", -1 } },
            { "G_Balaclava_lowprofile", "", 50, { "", "", -1 } },
            { "G_Balaclava_oli", "", 50, { "", "", -1 } },
            { "G_Bandanna_aviator", "", 50, { "", "", -1 } },
            { "G_Bandanna_beast", "", 50, { "", "", -1 } },
            { "G_Bandanna_blk", "", 50, { "", "", -1 } },
            { "G_Bandanna_khk", "", 50, { "", "", -1 } },
            { "G_Bandanna_oli", "", 50, { "", "", -1 } },
            { "G_Bandanna_shades", "", 50, { "", "", -1 } },
            { "G_Bandanna_sport", "", 50, { "", "", -1 } },
            { "G_Bandanna_tan", "", 50, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_BandollierB_cbr", "", 20000, { "", "", -1 } },
            { "V_HarnessO_brn", "", 30000, { "", "", -1 } },
			{ "V_PlateCarrier_Kerry", "", 40000, { "", "", -1 } },
			{ "V_TacVest_khk", "", 50000, { "", "", -1 } },
			{ "V_TacVest_brn", "", 60000, { "", "", -1 } },
			{ "V_Chestrig_khk", "", 70000, { "", "", -1 } },
			{ "V_PlateCarrierH_CTRG", "", 80000, { "", "", -1 } },
			{ "V_PlateCarrier1_rgr_noflag_F", "", 90000, { "", "", -1 } },
			{ "V_PlateCarrierGL_mtp", "", 100000, { "", "", -1 } },
            { "V_PlateCarrier2_rgr_noflag_F", "", 11000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 500, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 2000, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 2500, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 3500, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 3500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 3500, { "", "", -1 } },
            { "B_FieldPack_blk", "", 5000, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 5000, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 5000, { "", "", -1 } },
            { "B_Bergen_sgg_F", "", 20000, { "", "", -1 } },
            { "B_Bergen_mcamo_F", "", 20000, { "", "", -1 } },
            { "B_Bergen_rgr_F", "", 20000, { "", "", -1 } },
            { "B_Bergen_blk_F", "", 20000, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 5000, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 5000, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 5000, { "", "", -1 } },
            { "B_Carryall_oli", "", 5000, { "", "", -1 } },
            { "B_Carryall_khk", "", 5000, { "", "", -1 } },
            { "B_Carryall_cbr", "", 5000, { "", "", -1 } }
        };
    };

	class elite {
        title = "STR_Shops_C_Elite";
        license = "elite";
        side = "civ";
        uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_I_C_Soldier_Bandit_1_F", "", 5000, {"", "", -1} },
			{ "U_I_C_Soldier_Bandit_2_F", "", 5000, { "", "", -1 } },
			{ "U_I_C_Soldier_Bandit_3_F", "", 5000, { "", "", -1 } },
			{ "U_I_C_Soldier_Bandit_4_F", "", 5000, { "", "", -1 } },
			{ "U_I_C_Soldier_Bandit_5_F", "", 5000, { "", "", -1 } },
			{ "U_IG_Guerilla1_1", "", 5000, { "", "", -1 } },
			{ "U_I_G_Story_Protagonist_F", "", 5000, { "", "", -1 } },
			{ "U_BG_Guerrilla_6_1", "", 5000, { "", "", -1 } },
			{ "U_O_CombatUniform_ocamo", "", 5000, { "", "", -1 } },
			{ "U_O_CombatUniform_oucamo", "", 5000, { "", "", -1 } },
			{ "U_I_G_resistanceLeader_F", "", 5000, { "", "", -1 } },
			{ "U_O_SpecopsUniform_ocamo", "", 5000, { "", "", -1 } },
			{ "U_O_PilotCoveralls", "", 5000, { "", "", -1 } },
			{ "U_IG_leader", "", 5000, { "", "", -1 } },
			{ "U_O_GhillieSuit", "", 25000, { "", "", -1 } },
			{ "U_B_CTRG_1", "", 5000, { "", "", -1 } },
			{ "U_B_CTRG_Soldier_F", "", 5000, { "", "", -1 } },
			{ "U_B_CTRG_Soldier_2_F", "", 5000, { "", "", -1 } },
			{ "U_B_CTRG_Soldier_3_F", "", 5000, { "", "", -1 } },
			{ "U_B_CTRG_Soldier_urb_1_F", "", 5000, { "", "", -1 } },
			{ "U_B_CTRG_Soldier_urb_2_F", "", 5000, { "", "", -1 } },
			{ "U_B_CTRG_Soldier_urb_3_F", "", 5000, { "", "", -1 } },
			{ "U_B_T_Sniper_F", "", 25000, { "", "", -1 } },
			{ "U_B_T_FullGhillie_tna_F", "", 50000, { "", "", -1 } },
			{ "U_B_FullGhillie_lsh", "", 50000, { "", "", -1 } },
			{ "U_B_FullGhillie_sard", "", 50000, { "", "", -1 } },
			{ "U_B_FullGhillie_ard", "", 50000, { "", "", -1 } },
			{ "U_O_FullGhillie_lsh", "", 50000, { "", "", -1 } },
			{ "U_O_FullGhillie_sard", "", 50000, { "", "", -1 } },
			{ "U_O_FullGhillie_ard", "", 50000, { "", "", -1 } },
			{ "U_I_FullGhillie_ard", "", 50000, { "", "", -1 } },
			{ "U_O_V_Soldier_Viper_F", "", 150000, { "", "", -1 } }
        };
        headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_ShemagOpen_tan", "", 650, { "", "", -1 } },
			{ "H_Shemag_olive", "", 800, { "", "", -1 } },
			{ "H_ShemagOpen_khk", "", 850, { "", "", -1 } },
			{ "H_HelmetO_ocamo", "", 5000, { "", "", -1 } },
			{ "H_MilCap_oucamo", "", 1200, { "", "", -1 } },
			{ "H_Bandanna_camo", "", 2500, { "", "", -1 } },
			{ "H_Watchcap_blk", "", 2500, { "", "", -1 } },
			{ "H_CrewHelmetHeli_I", "", 10000, { "", "", -1 } },
			{ "H_HelmetB_light_sand", "", 10000, { "", "", -1 } },
			{ "H_HelmetB_sand", "", 10000, { "", "", -1 } },
			{ "H_HelmetSpecB_sand", "", 10000, { "", "", -1 } },
			{ "H_MilCap_tna_F", "", 10000, { "", "", -1 } },
			{ "H_HelmetB_Light_tna_F", "", 10000, { "", "", -1 } },
			{ "H_HelmetB_tna_F", "", 10000, { "", "", -1 } },
			{ "H_HelmetB_Enh_tna_F", "", 10000, { "", "", -1 } },
			{ "H_HelmetB_TI_tna_F", "", 10000, { "", "", -1 } }
        };
        goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Aviator", "", 50, { "", "", -1 } },
			{ "G_Shades_Black", "", 50, { "", "", -1 } },
			{ "G_Shades_Blue", "", 50, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 50, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 50, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 50, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 50, { "", "", -1 } },
			{ "G_Lowprofile", "", 50, { "", "", -1 } },
			{ "G_Squares", "", 50, { "", "", -1 } },
			{ "G_Combat", "", 50, { "", "", -1 } },
			{ "G_Balaclava_blk", "", 50, { "", "", -1 } },
			{ "G_Balaclava_combat", "", 50, { "", "", -1 } },
			{ "G_Balaclava_lowprofile", "", 50, { "", "", -1 } },
			{ "G_Balaclava_oli", "", 50, { "", "", -1 } },
			{ "G_Bandanna_aviator", "", 50, { "", "", -1 } },
			{ "G_Bandanna_beast", "", 50, { "", "", -1 } },
			{ "G_Bandanna_blk", "", 50, { "", "", -1 } },
			{ "G_Bandanna_khk", "", 50, { "", "", -1 } },
			{ "G_Bandanna_oli", "", 50, { "", "", -1 } },
			{ "G_Bandanna_shades", "", 50, { "", "", -1 } },
			{ "G_Bandanna_sport", "", 50, { "", "", -1 } },
			{ "G_Bandanna_tan", "", 50, { "", "", -1 } },
			{ "G_Bandanna_tan", "", 50, { "", "", -1 } },
			{ "G_Balaclava_TI_tna_F", "", 50, { "", "", -1 } },
            { "G_Balaclava_TI_G_tna_F", "", 50, { "", "", -1 } },
            { "G_Balaclava_TI_blk_F", "", 50, { "", "", -1 } },
            { "G_Balaclava_TI_G_blk_F", "", 50, { "", "", -1 } }
		};
        vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_BandollierB_cbr", "", 10000, { "", "", -1 } },
            { "V_HarnessO_brn", "", 15000, { "", "", -1 } },
			{ "V_PlateCarrier_Kerry", "", 20000, { "", "", -1 } },
			{ "V_TacVest_khk", "", 40000, { "", "", -1 } },
			{ "V_TacVest_brn", "", 50000, { "", "", -1 } },
			{ "V_Chestrig_khk", "", 60000, { "", "", -1 } },
			{ "V_PlateCarrierH_CTRG", "", 70000, { "", "", -1 } },
			{ "V_PlateCarrier1_rgr_noflag_F", "", 80000, { "", "", -1 } },
			{ "V_PlateCarrierGL_mtp", "", 90000, { "", "", -1 } },
            { "V_PlateCarrier2_rgr_noflag_F", "", 100000, { "", "", -1 } },
			{ "V_PlateCarrier1_tna_F", "", 110000, { "", "", -1 } },
			{ "V_PlateCarrier2_tna_F", "", 120000, { "", "", -1 } },
			{ "V_PlateCarrierSpec_tna_F", "", 130000, { "", "", -1 } },
			{ "V_PlateCarrierGL_tna_F", "", 140000, { "", "", -1 } }
        };
        backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_OutdoorPack_blk", "", 500, { "", "", -1 } },
			{ "B_AssaultPack_khk", "", 2000, { "", "", -1 } },
			{ "B_AssaultPack_dgtl", "", 2000, { "", "", -1 } },
			{ "B_AssaultPack_rgr", "", 2000, { "", "", -1 } },
			{ "B_AssaultPack_sgg", "", 2000, { "", "", -1 } },
			{ "B_AssaultPack_blk", "", 2000, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 2000, { "", "", -1 } },
			{ "B_AssaultPack_mcamo", "", 2000, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 2500, { "", "", -1 } },
			{ "B_Kitbag_mcamo", "", 3500, { "", "", -1 } },
			{ "B_Kitbag_sgg", "", 3500, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 3500, { "", "", -1 } },
			{ "B_FieldPack_blk", "", 5000, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 5000, { "", "", -1 } },
			{ "B_FieldPack_oucamo", "", 5000, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 10000, { "", "", -1 } },
			{ "B_Bergen_mcamo", "", 10000, { "", "", -1 } },
			{ "B_Bergen_rgr", "", 10000, { "", "", -1 } },
			{ "B_Bergen_blk", "", 10000, { "", "", -1 } },
			{ "B_Bergen_tna_F", "", 10000, { "", "", -1 } },
			{ "B_Carryall_ocamo", "", 5000, { "", "", -1 } },
			{ "B_Carryall_oucamo", "", 5000, { "", "", -1 } },
			{ "B_Carryall_mcamo", "", 5000, { "", "", -1 } },
			{ "B_Carryall_oli", "", 5000, { "", "", -1 } },
			{ "B_Carryall_khk", "", 5000, { "", "", -1 } },
			{ "B_Carryall_cbr", "", 5000, { "", "", -1 } },
			{ "B_ViperHarness_ghex_F", "", 5000, { "", "", -1 } },
			{ "B_ViperHarness_blk_F", "", 5000, { "", "", -1 } }
        };
    };
};