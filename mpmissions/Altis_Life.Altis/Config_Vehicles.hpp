class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: ARRAY (This is for limiting items to certain things)
    *            0: Variable to read from
    *            1: Variable Value Type (SCALAR / BOOL /EQUAL)
    *            2: What to compare to (-1 = Check Disabled)
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
    class civ_car {
        side = "civ"; 
        vehicles[] = {
			{ "B_Quadbike_01_F", { "", "", -1 } },
            { "C_Hatchback_01_F", { "", "", -1 } },
            { "C_Offroad_01_F", { "", "", -1 } },
            { "C_SUV_01_F", { "", "", -1 } },
            { "C_Hatchback_01_sport_F", { "", "", -1 } },
            { "C_Van_01_transport_F", { "", "", -1 } },
            { "C_Offroad_02_unarmed_F", { "", "", -1 } } //Apex DLC
        };
    };

    class kart_shop {
        side = "civ";
        vehicles[] = {
			{ "C_Kart_01_Blu_F", { "", "", -1 } },
            { "C_Kart_01_Fuel_F", { "", "", -1 } },
            { "C_Kart_01_Red_F", { "", "", -1 } },
            { "C_Kart_01_Vrana_F", { "", "", -1 } }
        };
    };

    class civ_truck {
        side = "civ";
        vehicles[] = {
            { "C_Van_01_fuel_F", { "", "", -1 } },
            { "C_Van_01_box_F", { "", "", -1 } },
            { "I_Truck_02_transport_F", { "", "", -1 } },
            { "I_Truck_02_covered_F", { "", "", -1 } },
            { "B_Truck_01_transport_F", { "", "", -1 } },
            { "B_Truck_01_covered_F", { "", "", -1 } },
            { "B_Truck_01_ammo_F", { "", "", -1 } },
            { "B_Truck_01_fuel_F", { "", "", -1 } },
            { "B_Truck_01_box_F", { "", "", -1 } },
            { "O_Truck_03_transport_F", { "", "", -1 } },
            { "O_Truck_03_covered_F", { "", "", -1 } },
			{ "O_Truck_03_fuel_F", { "", "", -1 } },
			{ "O_Truck_03_device_F", { "", "", -1 } },
			{ "O_Truck_03_ammo_F", { "", "", -1 } }
        };
    };

    class civ_air {
        side = "civ";
        vehicles[] = {
			{ "B_Heli_Light_01_F", { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", { "", "", -1 } },
            { "I_Heli_Transport_02_F", { "", "", -1 } },
            { "C_Plane_Civil_01_F", { "", "", -1 } }//Apex DLC
        };
    };

     class civ_ship {
        side = "civ";
        vehicles[] = {
			{ "C_Rubberboat", { "", "", -1 } },
            { "C_Boat_Civil_01_F", { "", "", -1 } },
            { "B_SDV_01_F", { "", "", -1 } },
            { "C_Boat_Transport_02_F", { "", "", -1 } }, //Apex DLC
            { "C_Scooter_Transport_01_F", { "", "", -1 } } //Apex DLC
        };
    };

    class reb_car {
        side = "civ";
        vehicles[] = {
			{ "B_Quadbike_01_F", { "", "", -1 } },
            { "B_G_Offroad_01_armed_F", { "", "", -1 } },
            { "B_T_LSV_01_unarmed_olive_F", { "", "", -1 } },
			{ "O_T_LSV_02_unarmed_arid_F", { "", "", -1 } },
			{ "B_MRAP_01_F", { "", "", -1 } },
			{ "O_MRAP_02_F", { "", "", -1 } },
			{ "O_MRAP_02_hmg_F", { "", "", -1 } },
			{ "C_Plane_Civil_01_F", { "", "", -1 } },
			{ "O_Plane_CAS_02_F", { "", "", -1 } },
			{ "B_Heli_Light_01_F", { "", "", -1 } },
			{ "O_Heli_Light_02_unarmed_F", { "", "", -1 } },
			{ "I_Heli_Transport_02_F", { "", "", -1 } },
			{ "O_Heli_Transport_04_F", { "", "", -1 } },
			{ "O_Heli_Transport_04_box_F", { "", "", -1 } },
			{ "B_Heli_Transport_03_unarmed_F", { "", "", -1 } }
        };
    };

	class elite {
        side = "civ";
        vehicles[] = {
            { "O_T_LSV_02_unarmed_ghex_F", { "", "", -1 } },
            { "O_T_MRAP_02_ghex_F", { "", "", -1 } },
            { "O_T_MRAP_02_hmg_ghex_F", { "", "", -1 } },
			{ "O_T_Truck_03_transport_ghex_F", { "", "", -1 } },
			{ "O_T_Truck_03_covered_ghex_F", { "", "", -1 } },
			{ "O_T_Truck_03_fuel_ghex_F", { "", "", -1 } },
			{ "O_T_Truck_03_device_ghex_F", { "", "", -1 } },
			{ "O_T_Truck_03_ammo_ghex_F", { "", "", -1 } },
			{ "C_Heli_light_01_ion_F", { "", "", -1 } },
			{ "C_Heli_light_01_wasp_F", { "", "", -1 } },
			{ "B_CTRG_Heli_Transport_01_tropic_F", { "", "", -1 } },
			{ "B_T_VTOL_01_vehicle_olive_F", { "", "", -1 } }          
        };
    };
	
    class med_shop {
        side = "med";
        vehicles[] = {
			{ "C_Van_01_box_F", { "", "", -1 } },
            { "C_Offroad_01_F", { "", "", -1 } },
            { "C_Offroad_01_repair_F", { "", "", -1 } },
            { "C_SUV_01_F", { "", "", -1 } },
			{ "B_Truck_01_medical_F", { "", "", -1 } },
			{ "O_Truck_03_medical_F", { "", "", -1 } },
			{ "B_Truck_01_transport_F", { "", "", -1 } },
			{ "B_MRAP_01_F", { "", "", -1 } }
        };
    };

    class med_air_hs {
        side = "med";
        vehicles[] = {
			{ "B_Heli_Light_01_F", { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", { "", "", -1 } },
			{ "I_Heli_Transport_02_F", { "", "", -1 } },
            { "O_Heli_Transport_04_F", { "", "", -1 } }
        };
    };

    class cop_car {
        side = "cop";
        vehicles[] = {
			//{ "B_Quadbike_01_F", { "", "", -1 } },
            //{ "C_Offroad_01_F", { "life_coplevel", "SCALAR", 2 } },
            //{ "C_SUV_01_F", { "life_coplevel", "SCALAR", 2 } },
            //{ "C_Hatchback_01_sport_F", { "life_coplevel", "SCALAR", 2 } },
            //{ "B_MRAP_01_F", { "life_coplevel", "SCALAR", 3 } },
			//{ "O_T_LSV_02_unarmed_F", { "life_coplevel", "SCALAR", 5 } },
			//{ "C_Offroad_02_unarmed_black_F", { "life_coplevel", "SCALAR", 2 } },
			//{ "O_APC_Wheeled_02_rcws_F", { "life_coplevel", "SCALAR", 5 } }
			
			{ "B_Quadbike_01_F", { "", "", -1 } },
            { "C_SUV_01_F", { "", "", -1 } },
            { "C_Offroad_01_F", { "", "", -1 } },
            { "C_Hatchback_01_F", { "", "", -1 } },
            { "C_Hatchback_01_sport_F", { "", "", -1 } },
			{ "B_T_LSV_01_unarmed_black_F", { "", "", -1 } },
            { "O_T_LSV_02_unarmed_black_F", { "", "", -1 } },
            { "B_MRAP_01_F", { "", "", -1 } },
            { "I_MRAP_03_F", { "", "", -1 } },
            { "I_APC_Wheeled_03_cannon_F", { "", "", -1 } } //call life_coplevel >= 3
        };
    };

    class cop_air {
        side = "cop";
        vehicles[] = {
            //{ "B_Heli_Light_01_F", { "", "", -1 } },
            //{ "B_Heli_Transport_01_F", { "life_coplevel", "SCALAR", 3 } },
			//{ "I_Heli_light_03_unarmed_F", { "life_coplevel", "SCALAR", 2 } },
			//{ "O_Heli_Light_02_unarmed_F", { "life_coplevel", "SCALAR", 2 } }
			
			{ "B_Heli_Light_01_F", { "", "", -1 } },
            { "I_Heli_light_03_unarmed_F", { "", "", -1 } },
			{ "O_Heli_Light_02_unarmed_F", { "", "", -1 } },
            { "B_UAV_01_F", { "", "", -1 } },
			{ "I_Heli_Transport_02_F", { "", "", -1 } },
            { "B_Heli_Transport_01_F", { "", "", -1 } },
			{ "B_Heli_Transport_03_F", { "", "", -1 } },
            { "B_Heli_Attack_01_F", { "", "", -1 } },
			{ "B_T_VTOL_01_vehicle_blue_F", { "", "", -1 } },
            { "B_T_UAV_03_F", { "", "", -1 } },
			{ "B_UAV_02_F", { "", "", -1 } },
            { "B_UAV_02_CAS_F", { "", "", -1 } }
        };
    };

    class cop_ship {
        side = "cop";
        vehicles[] = {
            //{ "B_Boat_Transport_01_F", { "", "", -1 } },
            //{ "C_Boat_Civil_01_police_F", { "", "", -1 } },
            //{ "B_Boat_Armed_01_minigun_F", { "life_coplevel", "SCALAR", 3 } },
            //{ "B_SDV_01_F", { "", "", -1 } }
			
			{ "B_Boat_Transport_01_F", { "", "", -1 } },
            { "C_Boat_Civil_01_police_F", { "", "", -1 } },
            { "C_Boat_Transport_02_F", { "", "", -1 } }, //Apex DLC
            { "B_Boat_Armed_01_minigun_F", /*"call life_coplevel >= 3"*/{ "", "", -1 } },
            { "B_SDV_01_F", { "", "", -1 } }
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
    *       1: ARRAY (license required)
    *         Ex: { "driver", "" , "" , "" } //civilian, west, independent, east
    *         licenses[] = { {"CIV"}, {"COP"}, {"MEDIC"}, {"EAST"} };
    *    Textures config follows { Texture Name, side, {texture(s)path}}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    *
    */

    class Default {
        vItemSpace = -1;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };
	
	// Apex DLC
    class C_Offroad_02_unarmed_F {
        vItemSpace = 65;
        licenses[] = { {"driver"}, {""}, {""}, {""} }/*"license_civ_driver*/;
        price = 60000;
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
		
	class B_T_LSV_01_unarmed_olive_F {
        vItemSpace = 900000;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 25000;
        textures[] = {};
    };

    // Apex DLC
    class O_T_LSV_02_unarmed_F {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 800000;
        textures[] = {
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
	
    class I_Truck_02_medical_F {
        vItemSpace = 150;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 25000;
        textures[] = {};
    };

    class O_Truck_03_medical_F {
        vItemSpace = 200;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 45000;
        textures[] = {};
    };

    class B_Truck_01_medical_F {
        vItemSpace = 250;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 60000;
        textures[] = {};
    };

    class C_Rubberboat {
        vItemSpace = 45;
        licenses[] = { {"boat"}, {""}, {""}, {""} };//license_civ_boat
        price = 5000;
        textures[] = { };
    };
	
	class B_MRAP_01_hmg_F {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 750000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

	class O_MRAP_03_F {
        vItemSpace = 60;
		licenses[] = { {"driver"}, {""}, {""}, {""} };//license_civ_driver
        price = 1000000;
        textures[] = { };
    };
	
	class O_Plane_CAS_02_F {
        vItemSpace = 700;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 20000000;
        textures[] = {};
    };
	
    class B_Heli_Transport_01_F {
        vItemSpace = 200;
        licenses[] = { {""}, {"cAir"}, {""}, {""} };//license_cop_cAir
        price = 200000;
        textures[] = {};
    };
	
	class I_Heli_Transport_02_F {
        vItemSpace = 200;
        licenses[] = { {""}, {"cAir"}, {""}, {""} };//license_cop_cAir
        price = 6000000;
        textures[] = {};
    };
	
	class O_Heli_Transport_04_F {
        vItemSpace = 200;
        licenses[] = { {""}, {"cAir"}, {""}, {""} };//license_cop_cAir
        price = 16000000;
        textures[] = {};
    };

	class O_Heli_Transport_04_box_F {
        vItemSpace = 200;
        licenses[] = { {""}, {"cAir"}, {""}, {""} };//license_cop_cAir
        price = 19000000;
        textures[] = {};
    };

	class B_Heli_Transport_03_unarmed_F {
        vItemSpace = 200;
        licenses[] = { {""}, {"cAir"}, {""}, {""} };//license_cop_cAir
        price = 25000000;
        textures[] = {};
    };

	
    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        licenses[] = { {""}, {"cg"}, {""}, {""} };//license_cop_cg
        price = 75000;
        textures[] = { };
    };

    class B_Boat_Transport_01_F {
        vItemSpace = 45;
        licenses[] = { {""}, {"cg"}, {""}, {""} };//license_cop_cg
        price = 3000;
        textures[] = { };
    };

    class O_Truck_03_transport_F {
        vItemSpace = 285;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };//license_civ_trucking
        price = 2500000;
        textures[] = { 
		   /*{ "MAN Desert", "civ", {
                "textures\Mandes1.paa",
				"textures\Mandes2.paa",
				"textures\Mandes3.paa"
           } },
		   { "MAN Woodland", "civ", {
                "textures\Manwd1.paa",
				"textures\Manwd2.paa",
				"textures\Manwd3.paa"
            } }*/
		};
    };
	
	class O_Truck_03_fuel_F {
        vItemSpace = 350;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };//license_civ_trucking
        price = 5500000;
        textures[] = { 
		   /*{ "Smell Tank", "civ", {
                "textures\ArmA3-Smell-Tempesttank0.jpg",
				"textures\ArmA3-Smell-Tempesttank1.jpg",
				"textures\ArmA3-Smell-Tempesttank2.jpg"
           }*/ }
		};
    };
	
        class O_Truck_03_ammo_F {
        vItemSpace = 350;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };//license_civ_trucking
        price = 14000000;
        textures[] = { 
		  /* { "MAN Desert", "civ", {
                "textures\Mandes1.paa",
				"textures\Mandes2.paa",
				"textures\Mandes3.paa"
           } },
		   { "MAN Woodland", "civ", {
                "textures\Manwd1.paa",
				"textures\Manwd2.paa",
				"textures\Manwd3.paa"
            }*/ }
		};
    };

    class O_Truck_03_device_F {
        vItemSpace = 350;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };//license_civ_trucking
        price = 12000000;
        textures[] = { 
  	       /*{ "MAN Desert", "civ", {
                "textures\Mandes1.paa",
				"textures\Mandes2.paa",
				"textures\Mandes3.paa"
           } },
		   { "MAN Woodland", "civ", {
                "textures\Manwd1.paa",
				"textures\Manwd2.paa",
				"textures\Manwd3.paa"
            }*/ }
		};
    };

    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 350;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 700;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class B_G_Offroad_01_F {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 12500;
        textures[] = { };
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 65;
        licenses[] = { {"rebel"}, {""}, {""}, {""} };//license_civ_rebel
        price = 3500000;
        textures[] = { };
    };

	class B_Truck_01_covered_F {
        vItemSpace = 450;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };//license_civ_trucking
        price = 600000;
        textures[] = { };
    };
	
	class B_Truck_01_ammo_F {
        vItemSpace = 450;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };//license_civ_trucking
        price = 2000000;
        textures[] = { };
    };
	
    class C_Boat_Civil_01_F {
        vItemSpace = 85;
        licenses[] = { {"boat"}, {""}, {""}, {""} };//license_civ_boat
        price = 10000;
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        licenses[] = { {""}, {"cg"}, {""}, {""} };//license_cop_cg
        price = 20000;
        textures[] = { };
    };

    class B_Truck_01_box_F {
        vItemSpace = 450;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };//license_civ_trucking
        price = 3500000;
        textures[] = { };
    };

    class B_Truck_01_transport_F {
        vItemSpace = 325;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };//license_civ_trucking
        price = 400000;
        textures[] = { };
    };

    class O_MRAP_02_F {
        vItemSpace = 60;
        licenses[] = { {"driver"}, {""}, {""}, {""} };//license_civ_driver
        price = 9800000;
        textures[] = { };
    };

    class C_Offroad_01_F {
        vItemSpace = 65;
        licenses[] = { {"driver"}, {""}, {""}, {""} };//license_civ_driver
        price = 30000;
        textures[] = {
            /*{ "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            } },
            { "Yellow", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            } },
            { "White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            } },
            { "Blue", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            } },
            { "Dark Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            } },
            { "Blue / White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            } },
            { "Taxi", "civ", {
                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "State Police", "cop", {
                "textures\policeoff.jpg"
			 } },
            { "SWAT", "cop", {
                "textures\swatoff.jpg"
            } },
			{ "Sheriff", "cop", {
                "textures\SDOff.jpg"
            } },
			{ "DEA", "cop", {
                "textures\DEAoff.jpg"
            } },
			{ "Monster", "civ", {
                "textures\monsterenergy_off.jpg"
            } },
			{ "Unicorn", "civ", {
                "textures\ziv_offroad.jpg"
            } },
			{ "Gay", "civ", {
                "textures\ziv_offroad_Gay.jpg"
            } }*/
			
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
            }, "" },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            }, "" }
        };
    };

    class C_Kart_01_Blu_F {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };//license_civ_driver
        price = 15000;
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
        licenses[] = { {"driver"}, {""}, {""}, {""} };//license_civ_driver
        price = 3000000;
        textures[] = {
            /*{ "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            } },
            { "Black / White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            } },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            } },
            { "State Police", "cop", {
                "textures\Hatchbackpol.jpg"
            } },
			{ "Monster", "civ", {
                "textures\hatchback_sport_ken_block.jpg"
            } }*/

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
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            }, "" }
        };
    };

    class B_Quadbike_01_F {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };//license_civ_driver
        price = 5000;
        textures[] = {
            /*{ "Brown", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            } },
            { "Digi Desert", "reb", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
            } },
            { "Black", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
            } },
            { "Blue", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            } },
            { "Red", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
            } },
            { "White", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
            } },
            { "Digi Green", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
            } },
            { "Hunter Camo", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } },
            { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } },
			{ "City Police", "cop", {
                "textures\PDQUAD.jpg"
            } }*/
			
			{ "Brown", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
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
        vItemSpace = 250;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };//license_civ_trucking
        price = 350000;
        textures[] = {
            /*{ "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }*/
			
			{ "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            }, "" },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

    class I_Truck_02_transport_F {
        vItemSpace = 200;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };//license_civ_trucking
        price = 220000;
        textures[] = {
            /*{ "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }*/
			
			{ "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            }, "" },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

    class O_Truck_03_covered_F {
        vItemSpace = 285;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };//license_civ_trucking
        price = 3000000;
        textures[] = {
	       /*{ "MAN Desert", "civ", {
                "textures\Mandes1.paa",
				"textures\Mandes2.paa",
				"textures\Mandes3.paa",
				"textures\Mandes4.paa"
           } },
		   { "MAN Woodland", "civ", {
                "textures\Manwd1.paa",
				"textures\Manwd2.paa",
				"textures\Manwd3.paa",
				"textures\Manwd4.paa"
            }*/ }
		};
    };

    class C_Hatchback_01_F {
        vItemSpace = 40;
        licenses[] = { {"driver"}, {""}, {""}, {""} };//license_civ_driver
        price = 19500;
        textures[] = {
            /*{ "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            } },
            { "Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            } },
            { "Yellow", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            } },
            { "White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            } },
            { "Grey", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            } },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            } }*/
			
			{ "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            }, "" },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            }, "" },
            { "Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            }, "" },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            }, "" },
            { "Yellow", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            }, "" },
            { "White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            }, "" },
            { "Grey", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            }, "" },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            }, "" }
        };
    };

    class C_SUV_01_F {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };//license_civ_driver
        price = 45000;
        textures[] = {
            /*{ "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            } },
            { "Silver", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            } },
            { "Police", "cop", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_02_co.paa"
			} },
			{ "APD Sheriff", "cop", {
                "textures\BTsheriff.jpg"
			} },
			{ "State Police", "cop", {
                "textures\policesuv.jpg"
            } },
			{ "DEA", "cop", {
                "textures\DEAsuv.jpg"
            } },
			{ "Sheriff", "cop", {
                "textures\BTsheriffSuv.jpg"
            } },
			{ "HWY Police", "cop", {
                "textures\HWYsuv.jpg"
            } },
			{ "Trump", "civ", {
                "textures\TrumpSUV.jpg"
            } },
			{ "Monster", "civ", {
                "textures\suv_Monster_energy_block.jpg"
            } },
			{ "Ambulance", "med", {
                "textures\med_suv.jpg"
            } }*/
			
			{ "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            }, "" },
            { "Silver", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            }, "" },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            }, "" },
            { "Police", "cop", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_02_co.paa"
            }, "" }
        };
    };
	
	/* class O_APC_Wheeled_02_rcws_F { ######### TODO: Eventuell einbauen?
        vItemSpace = 500;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 300000;
        textures[] = {
            { "APD SWAT", "cop", {
                "textures\Marid1.paa",
				"textures\Marid2.paa",
				"textures\MaridRCWS.paa"
            } }
        };
    };*/

    class C_Van_01_transport_F {
        vItemSpace = 100;
        licenses[] = { {"driver"}, {""}, {""}, {""} };//license_civ_driver
        price = 45000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

    class C_Van_01_box_F {
        vItemSpace = 150;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };//license_civ_trucking
        price = 100000;
        textures[] = {
            /*{ "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } },
			{ "Live Saver", "med", {
                "textures\rtwfront.jpg",
				"textures\rtwback.jpg"
            } }*/
			{ "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            }, "" },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            }, "" }
        };
    };

    class B_MRAP_01_F {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 7500000;
        textures[] = {
            /*{ "Metro Police", "cop", {
                "textures\swathunter_1.jpg",
				"textures\swathunter_2.jpg"
            } },
			{ "SWAT", "cop", {
                "textures\APD_Swat_1.jpg",
				"textures\swathunter_2.jpg"
            } },
			{ "Sheriff", "cop", {
                "textures\SD_Hunter_1.jpg",
				"textures\swathunter_2.jpg"
            } },
			{ "DEA", "cop", {
                "textures\DEA_Hunter_1.jpg",
				"textures\swathunter_2.jpg"
            } },
			{ "State Police", "cop", {
                "textures\APDHunter_1.jpg",
				"textures\swathunter_2.jpg"
            } }*/
			{ "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" },
			{ "Black", "civ", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };
	
	class O_T_LSV_02_unarmed_F {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 800000;
        textures[] = {
            /*{ "DEA", "cop", {
                "textures\deaquilin1.jpg",
				"textures\deaquilin2.jpg"
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
	
	/* class C_Offroad_02_unarmed_black_F { ########TODO: ist in der alten nicht enthalten?!
        vItemSpace = 80;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 50000;
        textures[] = {
            { "DEA", "cop", {
                "textures\4WDDEA.jpg"
            } },
			{ "SWAT", "cop", {
                "textures\4WDSWAT.jpg"
            } },
			{ "POLICE", "cop", {
                "textures\4WDAPD.jpg"
            } },
			{ "Sheriff", "cop", {
                "textures\4WDSD.jpg"
            } },
			{ "Troll", "civ", {
                "textures\4WDTROLL.jpg"
            } },
			{ "Paramedic", "med", {
                "textures\4WDMED.jpg"
            } }
        };
    };*/

     class B_Heli_Light_01_stripped_F {
        vItemSpace = 90;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 275000;
        textures[] = {
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } }
        };
    };
	
	/* class I_Heli_light_03_unarmed_F { ########TODO: ist in der alten nicht enthalten?!
        vItemSpace = 200;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 200000;
        textures[] = {
            { "Black", "cop", {
                "textures\HellcatPD.jpg"
            } }
        };
    };*/

    class B_Heli_Light_01_F {
        vItemSpace = 90;
        licenses[] = { {"pilot"}, {"cAir"}, {"mAir"}, {""} };//license_civ_pilot || {license_cop_cAir} || {license_med_mAir}
        price = 300000;
        textures[] = {
            /*{ "Police", "cop", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
            } },
            { "Sheriff", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            } },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            } },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            } },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            } },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            } },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            } },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            } },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            } },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            } },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            } },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            } },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } },
            { "Digi Green", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            } },
            { "Life Saver Medic", "med", {
                "textures\MDHM.jpg"
			} },
            { "State Police", "cop", {
                "textures\police_heli.jpg"
            } },
			{ "Sheriff", "cop", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            } }*/
			
			{ "Police", "cop", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
            }, "" },
            { "Sheriff", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            }, "" },
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
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            }, "" }
        };
    };

    class C_Heli_Light_01_civil_F : B_Heli_Light_01_F {
        vItemSpace = 75;
        price = 245000;
    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 210;
        licenses[] = { {"pilot" }, {""}, {"mAir"}, {""} };//license_civ_pilot || {license_med_mAir}
        price = 4000000;
        textures[] = {
            /*{ "Black", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            } },
            { "White / Blue", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            } },
            { "Digi Green", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            } },
            { "Desert Digi", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            } },
            { "Rescue", "med", {
                "textures\OrcaRescue.jpg"
            } },
			{ "State Police", "cop", {
                "textures\policeorc.jpg"
            } },
			{ "Life Saver", "med", {
                "textures\westpacorc.jpg"
            } },
			{ "Seven News", "civ", {
                "textures\sevenorc.jpg"
            } },
			{ "Nine News", "civ", {
                "textures\nineorc.jpg"
            } }*/
			
			{ "Black", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            }, "" },
            { "White / Blue", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            }, "" },
            { "Digi Green", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            }, "" },
            { "Desert Digi", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            }, "" },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            }, "" }
        };
    };

    class B_SDV_01_F {
        vItemSpace = 50;
        licenses[] = { {"boat"}, {"cg"}, {""}, {""} };//license_civ_boat || {license_cop_cg}
        price = 150000;
        textures[] = {};
    };

        class C_Van_01_fuel_F {
        vItemSpace = 20;
        vFuelSpace = 19500;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };//license_civ_trucking
        price = 60000;
        textures[] = {
            { "White", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_co.paa"
            } },
            { "Red", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_red_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_red_co.paa"
            } }
        };
    };

    class I_Truck_02_fuel_F {
        vItemSpace = 40;
        vFuelSpace = 42000;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };//license_civ_trucking
        price = 200000;
        textures[] = {
            { "White", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_fuel_co.paa"
            } }
        };
    };

    class B_Truck_01_fuel_F {
        vItemSpace = 50;
        vFuelSpace = 50000;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };//license_civ_trucking
        price = 5500000;
        textures[] = {};
    };
	
	// Apex DLC
    class C_Plane_Civil_01_F {
        vItemSpace = 75;
		licenses[] = { {"pilot" }, {""}, {""}, {""} };//license_civ_pilot
        price = 6000000;
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
        vItemSpace = 100;
        licenses[] = { {"boat" }, {""}, {""}, {""} };//license_civ_boat
        price = 22000;
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
        vItemSpace = 30;
        licenses[] = { {"boat" }, {""}, {""}, {""} };//license_civ_boat
        price = 2500;
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
        vItemSpace = 85;
		licenses[] = { {"boat" }, {""}, {""}, {""} };//license_civ_boat
        price = 1000000;
        textures[] = { };
    };

    class O_T_MRAP_02_ghex_F {
        vItemSpace = 85;
        licenses[] = { {"" }, {"cg"}, {""}, {""} };//license_cop_cg
        price = 20000;
        textures[] = { };
    };
	
	class O_T_MRAP_02_hmg_ghex_F {
        vItemSpace = 45;
        licenses[] = { {"boat" }, {""}, {""}, {""} };//license_civ_boat
        price = 5000;
        textures[] = { };
    };
	
	class O_T_Truck_03_transport_ghex_F {
        vItemSpace = 85;
        licenses[] = { {"boat" }, {""}, {""}, {""} };//license_civ_boat
        price = 10000;
        textures[] = { };
    };

    class O_T_Truck_03_covered_ghex_F {
        vItemSpace = 85;
        licenses[] = { {"" }, {"cg"}, {""}, {""} };//license_cop_cg
        price = 20000;
        textures[] = { };
    };
	
	class O_T_Truck_03_fuel_ghex_F {
        vItemSpace = 45;
        licenses[] = { {"boat" }, {""}, {""}, {""} };//license_civ_boat
        price = 5000;
        textures[] = { };
    };
	
	class O_T_Truck_03_device_ghex_F {
        vItemSpace = 85;
        licenses[] = { {"boat" }, {""}, {""}, {""} };//license_civ_boat
        price = 10000;
        textures[] = { };
    };

    class O_T_Truck_03_ammo_ghex_F {
        vItemSpace = 85;
        licenses[] = { {"" }, {"cg"}, {""}, {""} };//license_cop_cg
        price = 20000;
        textures[] = { };
    };
	
	class C_Heli_light_01_ion_F {
        vItemSpace = 45;
        licenses[] = { {"boat" }, {""}, {""}, {""} };//license_civ_boat
        price = 5000;
        textures[] = { };
    };
	
	class C_Heli_light_01_wasp_F {
        vItemSpace = 85;
        licenses[] = { {"boat" }, {""}, {""}, {""} };//license_civ_boat
        price = 10000;
        textures[] = { };
    };

    class B_CTRG_Heli_Transport_01_tropic_F {
        vItemSpace = 85;
        licenses[] = { {"" }, {"cg"}, {""}, {""} };//license_cop_cg
        price = 20000;
        textures[] = { };
    };
	
	class B_T_VTOL_01_vehicle_olive_F {
        vItemSpace = 45;
        licenses[] = { {"boat" }, {""}, {""}, {""} };//license_civ_boat
        price = 5000;
        textures[] = { };
    };	
};