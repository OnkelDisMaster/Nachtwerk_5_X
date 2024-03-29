class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: STRING (Condition)
    *    FORMAT:
    *        STRING (Conditions) - Must return boolean :
    *            String can contain any amount of conditions, aslong as the entire
    *            string returns a boolean. This allows you to check any levels, licenses etc,
    *            in any combination. For example:
    *                "call life_coplevel && license_civ_someLicense"
    *            This will also let you call any other function.
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
    class civ_car {			//Lizenz driver
        side = "civ"; 
        conditions = "license_civ_driver"; 
        vehicles[] = {
			{ "B_Quadbike_01_F", "" },
            { "C_Hatchback_01_F", "" },
            { "C_Offroad_01_F", "" },
            { "C_SUV_01_F", "" },
            { "C_Hatchback_01_sport_F", "" },
            { "C_Van_01_transport_F", "" },
            { "C_Offroad_02_unarmed_F", "" } //Apex DLC
        };
    };

    class kart_shop {
        side = "civ";
        conditions = "";
        vehicles[] = {
			{ "C_Kart_01_Blu_F", "" },
            { "C_Kart_01_Fuel_F", "" },
            { "C_Kart_01_Red_F", "" },
            { "C_Kart_01_Vrana_F", "" }
        };
    };
    
    class container {
        side = "civ";
        conditions = "license_civ_transport || license_civ_logistikpilot || license_civ_logistikpilot_plus";
        vehicles[] = {
            { "Land_CargoBox_V1_F", "" },
            { "Land_Cargo10_blue_F", "" },
            { "Land_Cargo20_blue_F", "license_civ_logistikpilot || license_civ_logistikpilot_plus" },
            { "Land_Cargo40_blue_F", "license_civ_logistikpilot || license_civ_logistikpilot_plus" }   
        };
    };
    
    class civ_truck {		//Lizenz trucking
        side = "civ";
        conditions = "license_civ_trucking"; 
        vehicles[] = {
            { "C_Van_01_fuel_F", "" },
            { "C_Van_01_box_F", "" },
			{ "C_Van_02_vehicle_F", "" },			//Orange Van
            { "I_Truck_02_transport_F", "" },
            { "I_Truck_02_covered_F", "" },
            { "B_Truck_01_transport_F", "" },
            { "B_Truck_01_covered_F", "" },
            { "B_Truck_01_ammo_F", "" },
            { "B_Truck_01_fuel_F", "" },
            { "B_Truck_01_box_F", "" },
            { "O_Truck_03_transport_F", "" },
            { "O_Truck_03_covered_F", "" },
			{ "O_Truck_03_fuel_F", "" },
			{ "O_Truck_03_device_F", "" },
			{ "O_Truck_03_ammo_F", "" }
        };
    };

    class civ_air {			//Lizenz   pilot
        side = "civ";
        conditions = "license_civ_pilot"; 
        vehicles[] = {
			{ "B_Heli_Light_01_F", "" },
            { "O_Heli_Light_02_unarmed_F", "" },
            { "I_Heli_Transport_02_F", "" },
            { "C_Plane_Civil_01_F", "" }//Apex DLC
        };
    };

     class civ_ship {		//Lizenz  boat				
        side = "civ";
        conditions = "license_civ_boat"; 
        vehicles[] = {
			{ "C_Rubberboat", "" },
            { "C_Boat_Civil_01_F", "" },
            { "B_SDV_01_F", "" },
            { "C_Boat_Transport_02_F", "" }, //Apex DLC
            { "C_Scooter_Transport_01_F", "" } //Apex DLC
        };
    };

    class reb_car {			//Lizenz rebel
        side = "civ";
        conditions = "license_civ_rebel"; 
        vehicles[] = {
			{ "B_Quadbike_01_F", "" },
			{ "C_Van_02_transport_F", "" },
            { "B_G_Offroad_01_armed_F", "" },
            { "B_T_LSV_01_unarmed_olive_F", "" },
			{ "O_T_LSV_02_unarmed_arid_F", "" },
			{ "B_MRAP_01_F", "" },
			{ "O_MRAP_02_F", "" },
			{ "C_Plane_Civil_01_F", "" },
			{ "O_Plane_CAS_02_F", "" },
			{ "I_Plane_Fighter_04_F", "" },
			{ "B_Heli_Light_01_F", "" },
			{ "O_Heli_Light_02_unarmed_F", "" },
			{ "I_Heli_Transport_02_F", "" },
			{ "O_Heli_Transport_04_F", "" },
			{ "O_Heli_Transport_04_box_F", "" },
			{ "B_Heli_Transport_03_unarmed_F", "" }
        };
    };

	class elite {			//Lizenz elite
        side = "civ";
        conditions = "license_civ_elite"; 
        vehicles[] = {
            { "O_T_LSV_02_unarmed_ghex_F", "" },
            { "O_T_MRAP_02_ghex_F", "" },
            { "I_LT_01_scout_F", "" },
			{ "O_T_Truck_03_transport_ghex_F", "" },
			{ "O_T_Truck_03_covered_ghex_F", "" },
			{ "O_T_Truck_03_fuel_ghex_F", "" },
			{ "O_T_Truck_03_device_ghex_F", "" },
			{ "O_T_Truck_03_ammo_ghex_F", "" },
			{ "C_Heli_light_01_ion_F", "" },
			{ "C_Heli_light_01_wasp_F", "" },
			{ "O_Plane_Fighter_02_F", "" },
			{ "B_Plane_Fighter_01_F", "" },
			{ "B_CTRG_Heli_Transport_01_tropic_F", "" },
			{ "B_T_VTOL_01_vehicle_olive_F", "" }          
        };
    };
	
    class schwarzmarkt { 
        side = "civ";
        conditions = "license_civ_elite"; 
        vehicles[] = {
            { "I_MRAP_03_F", "" },
            { "B_CTRG_Heli_Transport_01_sand_F", "" }         
        };
    };
    
    class med_shop {
        side = "med";
        conditions = "playerSide isEqualTo independent"; 
        vehicles[] = {
			{ "C_Van_01_box_F", "call life_mediclevel >= 1" },
			{ "C_Van_02_medevac_F", "call life_mediclevel >= 2" },
            { "C_Offroad_01_F", "call life_mediclevel >= 2" },
			{ "C_Van_01_fuel_F", "call life_mediclevel >= 2" },
            { "C_SUV_01_F", "call life_mediclevel >= 3" },
			{ "I_Truck_02_medical_F", "call life_mediclevel >= 3" },
			{ "B_Truck_01_medical_F", "call life_mediclevel >= 3" },
			{ "B_Truck_01_transport_F", "call life_mediclevel >= 3" },
			{ "O_Truck_03_transport_F", "call life_mediclevel >= 4" },
            { "O_Truck_03_covered_F", "call life_mediclevel >= 4" },
			{ "O_Truck_03_repair_F", "call life_mediclevel >= 3" },
			{ "O_Truck_03_medical_F", "call life_mediclevel >= 4" },
			{ "B_MRAP_01_F", "call life_mediclevel >= 6" }
        };
    };

    class med_heli {		//Lizenz mAir
        side = "med";
        conditions = ""; 
        vehicles[] = {
			{ "B_Heli_Light_01_F", "call life_mediclevel >= 2" },
            { "O_Heli_Light_02_unarmed_F", "call life_mediclevel >= 3" },
			{ "I_Heli_Transport_02_F", "call life_mediclevel >= 4" },
			{ "I_Heli_light_03_unarmed_F", "call life_mediclevel >= 5" },
            { "O_Heli_Transport_04_F", "call life_mediclevel >= 5" }
        };
    };

    class cop_car {			//Lizenz     cg
        side = "cop";
        conditions = ""; 
        vehicles[] = {			
			{ "B_Quadbike_01_F", "call life_coplevel >= 1" },
            { "C_SUV_01_F", "call life_coplevel >= 2" },
            { "C_Offroad_01_F", "call life_coplevel >= 2" },
			{ "C_Van_02_vehicle_F", "call life_coplevel >= 2" },
			{ "C_Van_02_transport_F", "call life_coplevel >= 2" },
			{ "C_IDAP_Van_02_medevac_F", "call life_coplevel >= 2" },
			{ "B_Truck_01_transport_F", "call life_coplevel >= 3" },
            { "B_Truck_01_box_F", "call life_coplevel >= 3" },
            { "C_Hatchback_01_F", "call life_coplevel >= 3" },
            { "C_Hatchback_01_sport_F", "call life_coplevel >= 4" },
			{ "B_T_LSV_01_unarmed_black_F", "call life_coplevel >= 4" },
            { "O_T_LSV_02_unarmed_black_F", "call life_coplevel >= 4" },
            { "O_G_Offroad_01_armed_F", "call life_coplevel >= 5" },
            { "B_MRAP_01_F", "call life_coplevel >= 6" },
            { "I_MRAP_03_F", "call life_coplevel >= 9" },
            { "I_LT_01_scout_F", "call life_coplevel >= 9" },
            { "O_APC_Wheeled_02_rcws_F", "call life_coplevel >= 9" } //call life_coplevel >= 3
        };
    };

    class cop_air {		//Lizenz     cAir
        side = "cop";
        conditions = ""; 
        vehicles[] = {
			{ "B_Heli_Light_01_F", "call life_coplevel >= 2" },
            { "I_Heli_light_03_unarmed_F", "call life_coplevel >= 3" },
			{ "O_Heli_Light_02_unarmed_F", "call life_coplevel >= 4" },
            { "B_UAV_01_F", "call life_coplevel >= 4" },
			{ "I_Heli_Transport_02_F", "call life_coplevel >= 4" },
            { "B_Heli_Transport_01_F", "call life_coplevel >= 5" },
			{ "B_Heli_Transport_03_unarmed_F", "call life_coplevel >= 6" },
            { "B_Plane_Fighter_01_F", "call life_coplevel >= 7" },
			{ "B_T_VTOL_01_vehicle_blue_F", "call life_coplevel >= 7" },
            { "B_T_UAV_03_F", "call life_coplevel >= 11" }
        };
    };

    class cop_ship {
        side = "cop";
        conditions = ""; 
        vehicles[] = {			
			{ "B_Boat_Transport_01_F", "call life_coplevel >= 1" },
            { "C_Boat_Civil_01_police_F", "call life_coplevel >= 1" },
            { "C_Boat_Transport_02_F", "call life_coplevel >= 1" }, //Apex DLC
            { "B_Boat_Armed_01_minigun_F", "call life_coplevel >= 4" },
            { "B_SDV_01_F", "call life_coplevel >= 4" }
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    "price" is the price before any multipliers set in Master_Config are applied.
    *
    *    Default Multiplier Values & Calculations:
    *       Civilian [Purchase, Sell]: [1.0, 0.5]
    *       Cop [Purchase, Sell]: [0.5, 0.5]
    *       Medic [Purchase, Sell]: [0.75, 0.5]
    *       ChopShop: Payout = price * 0.25
    *       GarageSell: Payout = price * [0.5, 0.5, 0.5, -1]
    *       Cop Impound: Payout = price * 0.1
    *       Pull Vehicle from Garage: Cost = price * [1, 0.5, 0.75, -1] * [0.5, 0.5, 0.5, -1]
    *           -- Pull Vehicle & GarageSell Array Explanation = [civ,cop,medic,east]
    *
    *       1: STRING (Condition)
    *    Textures config follows { Texture Name, side, {texture(s)path}, Condition}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    *
    */

    class Default {
        vItemSpace = -1;
        conditions = "";
        price = -1;
        textures[] = {};
    };
	
	// Apex DLC
    class C_Offroad_02_unarmed_F {
        vItemSpace = 80;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 40000;
        textures[] = {
            { "Black", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa"
            }, "" },
            { "Green", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa"
            }, "" },
            { "Orange", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa"
            }, "" },
            { "White", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa"
            }, "" }
        };
    }; 
	
    class I_Truck_02_medical_F {
        vItemSpace = 250;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 30000;
        textures[] = {
			{ "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            }, "" },
			{ "Red Bull", "civ", {
                "skins\car\civ_zamak_redbull_0.jpg",
                "skins\car\civ_zamak_redbull_1.jpg"
            }, "" },
            { "Polizei", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" },
			{ "Feuerwehr", "med", {
                "#(rgb,8,8,1)color(1,0,0,1)",
				"#(rgb,8,8,1)color(1,0,0,1)"
            }, "" }
		};
    };

    class O_Truck_03_medical_F {
        vItemSpace = 350;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 50000;
        textures[] = {
			{ "Feuerwehr", "med", {
                "skins\car\fw_tempest_1.jpg",
				"skins\car\fw_tempest_2.jpg",
				"#(rgb,8,8,1)color(1,0,0,0.3)",
				"#(rgb,8,8,1)color(1,0,0,0.3)"
            }, "" }
		};
    };
	
	class O_Truck_03_repair_F {
        vItemSpace = -1;
        conditions = "";
        price = 30000;
        textures[] = {
			{ "Feuerwehr", "med", {
                "skins\car\fw_tempest_1.jpg",
				"skins\car\fw_tempest_2.jpg",
				"skins\car\fw_tempest_3.jpg"
            }, "" }
		};
    };

    class B_Truck_01_medical_F {
        vItemSpace = 450;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 95000;
        textures[] = {
			{ "Devil", "civ", {
                "skins\car\civ_hemtt_devil_0.paa",
				"#(rgb,8,8,1)color(0,0,0,1)"
            }, "" },
			{ "Hello Kitty", "civ", {
                "skins\car\civ_hemtt_kitty_0.paa",
				"#(argb,8,8,3)color(0.75,0.25,0.7,1)"
            }, "" },
			{ "Digi Green", "civ", {
                "skins\car\digi_hemtt_1.jpg",
				"#(argb,8,8,3)color(0,0,0,1)"
            }, "" },
			{ "Feuerwehr", "med", {
                "skins\car\FW_hemtt.paa",
				"#(rgb,8,8,1)color(1,0,0,1)"
            }, "" },
			{ "Polizei", "cop", {
                "skins\car\PolizeiHEMMT2.paa",
				"skins\car\PolizeiHEMMT1.paa"
            }, "" }
		};
    };

    class C_Rubberboat {
        vItemSpace = 45;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";//license_civ_boat
        price = 25000;
        textures[] = { };
    };

	class I_MRAP_03_F {
        vItemSpace = 100;
		conditions = "license_civ_elite || {!(playerSide isEqualTo civilian)}";//license_civ_driver
        price = 15500000;
        textures[] = { 
			{ "Camo", "civ", {
                "skins\car\strider.jpg"
            }, "" },
			{ "SEK", "cop", {
                "skins\car\strider_sek.paa"
            }, "" },
			{ "Digi Blau", "cop", {
                "skins\car\strider_digiblau.paa"
            }, "" },
			{ "Nachtwerk", "civ", {
                "skins\car\nachtwerk_strider.paa"
            }, "" },			
			{ "Feuerwehr", "med", {
                "skins\car\FW_strider.paa"
            }, "" }
		};
    };
	
	class O_Plane_CAS_02_F {
        vItemSpace = 150;
        conditions = "license_civ_rebel || {!(playerSide isEqualTo civilian)}";
        price = 40000000;
        textures[] = {};
    };
	
	class I_Plane_Fighter_04_F {
        vItemSpace = 250;
        conditions = "license_civ_rebel || {!(playerSide isEqualTo civilian)}";
        price = 40000000;
        textures[] = {};
    };
	
	class O_Plane_Fighter_02_F {
        vItemSpace = 350;
        conditions = "license_civ_rebel || {!(playerSide isEqualTo civilian)}";
        price = 40000000;
        textures[] = {};
    };
	
	class B_Plane_Fighter_01_F {
        vItemSpace = 350;
        conditions = "license_civ_rebel || {!(playerSide isEqualTo civilian)}";
        price = 40000000;
        textures[] = {};
    };
	
    class B_Heli_Transport_01_F {
        vItemSpace = 300;
        conditions = "!(playerSide isEqualTo civilian)";
        price = 9500000;
        textures[] = {
			{ "SEK", "cop", {
                "skins\air\swat_ghosthawk.paa",
				"skins\air\swat_ghosthawk_1.paa"
            }, "" }
		};
    };
	
	class I_Heli_Transport_02_F {
        vItemSpace = 500;
        conditions = "license_civ_pilot || {!(playerSide isEqualTo civilian)}";//license_cop_cAir
        price = 6000000;
        textures[] = {
			{ "Ion", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_ion_co.paa",
				"\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_ion_co.paa",
				"\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_ion_co.paa"
            }, "" },
			{ "Dahoman", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_dahoman_co.paa",
				"\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_dahoman_co.paa",
				"\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_dahoman_co.paa"
            }, "" },
			{ "Feuerwehr", "med", {
                "skins\air\FW_mohawk.paa",
				"skins\air\FW_mohawk2.paa",
				"#(argb,8,8,3)color(0.62,0.04,0.04,0.8)"
            }, "" },
			{ "SEK", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)",
				"#(argb,8,8,3)color(1,1,1,0.8)",
				"#(ai,64,64,1)Fresnel(1.3,7)"
            }, "" }
		};
    };
	
	class O_Heli_Transport_04_F {
        vItemSpace = 500;
        conditions = "license_civ_rebel || {!(playerSide isEqualTo civilian)}";//license_cop_cAir
        price = 14500000;
        textures[] = {
			{ "Camo", "civ", {
                "\a3\air_f_heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_CO.paa",
				"\a3\air_f_heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_CO.paa"
            }, "" },
			{ "Schwarz", "civ", {
                "\a3\air_f_heli\Heli_Transport_04\Data\heli_transport_04_base_01_Black_co.paa",
				"\a3\air_f_heli\Heli_Transport_04\Data\heli_transport_04_base_02_Black_co.paa"
            }, "" },
			{ "Feuerwehr", "med", {
                "skins\air\Taru_NW_FW_1.paa",
				"skins\air\Taru_NW_FW_2.paa"
            }, "" }
		};
    };

	class O_Heli_Transport_04_box_F {
        vItemSpace = 800;
        conditions = "license_civ_rebel || {!(playerSide isEqualTo civilian)}";//license_cop_cAir
        price = 19500000;
        textures[] = {
			{ "Camo", "civ", {
                "\a3\air_f_heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_CO.paa",
				"\a3\air_f_heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_CO.paa"
            }, "" },
			{ "Schwarz", "civ", {
                "\a3\air_f_heli\Heli_Transport_04\Data\heli_transport_04_base_01_Black_co.paa",
				"\a3\air_f_heli\Heli_Transport_04\Data\heli_transport_04_base_02_Black_co.paa"
            }, "" },
			{ "Feuerwehr", "med", {
                "skins\air\Taru_NW_FW_1.paa",
				"skins\air\Taru_NW_FW_2.paa"
            }, "" }
		};
    };

	class B_Heli_Transport_03_unarmed_F {
        vItemSpace = 600;
        conditions = "license_civ_rebel || {!(playerSide isEqualTo civilian)}";//license_cop_cAir
        price = 14500000;
        textures[] = {
			{ "Carbon Hexagon", "civ", {
                "skins\air\civ_huron.paa",
				"skins\air\civ_huron2.paa"
            }, "" },
			{ "Schwarz", "civ", {
                "\a3\air_f_heli\Heli_Transport_03\Data\Heli_Transport_03_ext01_black_CO.paa",
				"\a3\air_f_heli\Heli_Transport_03\Data\Heli_Transport_03_ext02_black_CO.paa"            
			}, "" },
			{ "SEK", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)",
				"#(ai,64,64,1)Fresnel(1.3,7)"
            }, "" }				
		};
    };

    class B_Boat_Armed_01_minigun_F {
        vItemSpace = -1;
        conditions = "";//license_cop_cg
        price = 75000;
        textures[] = { };
    };

    class B_Boat_Transport_01_F {
        vItemSpace = 100;
        conditions = "";//license_cop_cg
        price = 3000;
        textures[] = { };
    };

    class O_Truck_03_transport_F {
        vItemSpace = 400;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";//license_civ_trucking
        price = 2450000;
        textures[] = { 
		   { "Hexa", "civ", {
                "\a3\soft_f_epc\Truck_03\Data\Truck_03_ext01_CO.paa",			//Arma Pfad
				"\a3\soft_f_epc\Truck_03\Data\Truck_03_ext02_CO.paa",
				"\a3\soft_f_epc\Truck_03\Data\Truck_03_cargo_CO.paa"
            }, "" },
			{ "Schnee Hexa", "civ", {
                "skins\car\Tempest_Schneetarn_1.jpg",
				"skins\car\Tempest_Schneetarn_2.jpg",
				"skins\car\Tempest_Schneetarn_cargo.jpg"
            }, "" },
			{ "Woodland", "civ", {
                "skins\car\Tempest_Camo_1.paa",
				"skins\car\Tempest_Camo_2.paa",
				"skins\car\Tempest_Camo_cargo.paa"
            }, "" },
			{ "Digi BLau", "civ", {
                "skins\car\Tempest_DCamo_1.paa",
				"skins\car\Tempest_DCamo_2.paa",
				"skins\car\Tempest_DCamo_cargo.paa"
            }, "" },
			{ "Feuerwehr", "med", {
                "skins\car\fw_tempest_1.jpg",
				"skins\car\fw_tempest_2.jpg",
				"#(rgb,8,8,1)color(1,0,0,0.3)"
            }, "" }
		};
    };
	
	class O_Truck_03_covered_F {
        vItemSpace = 450;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";//license_civ_trucking
        price = 2950000;
        textures[] = {
	       { "Hexa", "civ", {
                "\a3\soft_f_epc\Truck_03\Data\Truck_03_ext01_CO.paa",			//Arma Pfad
				"\a3\soft_f_epc\Truck_03\Data\Truck_03_ext02_CO.paa",
				"\a3\soft_f_epc\Truck_03\Data\Truck_03_cargo_CO.paa",
				"\a3\soft_f_epc\Truck_03\Data\Truck_03_cover_CO.paa"
            }, "" },
			{ "Schnee Hexa", "civ", {
                "skins\car\Tempest_Schneetarn_1.jpg",
				"skins\car\Tempest_Schneetarn_2.jpg",
				"skins\car\Tempest_Schneetarn_cargo.jpg",
				"skins\car\Tempest_Schneetarn_cover.jpg"
            }, "" },
			{ "Woodland", "civ", {
                "skins\car\Tempest_Camo_1.paa",
				"skins\car\Tempest_Camo_2.paa",
				"skins\car\Tempest_Camo_cargo.paa",
				"skins\car\Tempest_Camo_covered.paa"
            }, "" },
			{ "Digi BLau", "civ", {
                "skins\car\Tempest_DCamo_1.paa",
				"skins\car\Tempest_DCamo_2.paa",
				"skins\car\Tempest_DCamo_cargo.paa",
				"skins\car\Tempest_DCamo_covered.paa"
            }, "" },
			{ "Feuerwehr", "med", {
                "skins\car\fw_tempest_1.jpg",
				"skins\car\fw_tempest_2.jpg",
				"#(rgb,8,8,1)color(1,0,0,0.3)",
				"#(rgb,8,8,1)color(1,0,0,0.3)"
            }, "" }
		};
    };
	
	class O_Truck_03_fuel_F {
        vItemSpace = 500;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";//license_civ_trucking
        price = 500000;
        textures[] = { 
		   { "Hexa", "civ", {
                "\a3\soft_f_epc\Truck_03\Data\Truck_03_ext01_CO.paa",			//Arma Pfad
				"\a3\soft_f_epc\Truck_03\Data\Truck_03_ext02_CO.paa",
				"\a3\soft_f_epc\Truck_03\Data\Truck_03_fuel_CO.paa"
            }, "" },
			{ "Schnee Hexa", "civ", {
                "skins\car\Tempest_Schneetarn_1.jpg",
				"skins\car\Tempest_Schneetarn_2.jpg",
				"skins\car\Tempest_Schneetarn_fuel.jpg"
            }, "" },
			{ "Woodland", "civ", {
                "skins\car\Tempest_Camo_1.paa",
				"skins\car\Tempest_Camo_2.paa",
				"skins\car\Tempest_Camo_fuel.paa"
            }, "" },
			{ "Digi BLau", "civ", {
                "skins\car\Tempest_DCamo_1.paa",
				"skins\car\Tempest_DCamo_2.paa",
				"skins\car\Tempest_DCamo_fuel.paa"
            }, "" }
		};
    };
	
        class O_Truck_03_ammo_F {
        vItemSpace = 900;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";//license_civ_trucking
        price = 12500000;
        textures[] = { 
		  { "Hexa", "civ", {
                "\a3\soft_f_epc\Truck_03\Data\Truck_03_ext01_CO.paa",			//Arma Pfad
				"\a3\soft_f_epc\Truck_03\Data\Truck_03_ext02_CO.paa",
				"\a3\soft_f_epc\Truck_03\Data\Truck_03_cargo_CO.paa"
            }, "" },
			{ "Schnee Hexa", "civ", {
                "skins\car\Tempest_Schneetarn_1.jpg",
				"skins\car\Tempest_Schneetarn_2.jpg",
				"skins\car\Tempest_Schneetarn_cargo.jpg"
            }, "" },
			{ "Woodland", "civ", {
                "skins\car\Tempest_Camo_1.paa",
				"skins\car\Tempest_Camo_2.paa",
				"skins\car\Tempest_Camo_cargo.paa"
            }, "" },
			{ "Digi BLau", "civ", {
                "skins\car\Tempest_DCamo_1.paa",
				"skins\car\Tempest_DCamo_2.paa",
				"skins\car\Tempest_DCamo_cargo.paa"
            }, "" }
		};
    };

    class O_Truck_03_device_F {
        vItemSpace = 600;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";//license_civ_trucking
        price = 10950000;
        textures[] = { 
  	       { "Hexa", "civ", {
                "\a3\soft_f_epc\Truck_03\Data\Truck_03_ext01_CO.paa",			//Arma Pfad
				"\a3\soft_f_epc\Truck_03\Data\Truck_03_ext02_CO.paa"
            }, "" },
			{ "Schnee Hexa", "civ", {
                "skins\car\Tempest_Schneetarn_1.jpg",
				"skins\car\Tempest_Schneetarn_2.jpg"
            }, "" },
			{ "Woodland", "civ", {
                "skins\car\Tempest_Camo_1.paa",
				"skins\car\Tempest_Camo_2.paa"
            }, "" },
			{ "Digi BLau", "civ", {
                "skins\car\Tempest_DCamo_1.paa",
				"skins\car\Tempest_DCamo_2.paa"
            }, "" }
		};
    };

    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        conditions = "";
        price = 1000;
        textures[] = {};
    };
    
    class Land_Cargo10_blue_F {
        vItemSpace = 5000;
        conditions = "";
        price = 2000;
        textures[] = {};
    };
    
    class Land_Cargo20_blue_F {
        vItemSpace = 5000;
        conditions = "";
        price = 4000;
        textures[] = {};
    };
    
    class Land_Cargo40_blue_F {
        vItemSpace = 5000;
        conditions = "";
        price = 8000;
        textures[] = {};
    };
    
    class Box_IND_Grenades_F {
        vItemSpace = 350;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 700;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class B_G_Offroad_01_F {
        vItemSpace = 100;
        conditions = "license_civ_rebel || {!(playerSide isEqualTo civilian)}";
        price = 40000;
        textures[] = { };
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 75;
        conditions = "license_civ_rebel || {!(playerSide isEqualTo civilian)}";
        price = 1600000;
        textures[] = { };
    };

    class O_G_Offroad_01_armed_F {
        vItemSpace = 75;
        conditions = "";//license_civ_rebel
        price = 300000;
        textures[] = {
            { "Polizei", "cop", {
                "skins\car\police_offroad.paa"
            }, ""  },
			{ "SEK", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            }, ""  }
        };
    };
    
     
	class B_Truck_01_covered_F {
        vItemSpace = 600;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";//license_civ_trucking
        price = 4950000;
        textures[] = { 
			{ "Devil", "civ", {
                "skins\car\civ_hemtt_devil_0.paa",
				"#(rgb,8,8,1)color(0,0,0,1)"
            }, "" },
			{ "Hello Kitty", "civ", {
                "skins\car\civ_hemtt_kitty_0.paa",
				"#(argb,8,8,3)color(0.75,0.25,0.7,1)"
            }, "" },
			{ "Digi Green", "civ", {
                "skins\car\digi_hemtt_1.jpg",
				"#(argb,8,8,3)color(0,0,0,1)"
            }, "" },
			{ "Feuerwehr", "med", {
                "skins\car\FW_hemtt.paa",
				"#(rgb,8,8,1)color(1,0,0,1)"
            }, "" },
			{ "Polizei", "cop", {
                "skins\car\PolizeiHEMMT2.paa",
				"skins\car\PolizeiHEMMT1.paa"
            }, "" }
		};
    };
	
	class B_Truck_01_ammo_F {
        vItemSpace = 500;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";//license_civ_trucking
        price = 2700000;
        textures[] = { 
			{ "Devil", "civ", {
                "skins\car\civ_hemtt_devil_0.paa",
				"#(rgb,8,8,1)color(0,0,0,1)"
            }, "" },
			{ "Hello Kitty", "civ", {
                "skins\car\civ_hemtt_kitty_0.paa",
				"#(argb,8,8,3)color(0.75,0.25,0.7,1)"
            }, "" },
			{ "Digi Green", "civ", {
                "skins\car\digi_hemtt_1.jpg",
				"#(argb,8,8,3)color(0,0,0,1)"
            }, "" },
			{ "Feuerwehr", "med", {
                "skins\car\FW_hemtt.paa",
				"#(rgb,8,8,1)color(1,0,0,1)"
            }, "" },
			{ "Polizei", "cop", {
                "skins\car\PolizeiHEMMT2.paa",
				"skins\car\PolizeiHEMMT1.paa"
            }, "" }
		};
    };
	
    class C_Boat_Civil_01_F {
        vItemSpace = 120;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";//license_civ_boat
        price = 100000;
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 120;
        conditions = "";//license_cop_cg
        price = 100000;
        textures[] = { };
    };

    class B_Truck_01_box_F {
        vItemSpace = 1200;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";//license_civ_trucking
        price = 12500000;
        textures[] = { 
			{ "Devil", "civ", {
                "skins\car\civ_hemtt_devil_0.paa",
				"#(rgb,8,8,1)color(0,0,0,1)"
            }, "" },
			{ "Hello Kitty", "civ", {
                "skins\car\civ_hemtt_kitty_0.paa",
				"#(argb,8,8,3)color(0.75,0.25,0.7,1)"
            }, "" },
			{ "Digi Green", "civ", {
                "skins\car\digi_hemtt_1.jpg",
				"#(argb,8,8,3)color(0,0,0,1)"
            }, "" },
			{ "Feuerwehr", "med", {
                "skins\car\FW_hemtt.paa",
				"#(rgb,8,8,1)color(1,0,0,1)"
            }, "" },
			{ "Polizei", "cop", {
                "skins\car\PolizeiHEMMT2.paa",
				"skins\car\PolizeiHEMMT1.paa"
            }, "" }
		};
    };

    class B_Truck_01_transport_F {
        vItemSpace = 450;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";//license_civ_trucking
        price = 2450000;
        textures[] = { 
			{ "Devil", "civ", {
                "skins\car\civ_hemtt_devil_0.paa",
				"#(rgb,8,8,1)color(0,0,0,1)"
            }, "" },
			{ "Hello Kitty", "civ", {
                "skins\car\civ_hemtt_kitty_0.paa",
				"#(argb,8,8,3)color(0.75,0.25,0.7,1)"
            }, "" },
			{ "Digi Green", "civ", {
                "skins\car\digi_hemtt_1.jpg",
				"#(argb,8,8,3)color(0,0,0,1)"
            }, "" },
			{ "Feuerwehr", "med", {
                "skins\car\FW_hemtt.paa",
				"#(rgb,8,8,1)color(1,0,0,1)"
            }, "" },
			{ "Polizei", "cop", {
                "skins\car\PolizeiHEMMT2.paa",
				"skins\car\PolizeiHEMMT1.paa"
            }, "" }
		};
    };

    class O_MRAP_02_F {
        vItemSpace = 100;
        conditions = "license_civ_rebel || {!(playerSide isEqualTo civilian)}";//license_civ_driver
        price = 4500000;
        textures[] = { 
			{ "Flecktarn", "civ", {
                "skins\car\ifrit_r1.jpg",
				"skins\car\ifrit_r2.jpg"
            }, "" },
			{ "Rebell", "civ", {
                "\A3\Soft_F\MRAP_02\data\mrap_02_ext_01_co.paa",
				"\A3\Soft_F\MRAP_02\data\mrap_02_ext_02_co.paa"
            }, "" },
			{ "Zuhälter", "civ", {
                "skins\car\civ_ifrit_1.paa",
				"skins\car\civ_ifrit_2.paa"
            }, "" },
			{ "Kuhflecken", "civ", {
                "skins\car\IfritT1.paa",
				"skins\car\IfritT2.paa"
            }, "" }
		};
    };
	
	class O_MRAP_02_hmg_F {
        vItemSpace = 100;
        conditions = "license_civ_rebel || {!(playerSide isEqualTo civilian)}";//license_civ_driver
        price = 45000000;
        textures[] = { 
			{ "Flecktarn", "civ", {
                "skins\car\ifrit_r1.jpg",
				"skins\car\ifrit_r2.jpg",
				"#(ai,64,64,1)Fresnel(1.3,7)"
            }, "" },
			{ "Rebell", "civ", {
                "\A3\Soft_F\MRAP_02\data\mrap_02_ext_01_co.paa",
				"\A3\Soft_F\MRAP_02\data\mrap_02_ext_02_co.paa",
				"#(ai,64,64,1)Fresnel(1.3,7)"
            }, "" },
			{ "Zuhälter", "civ", {
                "skins\car\civ_ifrit_1.paa",
				"skins\car\civ_ifrit_2.paa",
				"#(ai,64,64,1)Fresnel(1.3,7)"
            }, "" }
		};
    };

    class C_Offroad_01_F {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";//license_civ_driver
        price = 40000;
        textures[] = {
            { "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            }, "" },
            { "Yellow", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            }, "" },
            { "White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            }, "" },
            { "Dark Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            }, "" },
            { "Blue / White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            }, "" },
            { "Taxi", "civ", {
                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            }, ""  },
			{ "Polizei", "cop", {
                "skins\car\police_offroad.paa"
            }, ""  },
			{ "SEK", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            }, ""  },			
			{ "Feuerwehr", "med", {
                "skins\car\FW_offroad.paa"
            } , "" },
			{ "Dodge", "civ", {
                "skins\car\civ_offroad_dodge.jpg"
            } , "" },
			{ "Monster", "civ", {
                "skins\car\monsterenergy_off.jpg"
            } , "" }			
        };
    };

    class C_Kart_01_Blu_F {
        vItemSpace = -1;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";//license_civ_driver
        price = 50000;
        textures[] = {};
    };
/*
To edit another information in this classes you can use this exemple.
class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{
    vItemSpace = 40;
    price = ;
};
will modify the virtual space and the price of the vehicle, but other information such as license and textures will pick up the vehicle declare at : Vehicle {};
*/
    class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{}; // Get all information of C_Kart_01_Blu_F
    class C_Kart_01_Red_F  : C_Kart_01_Blu_F{};
    class C_Kart_01_Vrana_F : C_Kart_01_Blu_F{};

    class C_Hatchback_01_sport_F {
        vItemSpace = 45;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";//license_civ_driver
        price = 400000;
        textures[] = {
			{ "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            }, "" },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            }, "" },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            }, "" },
            { "Black / White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            }, "" },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            }, "" },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            }, "" },
			{ "Monster", "civ", {
                "skins\car\hatchback_sport_monster.jpg"
            }, "" },
            { "Polizei", "cop", {
                "skins\car\police_hatchback.paa"
            }, "" },
            { "SEK", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            }, "" }
        };
    };

    class B_Quadbike_01_F {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";//license_civ_driver
        price = 7500;
        textures[] = {			
			{ "Polizei", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            }, "" },
            { "Digi Desert", "reb", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
            }, "" },
            { "Black", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
            }, "" },
            { "White", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
            }, "" },
            { "Digi Green", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
            }, "" },
            { "Hunter Camo", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            }, "" },
            { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            }, "" }
        };
    };

    class I_Truck_02_covered_F {
        vItemSpace = 350;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";//license_civ_trucking
        price = 370000;
        textures[] = {
			{ "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            }, "" },
			{ "Red Bull", "civ", {
                "skins\car\civ_zamak_redbull_0.jpg",
                "skins\car\civ_zamak_redbull_1.jpg"
            }, "" },
            { "Polizei", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" },
			{ "Feuerwehr", "med", {
                "#(rgb,64,64,1)color(255, 0, 0, 0.8)",
                "#(rgb,64,64,1)color(255, 0, 0, 0.8)"
            }, "" }
        };
    };

    class I_Truck_02_transport_F {
        vItemSpace = 250;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";//license_civ_trucking
        price = 250000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            }, "" },
			{ "Red Bull", "civ", {
                "skins\car\civ_zamak_redbull_0.jpg",
                "skins\car\civ_zamak_redbull_1.jpg"
            }, "" },
            { "Polizei", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" },
			{ "Feuerwehr", "med", {
                "#(rgb,64,64,1)color(255, 0, 0, 0.8)",
                "#(rgb,64,64,1)color(255, 0, 0, 0.8)"
            }, "" }
        };
    };

    class C_Hatchback_01_F {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";//license_civ_driver
        price = 25000;
        textures[] = {
            { "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            }, "" },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            }, "" },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            }, "" },
            { "Black / White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            }, "" },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            }, "" },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            }, "" },
			{ "Monster", "civ", {
                "skins\car\hatchback_sport_monster.jpg"
            }, "" },
            { "Polizei", "cop", {
                "skins\car\police_hatchback.paa"
            }, "" },
            { "SEK", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            }, "" }
        };
    };

    class C_SUV_01_F {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";//license_civ_driver
        price = 35000;
        textures[] = {
            { "Dunkelrot", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            }, ""  },
            { "Silber", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            }, ""  },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            }, ""  },
			{ "Zombie", "civ", {
                "skins\car\ZOMBIE.paa"
			} , "" },
			{ "Polygon", "civ", {
                "skins\car\poly_suv.paa"
			} , "" },
			{ "Batman", "civ", {
                "skins\car\batman_suv.paa"
			} , "" },
			{ "Ferrari", "civ", {
                "skins\car\civ_suv_ferrari.jpg"
			} , "" },
			{ "Hello Kitty", "civ", {
                "skins\car\kitty.jpg"
			} , "" },
			{ "Hyperbeast", "civ", {
                "skins\car\HyperbeastSUV.jpg"
			} , "" },
			{ "Taxi", "civ", {
                "skins\car\taxi_suv.jpg"
			} , "" },
			{ "Killer", "civ", {
                "skins\car\Killer.paa"
			} , "" },
			{ "Feuerwehr", "med", {
                "skins\car\FW_SUV.paa"
			} , "" },
			{ "Polizei", "cop", {
                "skins\car\police_suv.paa"
			}, ""  },
            { "Undercover/Hyperbeast", "cop", {
                "skins\car\HyperbeastSUV.jpg"
			}, ""  },
			{ "Polizei / Schwarz", "cop", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_02_co.paa"
			}, ""  },
			{ "SEK", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
			} , "" },
			{ "Pink", "cop", {
                "#(argb,8,8,3)color(0.75,0.25,0.7,1)"
			} , "" }
			
        };
    };
	
	class O_APC_Wheeled_02_rcws_F {
        vItemSpace = -1;
        conditions = "";
        price = 300000;
        textures[] = {
			{ "Schwarz", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)",
				"#(ai,64,64,1)Fresnel(1.3,7)",
				""
			},""},
			{ "SEK", "cop", {
                "skins\car\sek_marid_0.paa",
				"skins\car\sek_marid_1.paa",
				""
			},""}
		};
    };

    class C_Van_01_transport_F {
        vItemSpace = 150;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 150000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            }, ""  },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            }, ""  },
            { "Feuerwehr", "med", {
                "skins\car\rtwfront.jpg"
            },"" }
        };
    };

    class C_Van_01_box_F {
        vItemSpace = 200;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";//license_civ_trucking
        price = 200000;
        textures[] = {
			{ "Feuerwehr", "med", {
                "skins\car\rtwfront.jpg",
				"skins\car\rtwback.jpg"
            },"" },
			{ "Weiß", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            }, "" },
            { "Rot", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            }, "" }
        };
    };
	
	class C_Van_02_medevac_F {
        vItemSpace = -1;
        conditions = "";
        price = 30000;
        textures[] = {};
    };
	
	class C_IDAP_Van_02_medevac_F {
        vItemSpace = -1;
        conditions = "";
        price = 30000;
        textures[] = {
			{ "Pozilei (ILLEGAL)", "cop", {
                "skins\car\pozilei_van.jpg"
            }, ""  },
            { "SEK", "cop", {
                "\a3\soft_f_orange\Van_02\Data\van_body_black_CO.paa"
            },"" },
			{ "Polizei", "cop", {
                "skins\car\polizei_van.jpg"
            },"" }
		};
    };
	
	class C_Van_02_vehicle_F {	// Orange Van Transport
        vItemSpace = 270;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";//license_civ_driver
        price = 260000;
        textures[] = {
            { "AAN News", "civ", {
                "\a3\soft_f_orange\Van_02\Data\van_body_AAN_CO.paa"
            }, ""  },
			{ "Amazon", "civ", {
                "\a3\soft_f_orange\Van_02\Data\van_body_Armazon_CO.paa"
            }, ""  },
            { "BB", "civ", {
                "\a3\soft_f_orange\Van_02\Data\van_body_BB_CO.paa"
            }, ""  },
			{ "Schwarz", "civ", {
                "\a3\soft_f_orange\Van_02\Data\van_body_black_CO.paa"
            }, ""  },
			{ "Bluepearl", "civ", {
                "\a3\soft_f_orange\Van_02\Data\van_body_BluePearl_CO.paa"
            }, ""  },
			{ "Blau", "civ", {
                "\a3\soft_f_orange\Van_02\Data\van_body_blue_CO.paa"
            }, ""  },
			{ "Daltgreen", "civ", {
                "\a3\soft_f_orange\Van_02\Data\van_body_Daltgreen_CO.paa"
            }, ""  },
			{ "Fuel", "civ", {
                "\a3\soft_f_orange\Van_02\Data\van_body_Fuel_CO.paa"
            }, ""  },
			{ "Grün", "civ", {
                "\a3\soft_f_orange\Van_02\Data\van_body_green_CO.paa"
            }, ""  },
			{ "Maskiert", "civ", {
                "\a3\soft_f_orange\Van_02\Data\van_body_Masked_CO.paa"
            }, ""  },
			{ "Orange", "civ", {
                "\a3\soft_f_orange\Van_02\Data\van_body_Orange_CO.paa"
            }, ""  },
			{ "Racing", "civ", {
                "\a3\soft_f_orange\Van_02\Data\van_body_Redstone_CO.paa"
            }, ""  },
			{ "Rot", "civ", {
                "\a3\soft_f_orange\Van_02\Data\van_body_Red_CO.paa"
            }, ""  },
			{ "Braun", "civ", {
                "\a3\soft_f_orange\Van_02\Data\van_body_Syndikat_CO.paa"
            }, ""  },
			{ "Vrana", "civ", {
                "\a3\soft_f_orange\Van_02\Data\van_body_Vrana_CO.paa"
            }, ""  },
			{ "Weiß", "civ", {
                "\a3\soft_f_orange\Van_02\Data\van_body_white_CO.paa"
            }, ""  },
			{ "Pozilei (ILLEGAL)", "civ", {
                "skins\car\pozilei_van.jpg"
            }, ""  },
            { "Polizei Undercover", "cop", {
                "\a3\soft_f_orange\Van_02\Data\van_body_black_CO.paa"
            },"" },
			{ "Polizei", "cop", {
                "skins\car\polizei_van.jpg"
            },"" },
			{ "Free Candy", "civ", {
                "skins\car\FreeCandy_van.jpg"
            },"" },
			{ "Alternative für Altis", "civ", {
                "skins\car\AfA_van.jpg"
            },"" }
        };
    };

    class C_Van_02_transport_F {	// Orange Van Passagier
        vItemSpace = 200;
        conditions = "license_civ_rebel || {!(playerSide isEqualTo civilian)}";
        price = 200000;
        textures[] = {
			{ "AAN News", "civ", {
                "\a3\soft_f_orange\Van_02\Data\van_body_AAN_CO.paa"
            }, ""  },
			{ "Amazon", "civ", {
                "\a3\soft_f_orange\Van_02\Data\van_body_Armazon_CO.paa"
            }, ""  },
            { "BB", "civ", {
                "\a3\soft_f_orange\Van_02\Data\van_body_BB_CO.paa"
            }, ""  },
			{ "Schwarz", "civ", {
                "\a3\soft_f_orange\Van_02\Data\van_body_black_CO.paa"
            }, ""  },
			{ "Bluepearl", "civ", {
                "\a3\soft_f_orange\Van_02\Data\van_body_BluePearl_CO.paa"
            }, ""  },
			{ "Blau", "civ", {
                "\a3\soft_f_orange\Van_02\Data\van_body_blue_CO.paa"
            }, ""  },
			{ "Daltgreen", "civ", {
                "\a3\soft_f_orange\Van_02\Data\van_body_Daltgreen_CO.paa"
            }, ""  },
			{ "Fuel", "civ", {
                "\a3\soft_f_orange\Van_02\Data\van_body_Fuel_CO.paa"
            }, ""  },
			{ "Grün", "civ", {
                "\a3\soft_f_orange\Van_02\Data\van_body_green_CO.paa"
            }, ""  },
			{ "Maskiert", "civ", {
                "\a3\soft_f_orange\Van_02\Data\van_body_Masked_CO.paa"
            }, ""  },
			{ "Orange", "civ", {
                "\a3\soft_f_orange\Van_02\Data\van_body_Orange_CO.paa"
            }, ""  },
			{ "Racing", "civ", {
                "\a3\soft_f_orange\Van_02\Data\van_body_Redstone_CO.paa"
            }, ""  },
			{ "Rot", "civ", {
                "\a3\soft_f_orange\Van_02\Data\van_body_Red_CO.paa"
            }, ""  },
			{ "Braun", "civ", {
                "\a3\soft_f_orange\Van_02\Data\van_body_Syndikat_CO.paa"
            }, ""  },
			{ "Vrana", "civ", {
                "\a3\soft_f_orange\Van_02\Data\van_body_Vrana_CO.paa"
            }, ""  },
			{ "Weiß", "civ", {
                "\a3\soft_f_orange\Van_02\Data\van_body_white_CO.paa"
            }, ""  },
			{ "Pozilei (ILLEGAL)", "civ", {
                "skins\car\pozilei_van.jpg"
            }, ""  },
            { "Polizei Undercover", "cop", {
                "\a3\soft_f_orange\Van_02\Data\van_body_black_CO.paa"
            },"" },
			{ "Polizei", "cop", {
                "skins\car\polizei_van.jpg"
            },"" },
			{ "Free Candy", "civ", {
                "skins\car\FreeCandy_van.jpg"
            },"" },
			{ "Alternative für Altis", "civ", {
                "skins\car\AfA_van.jpg"
            },"" }
        };
    };

    class B_MRAP_01_F {
        vItemSpace = 100;
        conditions = "license_civ_rebel || {!(playerSide isEqualTo civilian)}";
        price = 3500000;
        textures[] = {
            { "Schneetarn", "civ", {
                "skins\car\donator_hunter_front.jpg",
				"skins\car\donator_hunter_hinten.jpg"
            }, ""  },
			{ "Asiimov", "civ", {
                "skins\car\Hunter_asiimov_0.paa",
				"skins\car\Hunter_asiimov_1.paa"
            }, ""  },
			{ "Feuerwehr", "med", {
                "skins\car\FW_hunter_front.paa",
				"skins\car\FW_hunter_back.paa"
            }, ""  },
			{ "Polizei", "cop", {
                "skins\car\hunterpol_1.paa",
				"skins\car\hunterpol_2.paa"
            }, ""  },
			{ "Undercover/Asiimov", "cop", {
                "skins\car\Hunter_asiimov_0.paa",
				"skins\car\Hunter_asiimov_1.paa"
            }, ""  },
			{ "SEK", "cop", {
                "skins\car\sek_hunter_1.paa",
                "skins\car\sek_hunter_2.paa"
            }, "" },
			{ "Vanila", "civ", {
				"\a3\soft_f\MRAP_01\Data\MRAP_01_base_CO.paa",
                "\a3\soft_f\MRAP_01\Data\MRAP_01_adds_CO.paa"
            }, ""  }
        };
    };
	
	class B_T_LSV_01_unarmed_olive_F {
        vItemSpace = 50;
        conditions = "license_civ_rebel || {!(playerSide isEqualTo civilian)}";
        price = 550000;
        textures[] = {
			{ "Doppler", "civ", {
                "skins\car\prowler_doppler.paa",
				"skins\car\prowler_doppler_2.paa"
            }, ""  },
			{ "Streetracer", "civ", {
                "skins\car\prowler_blue.paa",
				"skins\car\prowler_blue_2.paa",
                "skins\car\prowler_blue_3.paa"
            }, "" }
		};
    };

	class O_T_LSV_02_unarmed_arid_F {
        vItemSpace = 50;
        conditions = "license_civ_rebel || {!(playerSide isEqualTo civilian)}";
        price = 550000;
        textures[] = {};
    };

	class B_T_LSV_01_unarmed_black_F {
        vItemSpace = 50;
        conditions = "";
        price = 32500;
        textures[] = {};
        
    };	

	class O_T_LSV_02_unarmed_black_F {
        vItemSpace = 50;
        conditions = "";
        price = 32500;
        textures[] = {};
        
    };
			
	class O_T_LSV_02_unarmed_F {
        vItemSpace = 50;
        conditions = "";
        price = 625000;
        textures[] = {
            /*{ "DEA", "cop", {
                "skins\deaquilin1.jpg",
				"skins\deaquilin2.jpg"
            } }*/
			
			{ "Arid", "civ", {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"
            }, "" },
            { "Black", "civ", {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_black_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
            }, "" },
            { "Green Hex", "civ", {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"
            }, "" }
        };
    };
	
    class B_Heli_Light_01_stripped_F {
        vItemSpace = 125;
        conditions = "license_civ_rebel || {!(playerSide isEqualTo civilian)}";
        price = 450000;
        textures[] = {
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } }
        };
    };
	
	class I_Heli_light_03_unarmed_F { 
        vItemSpace = -1;
        conditions = "!(playerSide isEqualTo civilian)";
        price = 200000;
        textures[] = {
			{ "Polizei", "cop", {
                "skins\air\hellcat.paa"
            }, "" },
			{ "SEK", "cop", {
                "skins\air\sek_hellcat.paa"            
			}, "" },
			{ "Feuerwehr", "med", {
                "skins\air\FW_hellcat.jpg"  
            }, "" }		
		};
    };

    class B_Heli_Light_01_F {
        vItemSpace = 50;
        conditions = "license_civ_pilot || {!(playerSide isEqualTo civilian)}";//license_civ_pilot || {license_cop_cAir} || {license_med_mAir}
        price = 450000;
        textures[] = {           
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            }, "" },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            }, "" },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            }, "" },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            }, "" },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            }, "" },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            }, "" },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            }, "" },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            }, "" },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            }, "" },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            }, "" },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            }, "" },
            { "Digi Green", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            }, "" },
			{ "Redbull", "civ", {
                "skins\air\civ_hummingbird_redbull.paa"
			}, "" },
			{ "Hello Kitty", "civ", {
                "skins\air\kitty_heli.paa"
			}, "" },
			{ "Hyper Beast", "civ", {
                "skins\air\hyperbird.paa"
			}, "" },            
            { "Feuerwehr", "med", {
                "skins\air\FW_humming.paa"
			}, "" },
            { "Polizei", "cop", {
                "skins\air\police_heli.paa"
            }, "" },
			{ "Hyper Beast", "cop", {
                "skins\air\hyperbird.paa"
			}, "" },
			{ "SEK", "cop", {
                "skins\air\SEKHM.paa"
            }, "" }
        };
    };

    class C_Heli_Light_01_civil_F : B_Heli_Light_01_F {
        vItemSpace = 50;
        price = 300000;
    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 250;
        conditions = "license_civ_pilot || {!(playerSide isEqualTo civilian)}";//license_civ_pilot || {license_med_mAir}
        price = 2500000;
        textures[] = {			
			{ "Schwarz", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
			}, "" },
			{ "Weiß/Blau", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
			}, "" },
			{ "Digi Green", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
			}, "" },
			{ "Desert Digi", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
			}, "" },
			{ "Feuerwehr", "med", {
                "skins\air\FW_orca.paa"
			}, "" },
			{ "Schwarz", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
			}, "" }
        };
    };

    class B_SDV_01_F {
        vItemSpace = 30;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";//license_civ_boat || {license_cop_cg}
        price = 99000;
        textures[] = {};
    };

        class C_Van_01_fuel_F {
        vItemSpace = 200;
        vFuelSpace = 19500;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";//
        price = 75000;
        textures[] = {
            { "Weiß", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_co.paa"
            } },
            { "Rot", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_red_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_red_co.paa"
            } }
        };
    };

    class I_Truck_02_fuel_F {
        vItemSpace = 75;
        vFuelSpace = 42000;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";//license_civ_trucking
        price = 250000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            }, "" },
			{ "Red Bull", "civ", {
                "skins\car\civ_zamak_redbull_0.jpg",
                "skins\car\civ_zamak_redbull_1.jpg"
            }, "" },
            { "Polizei", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" },
			{ "Feuerwehr", "med", {
                "#(rgb,64,64,1)color(255, 0, 0, 0.8)",
                "#(rgb,64,64,1)color(255, 0, 0, 0.8)"
            }, "" }
        };
    };

    class B_Truck_01_fuel_F {
        vItemSpace = 800;
        vFuelSpace = 950000;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";//license_civ_trucking
        price = 5500000;
        textures[] = {
			{ "Devil", "civ", {
                "skins\car\civ_hemtt_devil_0.paa",
				"#(rgb,8,8,1)color(0,0,0,1)"
            }, "" },
			{ "Hello Kitty", "civ", {
                "skins\car\civ_hemtt_kitty_0.paa",
				"#(argb,8,8,3)color(0.75,0.25,0.7,1)"
            }, "" },
			{ "Digi Green", "civ", {
                "skins\car\digi_hemtt_1.jpg",
				"#(argb,8,8,3)color(0,0,0,1)"
            }, "" },
			{ "Feuerwehr", "med", {
                "skins\car\FW_hemtt.paa",
				"#(rgb,8,8,1)color(1,0,0,1)"
            }, "" },
			{ "Polizei", "cop", {
                "skins\car\PolizeiHEMMT2.paa",
				"skins\car\PolizeiHEMMT1.paa"
            }, "" }
		};
    };
	
	// Apex DLC
    class C_Plane_Civil_01_F {
        vItemSpace = 75;
		conditions = "license_civ_pilot || {!(playerSide isEqualTo civilian)}";//license_civ_pilot
        price = 3450000;
        textures[] = {
            { "Racing (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Racing", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" },
            { "Red Line (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Red Line", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" },
            { "Tribal (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Tribal", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" },
            { "Blue Wave (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Blue Wave", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" }
        };
    };
	
	// Apex DLC
    class C_Boat_Transport_02_F {
        vItemSpace = 320;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";//license_civ_boat
        price = 950000;
        textures[] = {
            { "Civilian", "civ", {
                "\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_civilian_CO.paa"
            }, "" },
            { "Black", "cop", {
                "\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_CO.paa"
            }, "" }
        };
    };

	// Apex DLC
    class C_Scooter_Transport_01_F {
        vItemSpace = -1;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";//license_civ_boat
        price = 175000;
        textures[] = {
            { "Black", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Black_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Black_CO.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Blue_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Blue_co.paa"
            }, "" },
            { "Grey", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Grey_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Grey_co.paa"
            }, "" },
            { "Green", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Lime_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Lime_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Red_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"
            }, "" },
            { "White", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"
            }, "" },
            { "Yellow", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Yellow_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Yellow_CO.paa"
            }, "" }
        };
    };







	
	//////////////////////////
	////////Elite/////////////
	//////////////////////////
	
	class O_T_LSV_02_unarmed_ghex_F {
        vItemSpace = 150;
		conditions = "license_civ_elite || {!(playerSide isEqualTo civilian)}";//license_civ_boat
        price = 325000;
        textures[] = { };
    };

    class O_T_MRAP_02_ghex_F {
        vItemSpace = 100;
        conditions = "license_civ_elite || {!(playerSide isEqualTo civilian)}";//license_cop_cg
        price = 2750000;
        textures[] = { };
    };
	
	class O_T_Truck_03_transport_ghex_F {
        vItemSpace = 400;
        conditions = "license_civ_elite || {!(playerSide isEqualTo civilian)}";//license_civ_boat
        price = 2450000;
        textures[] = { 
		{ "ELITE Hexa", "civ", {
                "\a3\soft_f_exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa",			//Arma Pfad
				"\a3\soft_f_exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa",
				"\a3\soft_f_exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa"
            }, "" },
			{ "Schnee Hexa", "civ", {
                "skins\car\Tempest_Schneetarn_1.jpg",
				"skins\car\Tempest_Schneetarn_2.jpg",
				"skins\car\Tempest_Schneetarn_cargo.jpg"
            }, "" },
			{ "Woodland", "civ", {
                "skins\car\Tempest_Camo_1.paa",
				"skins\car\Tempest_Camo_2.paa",
				"skins\car\Tempest_Camo_cargo.paa"
            }, "" },
			{ "Digi BLau", "civ", {
                "skins\car\Tempest_DCamo_1.paa",
				"skins\car\Tempest_DCamo_2.paa",
				"skins\car\Tempest_DCamo_cargo.paa"
            }, "" }
		};
    };

    class O_T_Truck_03_covered_ghex_F {
        vItemSpace = 450;
        conditions = "license_civ_elite || {!(playerSide isEqualTo civilian)}";//license_cop_cg
        price = 2950000;
        textures[] = {
		{ "ELITE Hexa", "civ", {
                "\a3\soft_f_exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa",			//Arma Pfad
				"\a3\soft_f_exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa",
				"\a3\soft_f_exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa",
				"\a3\soft_f_exp\Truck_03\Data\Truck_03_cover_ghex_CO.paa"
            }, "" },
			{ "Schnee Hexa", "civ", {
                "skins\car\Tempest_Schneetarn_1.jpg",
				"skins\car\Tempest_Schneetarn_2.jpg",
				"skins\car\Tempest_Schneetarn_cargo.jpg",
				"skins\car\Tempest_Schneetarn_cover.jpg"
            }, "" },
			{ "Woodland", "civ", {
                "skins\car\Tempest_Camo_1.paa",
				"skins\car\Tempest_Camo_2.paa",
				"skins\car\Tempest_Camo_cargo.paa",
				"skins\car\Tempest_Camo_covered.paa"
            }, "" },
			{ "Digi BLau", "civ", {
                "skins\car\Tempest_DCamo_1.paa",
				"skins\car\Tempest_DCamo_2.paa",
				"skins\car\Tempest_DCamo_cargo.paa",
				"skins\car\Tempest_DCamo_covered.paa"
            }, "" }
		};
    };
	
	class O_T_Truck_03_fuel_ghex_F {
        vItemSpace = 500;
        conditions = "license_civ_elite || {!(playerSide isEqualTo civilian)}";
        price = 400000;
        textures[] = {
		{ "ELITE Hexa", "civ", {
                "\a3\soft_f_exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa",			//Arma Pfad
				"\a3\soft_f_exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa",
				"\a3\soft_f_exp\Truck_03\Data\Truck_03_fuel_ghex_CO.paa"
            }, "" },
			{ "Schnee Hexa", "civ", {
                "skins\car\Tempest_Schneetarn_1.jpg",
				"skins\car\Tempest_Schneetarn_2.jpg",
				"skins\car\Tempest_Schneetarn_fuel.jpg"
            }, "" },
			{ "Woodland", "civ", {
                "skins\car\Tempest_Camo_1.paa",
				"skins\car\Tempest_Camo_2.paa",
				"skins\car\Tempest_Camo_fuel.paa"
            }, "" },
			{ "Digi BLau", "civ", {
                "skins\car\Tempest_DCamo_1.paa",
				"skins\car\Tempest_DCamo_2.paa",
				"skins\car\Tempest_DCamo_fuel.paa"
            }, "" }
		};
    };
	
	class O_T_Truck_03_device_ghex_F {
        vItemSpace = 800;
        conditions = "license_civ_elite || {!(playerSide isEqualTo civilian)}";
        price = 10950000;
        textures[] = {
		{ "ELITE Hexa", "civ", {
                "\a3\soft_f_exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa",			//Arma Pfad
				"\a3\soft_f_exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa"
            }, "" },
			{ "Schnee Hexa", "civ", {
                "skins\car\Tempest_Schneetarn_1.jpg",
				"skins\car\Tempest_Schneetarn_2.jpg"
            }, "" },
			{ "Woodland", "civ", {
                "skins\car\Tempest_Camo_1.paa",
				"skins\car\Tempest_Camo_2.paa"
            }, "" },
			{ "Digi BLau", "civ", {
                "skins\car\Tempest_DCamo_1.paa",
				"skins\car\Tempest_DCamo_2.paa"
            }, "" }
		};
    };

    class O_T_Truck_03_ammo_ghex_F {
        vItemSpace = 900;
        conditions = "license_civ_elite || {!(playerSide isEqualTo civilian)}";
        price = 12500000;
        textures[] = {
		{ "ELITE Hexa", "civ", {
                "\a3\soft_f_exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa",			//Arma Pfad
				"\a3\soft_f_exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa",
				"\a3\soft_f_exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa"
            }, "" },
			{ "Schnee Hexa", "civ", {
                "skins\car\Tempest_Schneetarn_1.jpg",
				"skins\car\Tempest_Schneetarn_2.jpg",
				"skins\car\Tempest_Schneetarn_cargo.jpg"
            }, "" },
			{ "Woodland", "civ", {
                "skins\car\Tempest_Camo_1.paa",
				"skins\car\Tempest_Camo_2.paa",
				"skins\car\Tempest_Camo_cargo.paa"
            }, "" },
			{ "Digi BLau", "civ", {
                "skins\car\Tempest_DCamo_1.paa",
				"skins\car\Tempest_DCamo_2.paa",
				"skins\car\Tempest_DCamo_cargo.paa"
            }, "" }
		};
    };
	
	class C_Heli_light_01_ion_F {
        vItemSpace = 50;
        conditions = "license_civ_elite || {!(playerSide isEqualTo civilian)}";
        price = 600000;
        textures[] = { };
    };
	
	class C_Heli_light_01_wasp_F {
        vItemSpace = 50;
        conditions = "license_civ_elite || {!(playerSide isEqualTo civilian)}";
        price = 600000;
        textures[] = { };
    };

    class B_CTRG_Heli_Transport_01_tropic_F {
        vItemSpace = 500;
        conditions = "license_civ_elite || {!(playerSide isEqualTo civilian)}";
        price = 12500000;
        textures[] = { };
    };
	
	class B_CTRG_Heli_Transport_01_sand_F {
        vItemSpace = 500;
        conditions = "license_civ_elite || {!(playerSide isEqualTo civilian)}";
        price = 18500000;
        textures[] = { };
    };
    
    class I_LT_01_scout_F {
        vItemSpace = 400;
        conditions = "license_civ_elite || {!(playerSide isEqualTo civilian)}";
        price = 48500000;
        textures[] = { };
    };
	
	class O_T_VTOL_02_vehicle_hex_F {
        vItemSpace = 800;
        conditions = "";
        price = 25500000;
        textures[] = { };
    };
	
	class B_T_VTOL_01_vehicle_olive_F {
        vItemSpace = 1000;
        conditions = "license_civ_elite || {!(playerSide isEqualTo civilian)}";
        price = 18950000;
        textures[] = { };
    };
	
	class B_T_VTOL_01_vehicle_blue_F {
        vItemSpace = 550;
        conditions = "license_civ_elite || {!(playerSide isEqualTo civilian)}";
        price = 3000000;
        textures[] = { };
    };
	
	class B_UAV_01_F {
        vItemSpace = -1;
        conditions = "";
        price = 1000;
        textures[] = { };
    };
	
	class B_T_UAV_03_F {
        vItemSpace = -1;
        conditions = "";
        price = 300000;
        textures[] = { };
    };
};