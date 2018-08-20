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
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_C_Poloshirt_stripped", "Poloshirt stripped", 125, "" },
            { "U_C_Poloshirt_redwhite", "Poloshirt Red/White", 150, "" },
            { "U_C_Poloshirt_salmon", "Poloshirt Salmon", 175, "" },
            { "U_C_Poloshirt_blue", "Poloshirt Blue", 250, "" },
            { "U_C_Poor_2", "Rag tagged clothes", 250, "" },
            { "U_C_Poloshirt_burgundy", "Poloshirt Burgundy", 275, "" },
            { "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 350, "" },
            { "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 650, "" },
            { "U_IG_Guerilla3_1", "Brown Jacket & Pants", 735, "" },
            { "U_OrestesBody", "Surfing On Land", 1100, "" },
            { "U_IG_Guerilla2_3", "The Outback Rangler", 1200, "" },
            { "U_C_HunterBody_grn", "The Hunters Look", 1500, "" },
            { "U_C_WorkerCoveralls", "Mechanic Coveralls", 2500, "" },
            { "U_NikosAgedBody", "Casual Wears", 5000, "" },
			{ "U_C_Poor_2","Hello Kitty", 5000, "" },
			{ "U_I_C_Soldier_Bandit_1_F", "", 15000, "" },
            { "U_I_C_Soldier_Bandit_2_F", "", 15000, "" },
            { "U_I_C_Soldier_Bandit_3_F", "", 15000, "" },
            { "U_I_C_Soldier_Bandit_4_F", "", 15000, "" },
            { "U_I_C_Soldier_Bandit_5_F", "", 15000, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_Bandanna_camo", "Camo Bandanna", 120, "" },
            { "H_Bandanna_surfer", "Surfer Bandanna", 130, "" },
            { "H_Bandanna_surfer", "", 135, "" },
            { "H_Bandanna_khk", "Khaki Bandanna", 145, "" },
            { "H_Cap_blu", "", 150, "" },
            { "H_Cap_grn", "", 150, "" },
            { "H_Cap_grn_BI", "", 150, "" },
            { "H_Cap_oli", "", 150, "" },
            { "H_Cap_red", "", 150, "" },
            { "H_Cap_tan", "", 150, "" },
            { "H_Bandanna_gry", "Grey Bandanna", 150, "" },
            { "H_Bandanna_sgg", "Sage Bandanna", 160, "" },
            { "H_Bandanna_cbr", "", 165, "" },
            { "H_StrawHat", "Straw Fedora", 225, "" },
            { "H_Hat_tan", "", 265, "" },
            { "H_Hat_brown", "", 276, "" },
            { "H_Hat_grey", "", 280, "" },
            { "H_BandMask_blk", "Hat & Bandanna", 300, "" },
            { "H_Hat_blue", "", 310, "" },
            { "H_Hat_checker", "", 340, "" },
            { "H_Booniehat_tan", "", 425, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Shades_Green", "", 20, "" },
            { "G_Shades_Red", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Greenblack", "", 25, "" },
            { "G_Sport_Red", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Aviator", "", 100, "" },
            { "G_Combat", "", 125, "" },
            { "G_Lady_Mirror", "", 150, "" },
            { "G_Lady_Dark", "", 150, "" },
            { "G_Lady_Blue", "", 150, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_Bergen_hex_F", "", 45000, "" },
			{ "B_Bergen_mcamo_F", "", 45000, "" },
			{ "B_Bergen_dgtl_F", "", 45000, "" },
			{ "B_ViperHarness_hex_F", "", 95000, "" },
			{ "B_ViperHarness_khk_F", "", 95000, "" },
			{ "B_ViperHarness_oli_F", "", 95000, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" }
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        conditions = "";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_Rangemaster","Praktikant", 1, "" },
            { "U_B_SpecopsUniform_sgg", "Beamten Uniform", 1, "call life_coplevel >= 2" },
            { "U_B_Wetsuit","Taucher Anzug", 1, "call life_coplevel >=  2 " },
			{ "U_B_CombatUniform_mcam_vest", "", 1, "call life_coplevel >= 5" },
			{ "U_B_FullGhillie_lsh", "", 1, "call life_coplevel >= 7" },
			{ "U_B_FullGhillie_sard", "", 1, "call life_coplevel >= 7 " },
			{ "U_B_FullGhillie_ard", "", 1, "call life_coplevel >= 7 " },
			{ "U_B_CombatUniform_mcam","SEK-Uniform", 1, "call life_coplevel >= 9 " },
			{ "U_B_GEN_Soldier_F","Zivile-SEK-Uniform", 1, "call life_coplevel >= 9 " },
			{ "U_B_CombatUniform_mcam_worn","SEK-Uniform-Digi", 1, "call life_coplevel >= 9 " },
            { "U_B_GEN_Commander_F","Zivile-Leitungs-Uniform", 1, "call life_coplevel >= 12" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_Cap_police", "", 1, "" },
            { "H_MilCap_gen_F", "", 1, "call life_coplevel >= 3 " },
            { "H_Watchcap_blk", "", 1, "call life_coplevel >= 3 " },
			{ "H_HelmetB_light_black", "", 1, "call life_coplevel >= 3 " },
            { "H_Beret_blk", "", 1, "call life_coplevel >= 5 " },
			{ "H_Beret_blk_POLICE", "", 1, "call life_coplevel >= 5 " },
			{ "H_HelmetB_black","Schwerer Helm", 1, "call life_coplevel >= 5 " },
			{ "H_Beret_02", "", 1, "call life_coplevel >= 6 " },
			{ "H_HelmetIA", "", 1, "call life_coplevel >= 6 " },
			{ "H_Beret_Colonel", "", 1, "call life_coplevel >= 7 " },
			{ "H_Beret_Gen_F", "", 1, "call life_coplevel >= 8 " },
			{ "H_CrewHelmetHeli_B", "", 1, "call life_coplevel >= 8 " },
			{ "H_HelmetSpecB_blk", "", 1, "call life_coplevel >= 8 " },
			{ "H_StrawHat", "", 1, "call life_coplevel >=  12 " },
            { "H_Booniehat_mcamo", "", 1, "call life_coplevel >= 1" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Squares", "", 1, "" },
            { "G_Shades_Blue", "", 1, "" },
            { "G_Sport_Blackred", "", 1, "" },
            { "G_Sport_Checkered", "", 1, "" },
            { "G_Sport_Blackyellow", "", 1, "" },
            { "G_Sport_BlackWhite", "", 1, "" },
            { "G_Shades_Black", "", 1, "" },
            { "G_Lowprofile", "", 1, "" },
            { "G_Aviator", "", 1, "" },
            { "G_Lady_Mirror", "", 1, "" },
            { "G_Lady_Dark", "", 1, "" },
            { "G_Lady_Blue", "", 1, "" },
            { "G_Combat", "", 1, "call life_coplevel >= 6 " },
			{ "G_Balaclava_blk", "", 1, "call life_coplevel >= 6 " },
			{ "G_Balaclava_TI_blk_F", "", 1, "call life_coplevel >= 6 " },
			{ "G_Balaclava_TI_G_blk_F", "", 1, "call life_coplevel >= 6" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_Rangemaster_belt", "", 1, "" },
            { "V_RebreatherB", "", 1, "call life_coplevel >= 2 " },
            { "V_TacVest_blk_POLICE","Polizeiweste", 1, "call life_coplevel >= 2 " },
			{ "V_TacVestIR_blk","Einsatzweste", 1, "call life_coplevel >= 3 " },
			{ "V_PlateCarrier1_blk","Leichte Weste", 1, "call life_coplevel >= 5 " },
            { "V_PlateCarrier2_blk","Schwere Weste", 1, "call life_coplevel >= 6 " },
			{ "V_PlateCarrierSpec_blk","SEK Weste", 1, "call life_coplevel >= 9" }
			};
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "B_AssaultPack_cbr", "", 1, "" },
            { "B_Kitbag_cbr", "", 1, "" },
            { "B_FieldPack_cbr", "", 1, "" },
            { "B_Carryall_mcamo", "", 1, "" },
            { "B_Bergen_hex_F", "", 1, "" },
			{ "B_Bergen_mcamo_F", "", 1, "" },
			{ "B_Bergen_dgtl_F", "", 1, "" },
			{ "B_Carryall_cbr", "", 1, "" },
			{ "B_FieldPack_cbr_Ammo", "", 1, "" },
			{ "B_Carryall_oucamo", "", 1, "" },
			{ "B_Bergen_blk_F", "", 1, "" },
			{ "B_UAV_01_backpack_F", "", 1, "call life_coplevel >= 4" }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        conditions = "license_civ_dive";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_B_Wetsuit", "", 5000, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Diving", "", 500, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_RebreatherB", "", 5000, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" }
        };
    };
	
	class airsoft {
        title = "STR_Shops_C_Airsoft";
        conditions = "license_civ_airsoft";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_C_man_sport_1_F", "", 5000, "" },			
            { "U_C_man_sport_2_F", "", 5000, "" },			
            { "U_C_man_sport_3_F", "", 5000, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
			{ "H_PASGT_basic_blue_F", "", 45000, "" },
			{ "H_PASGT_basic_olive_F", "", 45000, "" },
			{ "H_WirelessEarpiece_F", "", 35000, "" },
			{ "H_PASGT_basic_white_F", "", 45000, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
			{ "G_WirelessEarpiece_F", "", 35000, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_DeckCrew_blue_F", "", 25000, "" },
			{ "V_DeckCrew_brown_F", "", 25000, "" },
            { "V_DeckCrew_yellow_F", "", 25000, "" },
			{ "V_DeckCrew_green_F", "", 25000, "" },
			{ "V_DeckCrew_red_F", "", 25000, "" },
            { "V_DeckCrew_violet_F", "", 25000, "" },
			{ "V_DeckCrew_white_F", "", 25000, "" },
			{ "V_Safety_blue_F", "", 35000, "" },
			{ "V_Safety_yellow_F", "", 25000, "" },
			{ "V_Safety_orange_F", "", 25000, "" },
			{ "V_LegStrapBag_coyote_F", "", 35000, "" },
			{ "V_LegStrapBag_olive_F", "", 35000, "" },
			{ "V_LegStrapBag_black_F", "", 35000, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
			{ "B_LegStrapBag_coyote_F", "", 35000, "" },
			{ "B_LegStrapBag_olive_F", "", 35000, "" },
			{ "B_LegStrapBag_black_F", "", 35000, "" }
        };
    };
	
	class bauarbeiter {
        title = "STR_Shops_C_Bauarbeiter";
        conditions = "license_civ_bauarbeiter";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_C_ConstructionCoverall_Red_F", "", 15000, "" },			
            { "U_C_ConstructionCoverall_Vrana_F", "", 15000, "" },			
            { "U_C_ConstructionCoverall_Black_F", "", 15000, "" },
			{ "U_C_ConstructionCoverall_Blue_F", "", 15000, "" },			
            { "U_C_Mechanic_01_F", "", 15000, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
			{ "H_PASGT_basic_blue_F", "", 14500, "" },
			{ "H_PASGT_basic_olive_F", "", 14500, "" },
			{ "H_PASGT_basic_white_F", "", 14500, "" },
			{ "H_HeadSet_yellow_F", "", 14500, "" },
			{ "H_HeadSet_white_F", "", 14500, "" },
			{ "H_HeadSet_orange_F", "", 14500, "" },
			{ "H_HeadSet_red_F", "", 14500, "" },
			{ "H_HeadSet_black_F", "", 14500, "" },
			{ "H_WirelessEarpiece_F", "", 35000, "" },
			{ "H_EarProtectors_yellow_F", "", 14500, "" },
			{ "H_EarProtectors_white_F", "", 14500, "" },
			{ "H_EarProtectors_orange_F", "", 14500, "" },
			{ "H_EarProtectors_red_F", "", 14500, "" },
			{ "H_EarProtectors_black_F", "", 14500, "" },
			{ "H_Construction_earprot_yellow_F", "", 14500, "" },
			{ "H_Construction_earprot_white_F", "", 14500, "" },
			{ "H_Construction_earprot_orange_F", "", 14500, "" },
			{ "H_Construction_earprot_red_F", "", 14500, "" },
			{ "H_Construction_earprot_vrana_F", "", 14500, "" },
			{ "H_Construction_earprot_black_F", "", 14500, "" },
			{ "H_Construction_headset_yellow_F", "", 14500, "" },
			{ "H_Construction_headset_white_F", "", 14500, "" },
			{ "H_Construction_headset_orange_F", "", 14500, "" },
			{ "H_Construction_headset_red_F", "", 14500, "" },
			{ "H_Construction_headset_vrana_F", "", 14500, "" },
			{ "H_Construction_headset_black_F", "", 14500, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
			{ "G_WirelessEarpiece_F", "", 35000, "" },
			{ "G_EyeProtectors_F", "", 15000, "" },
			{ "G_EyeProtectors_Earpiece_F", "", 15000, "" },
			{ "G_Respirator_blue_F", "", 14500, "" },
			{ "G_Respirator_yellow_F", "", 14500, "" },
			{ "G_Respirator_white_F", "", 14500, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_DeckCrew_blue_F", "", 25000, "" },
			{ "V_DeckCrew_brown_F", "", 25000, "" },
            { "V_DeckCrew_yellow_F", "", 25000, "" },
			{ "V_DeckCrew_green_F", "", 25000, "" },
			{ "V_DeckCrew_red_F", "", 25000, "" },
            { "V_DeckCrew_violet_F", "", 25000, "" },
			{ "V_DeckCrew_white_F", "", 25000, "" },
			{ "V_Safety_blue_F", "", 35000, "" },
			{ "V_Safety_yellow_F", "", 25000, "" },
			{ "V_Safety_orange_F", "", 25000, "" },
			{ "V_LegStrapBag_coyote_F", "", 35000, "" },
			{ "V_LegStrapBag_olive_F", "", 35000, "" },
			{ "V_LegStrapBag_black_F", "", 35000, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
			{ "B_LegStrapBag_coyote_F", "", 35000, "" },
			{ "B_LegStrapBag_olive_F", "", 35000, "" },
			{ "B_LegStrapBag_black_F", "", 35000, "" },
			{ "B_Messenger_Gray_F", "", 35000, "" },
			{ "B_Messenger_Coyote_F", "", 35000, "" },
			{ "B_Messenger_Olive_F", "", 35000, "" },
			{ "B_Messenger_Black_F", "", 35000, "" },
			{ "B_Messenger_IDAP_F", "", 35000, "" }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        conditions = "license_civ_gun";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_Rangemaster_belt", "", 2000, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" }
        };
    };
	
	class uran_clothing {
        title = "STR_Shops_Uranium";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
			{ "U_I_HeliPilotCoveralls","Anti-Strahlungs Anzug", 100000, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" }
        };
    };
	
    class gang_clothing {
        title = "STR_Shops_C_Gang";
        conditions = "";
        side = "civ";
        uniforms[] = {
			{ "NONE", "Remove Uniform", 0, "" },
            { "U_I_C_Soldier_Bandit_1_F", "", 15000, "" },
            { "U_I_C_Soldier_Bandit_2_F", "", 15000, "" },
            { "U_I_C_Soldier_Bandit_3_F", "", 15000, "" },
            { "U_I_C_Soldier_Bandit_4_F", "", 15000, "" },
            { "U_I_C_Soldier_Bandit_5_F", "", 15000, "" },
            { "U_IG_Guerilla1_1", "", 15000, "" },
            { "U_I_G_Story_Protagonist_F", "", 110000, "" },
			{ "U_BG_Guerrilla_6_1", "", 110000, "" },
			{ "U_O_CombatUniform_ocamo", "", 110000, "" },
			{ "U_O_CombatUniform_oucamo", "", 110000, "" },
			{ "U_I_G_resistanceLeader_F", "", 110000, "" },
			{ "U_O_SpecopsUniform_ocamo", "", 110000, "" },
			{ "U_O_PilotCoveralls", "", 110000, "" },
			{ "U_IG_leader", "", 110000, "" },
			{ "U_O_GhillieSuit", "", 150000, "" },
			{ "U_B_CTRG_1", "", 110000, "" },
			{ "U_B_CTRG_Soldier_F", "", 110000, "" },
			{ "U_B_CTRG_Soldier_2_F", "", 110000, "" },
			{ "U_B_CTRG_Soldier_3_F", "", 110000, "" },
			{ "U_B_CTRG_Soldier_urb_1_F", "", 110000, "" },
			{ "U_B_CTRG_Soldier_urb_2_F", "", 110000, "" },
			{ "U_B_CTRG_Soldier_urb_3_F", "", 110000, "" },
			{ "U_B_T_Sniper_F", "", 250000, "" },
			{ "U_B_T_FullGhillie_tna_F", "", 290000, "" },
			{ "U_B_FullGhillie_lsh", "", 290000, "" },
			{ "U_B_FullGhillie_sard", "", 290000, "" },
			{ "U_B_FullGhillie_ard", "", 290000, "" },
			{ "U_O_FullGhillie_lsh", "", 290000, "" },
			{ "U_O_FullGhillie_sard", "", 290000, "" },
			{ "U_O_FullGhillie_ard", "", 290000, "" },
			{ "U_I_FullGhillie_ard", "", 290000, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_ShemagOpen_tan", "", 6500, "" },
            { "H_Shemag_olive", "", 8000, "" },
            { "H_ShemagOpen_khk", "", 8500, "" },
            { "H_HelmetO_ocamo", "", 50000, "" },
            { "H_MilCap_oucamo", "", 1200, "" },
            { "H_Bandanna_camo", "", 2500, "" },
			{ "H_Watchcap_blk", "", 2500, "" },
			{ "H_CrewHelmetHeli_I", "", 100000, "" },
			{ "H_HelmetB_light_sand", "", 100000, "" },
			{ "H_HelmetB_sand", "", 100000, "" },
			{ "H_HelmetSpecB_sand", "", 100000, "" },
			{ "H_HelmetB_TI_tna_F", "", 100000, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
			{ "G_Aviator", "", 50, "" },
            { "G_Shades_Black", "", 50, "" },
            { "G_Shades_Blue", "", 50, "" },
            { "G_Sport_Blackred", "", 50, "" },
            { "G_Sport_Checkered", "", 50, "" },
            { "G_Sport_Blackyellow", "", 50, "" },
            { "G_Sport_BlackWhite", "", 50, "" },
            { "G_Lowprofile", "", 50, "" },
            { "G_Squares", "", 50, "" },
            { "G_Combat", "", 50, "" },
            { "G_Balaclava_blk", "", 5000, "" },
            { "G_Balaclava_combat", "", 5000, "" },
            { "G_Balaclava_lowprofile", "", 5000, "" },
            { "G_Balaclava_oli", "", 5000, "" },
            { "G_Bandanna_aviator", "", 5000, "" },
            { "G_Bandanna_beast", "", 5000, "" },
            { "G_Bandanna_blk", "", 5000, "" },
            { "G_Bandanna_khk", "", 5000, "" },
            { "G_Bandanna_oli", "", 50000, "" },
            { "G_Bandanna_shades", "", 5000, "" },
            { "G_Bandanna_sport", "", 5000, "" },
            { "G_Bandanna_tan", "", 5000, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_BandollierB_cbr", "", 20000, "" },
            { "V_HarnessO_brn", "", 30000, "" },
			{ "V_PlateCarrier_Kerry", "", 40000, "" },
			{ "V_TacVest_khk", "", 50000, "" },
			{ "V_TacVest_brn", "", 60000, "" },
			{ "V_Chestrig_khk", "", 70000, "" },
			{ "V_PlateCarrierH_CTRG", "", 80000, "" },
			{ "V_PlateCarrier1_rgr_noflag_F", "", 90000, "" },
			{ "V_PlateCarrierGL_mtp", "", 100000, "" },
            { "V_PlateCarrier2_rgr_noflag_F", "", 110000, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
			{ "B_Bergen_hex_F", "", 20000, "" },
			{ "B_Bergen_mcamo_F", "", 20000, "" },
			{ "B_Bergen_dgtl_F", "", 20000, "" },
			{ "B_ViperHarness_hex_F", "", 85000, "" },
			{ "B_ViperHarness_khk_F", "", 85000, "" },
			{ "B_ViperHarness_oli_F", "", 85000, "" },
            { "B_Carryall_ocamo", "", 5000, "" },
            { "B_Carryall_oucamo", "", 5000, "" },
            { "B_Carryall_mcamo", "", 5000, "" },
            { "B_Carryall_oli", "", 5000, "" },
            { "B_Carryall_khk", "", 5000, "" },
            { "B_Carryall_cbr", "", 5000, "" }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        conditions = "";
        side = "med";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_B_CombatUniform_mcam","Feuerwehr Uniform", 10, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_Beret_blk", "", 10, "" },
			{ "H_Cap_blk", "", 10, "" },
			{ "H_Cap_marshal", "", 10, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Shades_Black", "", 10, "" },
			{ "G_Shades_Blue", "", 10, "" },
			{ "G_Sport_Blackred", "", 10, "" },
			{ "G_Sport_Checkered", "", 10, "" },
			{ "G_Sport_Blackyellow", "", 10, "" },
			{ "G_Sport_BlackWhite", "", 10, "" },
			{ "G_Aviator", "", 10, "" },
			{ "G_Squares", "", 10, "" },
			{ "G_Lowprofile", "", 10, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "B_Kitbag_sgg","MEDIC-Backpack", 10, "" }
        };
    };

    class rebel {
        title = "STR_Shops_C_Rebel";
        conditions = "license_civ_rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_I_C_Soldier_Bandit_1_F", "", 5000, "" },
            { "U_I_C_Soldier_Bandit_2_F", "", 5000, "" },
            { "U_I_C_Soldier_Bandit_3_F", "", 5000, "" },
            { "U_I_C_Soldier_Bandit_4_F", "", 5000, "" },
            { "U_I_C_Soldier_Bandit_5_F", "", 5000, "" },
            { "U_IG_Guerilla1_1", "", 50000, "" },
            { "U_I_G_Story_Protagonist_F", "", 50000, "" },
			{ "U_BG_Guerrilla_6_1", "", 50000, "" },
			{ "U_O_CombatUniform_ocamo", "", 50000, "" },
			{ "U_O_CombatUniform_oucamo", "", 50000, "" },
			{ "U_I_G_resistanceLeader_F", "", 50000, "" },
			{ "U_O_SpecopsUniform_ocamo", "", 50000, "" },
			{ "U_O_PilotCoveralls", "", 50000, "" },
			{ "U_IG_leader", "", 50000, "" },
			{ "U_O_GhillieSuit", "", 150000, "" },
			{ "U_B_CTRG_1", "", 50000, "" },
			{ "U_B_CTRG_Soldier_F", "", 50000, "" },
			{ "U_B_CTRG_Soldier_2_F", "", 50000, "" },
			{ "U_B_CTRG_Soldier_3_F", "", 50000, "" },
			{ "U_B_CTRG_Soldier_urb_1_F", "", 50000, "" },
			{ "U_B_CTRG_Soldier_urb_2_F", "", 50000, "" },
			{ "U_B_CTRG_Soldier_urb_3_F", "", 51000, "" },
			{ "U_B_T_Sniper_F", "", 150000, "" },
			{ "U_B_T_FullGhillie_tna_F", "", 200000, "" },
			{ "U_B_FullGhillie_lsh", "", 200000, "" },
			{ "U_B_FullGhillie_sard", "", 200000, "" },
			{ "U_B_FullGhillie_ard", "", 200000, "" },
			{ "U_O_FullGhillie_lsh", "", 200000, "" },
			{ "U_O_FullGhillie_sard", "", 200000, "" },
			{ "U_O_FullGhillie_ard", "", 200000, "" },
			{ "U_I_FullGhillie_ard", "", 200000, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_ShemagOpen_tan", "", 6500, "" },
            { "H_Shemag_olive", "", 8000, "" },
            { "H_ShemagOpen_khk", "", 8500, "" },
            { "H_HelmetO_ocamo", "", 50000, "" },
            { "H_MilCap_oucamo", "", 1200, "" },
            { "H_Bandanna_camo", "", 2500, "" },
			{ "H_Watchcap_blk", "", 2500, "" },
			{ "H_CrewHelmetHeli_I", "", 100000, "" },
			{ "H_HelmetB_light_sand", "", 100000, "" },
			{ "H_HelmetB_sand", "", 100000, "" },
			{ "H_HelmetSpecB_sand", "", 100000, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
			{ "G_Aviator", "", 50, "" },
            { "G_Shades_Black", "", 50, "" },
            { "G_Shades_Blue", "", 50, "" },
            { "G_Sport_Blackred", "", 50, "" },
            { "G_Sport_Checkered", "", 50, "" },
            { "G_Sport_Blackyellow", "", 50, "" },
            { "G_Sport_BlackWhite", "", 50, "" },
            { "G_Lowprofile", "", 50, "" },
            { "G_Squares", "", 50, "" },
            { "G_Combat", "", 50, "" },
            { "G_Balaclava_blk", "", 5000, "" },
            { "G_Balaclava_combat", "", 5000, "" },
            { "G_Balaclava_lowprofile", "", 5000, "" },
            { "G_Balaclava_oli", "", 5000, "" },
            { "G_Bandanna_aviator", "", 5000, "" },
            { "G_Bandanna_beast", "", 5000, "" },
            { "G_Bandanna_blk", "", 5000, "" },
            { "G_Bandanna_khk", "", 5000, "" },
            { "G_Bandanna_oli", "", 5000, "" },
            { "G_Bandanna_shades", "", 5000, "" },
            { "G_Bandanna_sport", "", 5000, "" },
            { "G_Bandanna_tan", "", 5000, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_BandollierB_cbr", "", 20000, "" },
            { "V_HarnessO_brn", "", 30000, "" },
			{ "V_PlateCarrier_Kerry", "", 40000, "" },
			{ "V_TacVest_khk", "", 50000, "" },
			{ "V_TacVest_brn", "", 60000, "" },
			{ "V_Chestrig_khk", "", 70000, "" },
			{ "V_PlateCarrierH_CTRG", "", 80000, "" },
			{ "V_PlateCarrier1_rgr_noflag_F", "", 90000, "" },
			{ "V_PlateCarrierGL_mtp", "", 100000, "" },
            { "V_PlateCarrier2_rgr_noflag_F", "", 110000, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_cbr", "", 5000, "" },
			{ "B_FieldPack_ocamo", "", 5000, "" },
			{ "B_FieldPack_khk", "", 5000, "" },
			{ "B_FieldPack_oli", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_Bergen_hex_F", "", 20000, "" },
			{ "B_Bergen_mcamo_F", "", 20000, "" },
			{ "B_Bergen_dgtl_F", "", 20000, "" },
			{ "B_ViperHarness_hex_F", "", 80000, "" },
			{ "B_ViperHarness_khk_F", "", 80000, "" },
			{ "B_ViperHarness_oli_F", "", 80000, "" },
            { "B_Carryall_ocamo", "", 5000, "" },
            { "B_Carryall_oucamo", "", 5000, "" },
            { "B_Carryall_mcamo", "", 5000, "" },
            { "B_Carryall_oli", "", 5000, "" },
            { "B_Carryall_khk", "", 5000, "" },
            { "B_Carryall_cbr", "", 5000, "" }
        };
    };

	class elite {
        title = "STR_Shops_C_Elite";
        conditions = "license_civ_elite";
        side = "civ";
        uniforms[] = {
			{ "NONE", "Remove Uniform", 0, "" },
			{ "U_I_C_Soldier_Bandit_1_F", "", 5000, "" },
			{ "U_I_C_Soldier_Bandit_2_F", "", 5000, "" },
			{ "U_I_C_Soldier_Bandit_3_F", "", 5000, "" },
			{ "U_I_C_Soldier_Bandit_4_F", "", 5000, "" },
			{ "U_I_C_Soldier_Bandit_5_F", "", 5000, "" },
			{ "U_IG_Guerilla1_1", "", 5000, "" },
			{ "U_I_G_Story_Protagonist_F", "", 5000, "" },
			{ "U_BG_Guerrilla_6_1", "", 5000, "" },
			{ "U_O_CombatUniform_ocamo", "", 5000, "" },
			{ "U_O_CombatUniform_oucamo", "", 5000, "" },
			{ "U_I_G_resistanceLeader_F", "", 5000, "" },
			{ "U_O_SpecopsUniform_ocamo", "", 5000, "" },
			{ "U_O_PilotCoveralls", "", 5000, "" },
			{ "U_IG_leader", "", 5000, "" },
			{ "U_O_GhillieSuit", "", 25000, "" },
			{ "U_B_CTRG_1", "", 5000, "" },
			{ "U_B_CTRG_Soldier_F", "", 5000, "" },
			{ "U_B_CTRG_Soldier_2_F", "", 5000, "" },
			{ "U_B_CTRG_Soldier_3_F", "", 5000, "" },
			{ "U_B_CTRG_Soldier_urb_1_F", "", 5000, "" },
			{ "U_B_CTRG_Soldier_urb_2_F", "", 5000, "" },
			{ "U_B_CTRG_Soldier_urb_3_F", "", 5000, "" },
			{ "U_B_T_Sniper_F", "", 25000, "" },
			{ "U_B_T_FullGhillie_tna_F", "", 50000, "" },
			{ "U_B_FullGhillie_lsh", "", 50000, "" },
			{ "U_B_FullGhillie_sard", "", 50000, "" },
			{ "U_B_FullGhillie_ard", "", 50000, "" },
			{ "U_O_FullGhillie_lsh", "", 50000, "" },
			{ "U_O_FullGhillie_sard", "", 50000, "" },
			{ "U_O_FullGhillie_ard", "", 50000, "" },
			{ "U_I_FullGhillie_ard", "", 50000, "" },
			{ "U_O_V_Soldier_Viper_F", "", 150000, "" }
        };
        headgear[] = {
			{ "NONE", "Remove Hat", 0, "" },
			{ "H_ShemagOpen_tan", "", 650, "" },
			{ "H_Shemag_olive", "", 800, "" },
			{ "H_ShemagOpen_khk", "", 850, "" },
			{ "H_HelmetO_ocamo", "", 5000, "" },
			{ "H_MilCap_oucamo", "", 1200, "" },
			{ "H_Bandanna_camo", "", 2500, "" },
			{ "H_Watchcap_blk", "", 2500, "" },
			{ "H_CrewHelmetHeli_I", "", 10000, "" },
			{ "H_HelmetB_light_sand", "", 10000, "" },
			{ "H_HelmetB_sand", "", 10000, "" },
			{ "H_HelmetSpecB_sand", "", 10000, "" },
			{ "H_MilCap_tna_F", "", 10000, "" },
			{ "H_HelmetB_Light_tna_F", "", 10000, "" },
			{ "H_HelmetB_tna_F", "", 10000, "" },
			{ "H_HelmetB_Enh_tna_F", "", 10000, "" },
			{ "H_HelmetB_TI_tna_F", "", 10000, "" }
        };
        goggles[] = {
			{ "NONE", "Remove Glasses", 0, "" },
			{ "G_Aviator", "", 50, "" },
			{ "G_Shades_Black", "", 50, "" },
			{ "G_Shades_Blue", "", 50, "" },
			{ "G_Sport_Blackred", "", 50, "" },
			{ "G_Sport_Checkered", "", 50, "" },
			{ "G_Sport_Blackyellow", "", 50, "" },
			{ "G_Sport_BlackWhite", "", 50, "" },
			{ "G_Lowprofile", "", 50, "" },
			{ "G_Squares", "", 50, "" },
			{ "G_Combat", "", 50, "" },
			{ "G_Balaclava_blk", "", 50, "" },
			{ "G_Balaclava_combat", "", 50, "" },
			{ "G_Balaclava_lowprofile", "", 50, "" },
			{ "G_Balaclava_oli", "", 50, "" },
			{ "G_Bandanna_aviator", "", 50, "" },
			{ "G_Bandanna_beast", "", 50, "" },
			{ "G_Bandanna_blk", "", 50, "" },
			{ "G_Bandanna_khk", "", 50, "" },
			{ "G_Bandanna_oli", "", 50, "" },
			{ "G_Bandanna_shades", "", 50, "" },
			{ "G_Bandanna_sport", "", 50, "" },
			{ "G_Bandanna_tan", "", 50, "" },
			{ "G_Bandanna_tan", "", 50, "" },
			{ "G_Balaclava_TI_tna_F", "", 50, "" },
            { "G_Balaclava_TI_G_tna_F", "", 50, "" },
            { "G_Balaclava_TI_blk_F", "", 50, "" },
            { "G_Balaclava_TI_G_blk_F", "", 50, "" }
		};
        vests[] = {
			{ "NONE", "Remove Vest", 0, "" },
            { "V_BandollierB_cbr", "", 10000, "" },
            { "V_HarnessO_brn", "", 15000, "" },
			{ "V_PlateCarrier_Kerry", "", 20000, "" },
			{ "V_TacVest_khk", "", 40000, "" },
			{ "V_TacVest_brn", "", 50000, "" },
			{ "V_Chestrig_khk", "", 60000, "" },
			{ "V_PlateCarrierH_CTRG", "", 70000, "" },
			{ "V_PlateCarrier1_rgr_noflag_F", "", 80000, "" },
			{ "V_PlateCarrierGL_mtp", "", 90000, "" },
            { "V_PlateCarrier2_rgr_noflag_F", "", 100000, "" },
			{ "V_PlateCarrier1_tna_F", "", 110000, "" },
			{ "V_PlateCarrier2_tna_F", "", 120000, "" },
			{ "V_PlateCarrierSpec_tna_F", "", 130000, "" },
			{ "V_PlateCarrierGL_tna_F", "", 140000, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_cbr", "", 5000, "" },
			{ "B_FieldPack_ocamo", "", 5000, "" },
			{ "B_FieldPack_khk", "", 5000, "" },
			{ "B_FieldPack_oli", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
			{ "B_FieldPack_ghex_F", "", 5000, "" },
			{ "B_Bergen_hex_F", "", 10000, "" },
			{ "B_Bergen_mcamo_F", "", 10000, "" },
			{ "B_Bergen_dgtl_F", "", 10000, "" },
			{ "B_Bergen_tna_F", "", 10000, "" },
			{ "B_Carryall_ocamo", "", 5000, "" },
			{ "B_Carryall_oucamo", "", 5000, "" },
			{ "B_Carryall_mcamo", "", 5000, "" },
			{ "B_Carryall_oli", "", 5000, "" },
			{ "B_Carryall_khk", "", 5000, "" },
			{ "B_Carryall_cbr", "", 5000, "" },
			{ "B_ViperHarness_hex_F", "", 50000, "" },
			{ "B_ViperHarness_khk_F", "", 50000, "" },
			{ "B_ViperHarness_oli_F", "", 50000, "" },
			{ "B_ViperHarness_ghex_F", "", 50000, "" },
			{ "B_ViperHarness_blk_F", "", 50000, "" }
        };
    };
};