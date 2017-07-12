/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*/
class VirtualShops {
    //Virtual Shops
    class market {
        name = "STR_Shops_Market";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "waterBottle", "rabbit", "apple", "peach", "ananas", "kokosnuss", "bananen", "apfelsaft", "pfirsichsaft", "ananassaft", "kokosnussmilch", "bananensaft", "pina_colada", "redgull", "tbacon", "pickaxe", "toolkit", "fuelFull", "storagesmall", "storagebig" };
    };

    class med_market {
        name = "STR_Shops_Market";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "toolkit", "fuelFull", "peach", "defibrillator" };
    };
	
	class apotheke {
        name = "STR_Shops_apotheke";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "schmerzmittel" };
    };
	
	class jager {
        name = "STR_Shops_Jäger";
        side = "civ";
        license = "jagd";
        level[] = { "", "", -1, "" };
        items[] = { "rabbit_raw", "hen_raw", "rooster_raw", "sheep_raw", "goat_raw", "rabbit", "hen", "rooster", "sheep", "goat" };
    };
	
    class rebel {
        name = "STR_Shops_Rebel";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "toolkit", "fuelFull", "peach", "boltcutter", "blastingcharge", "kabelbinder", "gpstracker" };
    };

    class gang {
        name = "STR_Shops_Gang";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "toolkit", "fuelFull", "peach", "boltcutter", "blastingcharge", "kabelbinder" };
    };

    class wongs {
        name = "STR_Shops_Wongs";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "turtle_soup", "turtle_raw" };
    };
	
	class altiskom {
        name = "STR_Shops_Altiskom";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "bambusleitung" };
    };

    class coffee {
        name = "STR_Shops_Coffee";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "coffee", "donuts" };
    };

    class f_station_coffee {
        name = "STR_Shop_Station_Coffee";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "coffee", "donuts", "redgull", "toolkit", "fuelFull"};
    };

    class drugdealer {
        name = "STR_Shops_DrugDealer";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "cocaine_processed", "heroin_processed", "marijuana", "schwarzpulver", "polenboeller", "tabak", "zigaretten", "korallen", "korallenketten" };
    };
	
	class terrorkeller {
        name = "STR_Shop_Terrorkeller";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "bombenkopf", "atombombe"};
    };
	
	class tabakwaren {
        name = "STR_Shop_Tabakwaren";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "tabak", "zigaretten"};
    };

    class oil {
        name = "STR_Shops_Oil";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "oel", "fuelFull", "diesel" };
    };

    class fishmarket {
        name = "STR_Shops_FishMarket";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "salema_raw", "salema", "ornate_raw", "ornate", "mackerel_raw", "mackerel", "tuna_raw", "tuna", "mullet_raw", "mullet", "catshark_raw", "catshark" };
    };

    class glass {
        name = "STR_Shops_Glass";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "glass" };
    };

    class metall  {
        name = "STR_Shops_Minerals";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "eisen", "kupfer", "alu", "platin" };
    };

    class juwelier {
        name = "STR_Shops_Juwelier";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "diamond_uncut", "diamond_cut", "juwelen","krone"};
    };

    class salt {
        name = "STR_Shops_Salt";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "salt_refined" };
    };

    class baustoff {
        name = "STR_Shops_Baustoff";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "marmor_roh", "marmor", "lava", "obsidian" };
    };

    class gold {
        name = "STR_Shops_Gold";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "goldbar" };
    };
	
	class kraftwerk {
        name = "STR_Shops_Kraftwerk";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "plutonium", "brennstab" };
    };
	
	class uranium {
        name = "STR_Shops_Uranium";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "uranErz", "uranI", "uranII", "uranIII", "uranIV" };
    };
	
	class schwarzmarkt {
        name = "STR_Shops_Schwarzmarkt";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "mikroProzessor", "implantatNormal" };
    };
	
    class cop {
        name = "STR_Shops_Cop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "donuts", "coffee", "gpstracker", "spikeStrip", "mauer", "blitzer", "bunker", "flutlicht", "licht", "plastik", "schranke", "waterBottle", "rabbit", "apple", "redgull", "toolkit", "fuelFull", "defusekit", "defibrillator" };
    };
};

/*
*    CLASS:
*        variable = Variable Name
*        displayName = Item Name
*        weight = Item Weight
*        buyPrice = Item Buy Price
*        sellPrice = Item Sell Price
*        illegal = Illegal Item
*        edible = Item Edible (-1 = Disabled)
*        icon = Item Icon
*        processedItem = Processed Item
*/
class VirtualItems {
    //Virtual Items

    //Misc

    class schmerzmittel {
        variable = "schmerzmittel";
        displayName = "STR_Item_Schmerzmittel";
        weight = 1;
        buyPrice = 5500;
        sellPrice = 1000;
        illegal = false;
        edible = 1;
        icon = "";
    };

    class kabelbinder {
        variable = "kabelbinder";
        displayName = "STR_Item_Kabel";
        weight = 1;
        buyPrice = 5500;
        sellPrice = 1000;
        illegal = true;
        edible = -1;
        icon = "icons\ziptie.paa";
    };

    class pickaxe {
        variable = "pickaxe";
        displayName = "STR_Item_Pickaxe";
        weight = 2;
        buyPrice = 750;
        sellPrice = 350;
        illegal = false;
        edible = -1;
        icon = "icons\ico_pickaxe.paa";
    };

    class defibrillator {
        variable = "defibrillator";
        displayName = "STR_Item_Defibrillator";
        weight = 4;
        buyPrice = 900;
        sellPrice = 450;
        illegal = false;
        edible = -1;
        icon = "icons\ico_defibrillator.paa";
    };

    class toolkit {
        variable = "toolkit";
        displayName = "STR_Item_Toolkit";
        weight = 4;
        buyPrice = 350;
        sellPrice = 100;
        illegal = false;
        edible = -1;
        icon = "\a3\weapons_f\items\data\UI\gear_toolkit_ca.paa";
    };
	
	class mikroProzessor {
        variable = "mikroProzessor";
        displayName = "STR_Item_mikroProzessor";
        weight = 10;
        buyPrice = -1;
        sellPrice = 25000;
        illegal = true;
        edible = -1;
        icon = "";
    };
	
	class implantatNormal {
        variable = "implantatNormal";
        displayName = "STR_Item_implantat_normal";
        weight = 60;
        buyPrice = -1;
        sellPrice = 265000;
        illegal = true;
        edible = -1;
        icon = "\a3\weapons_f\items\data\UI\gear_toolkit_ca.paa";
    };

    class fuelEmpty {
        variable = "fuelEmpty";
        displayName = "STR_Item_FuelE";
        weight = 2;
        buyPrice = -1;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        icon = "icons\ico_fuelEmpty.paa";
    };

    class fuelFull {
        variable = "fuelFull";
        displayName = "STR_Item_FuelF";
        weight = 5;
        buyPrice = 850;
        sellPrice = 500;
        illegal = false;
        edible = -1;
        icon = "icons\ico_fuel.paa";
    };

    class spikeStrip {
        variable = "spikeStrip";
        displayName = "STR_Item_SpikeStrip";
        weight = 1;
        buyPrice = 2500;
        sellPrice = 1200;
        illegal = true;
        edible = -1;
        icon = "icons\ico_spikeStrip.paa";
    };
	
	class blitzer {
        variable = "blitzer";
        displayName = "STR_Item_blitzer";
        weight = 1;
        buyPrice = 2500;
        sellPrice = 1200;
        illegal = true;
        edible = -1;
        icon = "";
    };
	class bunker {
        variable = "bunker";
        displayName = "STR_Item_bunker";
        weight = 1;
        buyPrice = 2500;
        sellPrice = 1200;
        illegal = true;
        edible = -1;
        icon = "";
    };
	class flutlicht {
        variable = "flutlicht";
        displayName = "STR_Item_flutlicht";
        weight = 1;
        buyPrice = 2500;
        sellPrice = 1200;
        illegal = true;
        edible = -1;
        icon = "";
    };
	class licht {
        variable = "licht";
        displayName = "STR_Item_licht";
        weight = 1;
        buyPrice = 2500;
        sellPrice = 1200;
        illegal = true;
        edible = -1;
        icon = "";
    };
	class mauer {
        variable = "mauer";
        displayName = "STR_Item_mauer";
        weight = 1;
        buyPrice = 2500;
        sellPrice = 1200;
        illegal = true;
        edible = -1;
        icon = "";
    };
	class plastik {
        variable = "plastik";
        displayName = "STR_Item_plastik";
        weight = 1;
        buyPrice = 2500;
        sellPrice = 1200;
        illegal = true;
        edible = -1;
        icon = "";
    };
	class schranke {
        variable = "schranke";
        displayName = "STR_Item_schranke";
        weight = 1;
        buyPrice = 2500;
        sellPrice = 1200;
        illegal = true;
        edible = -1;
        icon = "";
    };

    class lockpick {
        variable = "lockpick";
        displayName = "STR_Item_Lockpick";
        weight = 1;
        buyPrice = 150;
        sellPrice = 75;
        illegal = true;
        edible = -1;
        icon = "icons\ico_lockpick.paa";
    };

    class goldbar {
        variable = "goldBar";
        displayName = "STR_Item_GoldBar";
        weight = 12;
        buyPrice = -1;
        sellPrice = 95000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_goldBar.paa";
    };
	
	class goldbauteil {
        variable = "goldbautteil";
        displayName = "STR_Item_Goldbauteil";
        weight = 5;
        buyPrice = -1;
        sellPrice = 1000000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_goldBar.paa";
    };
	
    class blastingcharge {
        variable = "blastingCharge";
        displayName = "STR_Item_BCharge";
        weight = 15;
        buyPrice = 35000;
        sellPrice = 10000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_blastingCharge.paa";
    };
	
	class speedbomb {
        variable = "speedbomb";
        displayName = "STR_Item_Speedbomb";
        weight = 15;
        buyPrice = 300000;
        sellPrice = 10000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_speedbomb.paa";
    };

    class boltcutter {
        variable = "boltCutter";
        displayName = "STR_Item_BCutter";
        weight = 5;
        buyPrice = 7500;
        sellPrice = 1000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_boltCutter.paa";
    };
	
	class gpstracker {
        variable = "gpstracker";
        displayName = "STR_Item_GPSTracker";
        weight = 10;
        buyPrice = 70000;
        sellPrice = 5000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_boltCutter.paa";
    };

    class defusekit {
        variable = "defuseKit";
        displayName = "STR_Item_DefuseKit";
        weight = 2;
        buyPrice = 2500;
        sellPrice = 2000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_defuseKit.paa";
    };

    class storagesmall {
        variable = "storageSmall";
        displayName = "STR_Item_StorageBS";
        weight = 5;
        buyPrice = 75000;
        sellPrice = 50000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_storageSmall.paa";
    };

    class storagebig {
        variable = "storageBig";
        displayName = "STR_Item_StorageBL";
        weight = 10;
        buyPrice = 150000;
        sellPrice = 125000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_storageBig.paa";
    };

    //Mined Items
    class oelu {
        variable = "oelu";
        displayName = "STR_Item_OilU";
        weight = 10;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_oilUnprocessed.paa";
    };

    class oel {
        variable = "oel";
        displayName = "STR_Item_OilP";
        weight = 9;
        buyPrice = 10000;
        sellPrice = 4500;
        illegal = false;
        edible = -1;
        icon = "icons\ico_oilProcessed.paa";
    };
	
	 class diesel {
        variable = "diesel";
        displayName = "STR_Item_Diesel";
        weight = 8;
        buyPrice = 12000;
        sellPrice = 5600;
        illegal = false;
        edible = -1;
        icon = "icons\ico_oilProcessed.paa";
    };

    class kupfererz {
        variable = "kupfererz";
        displayName = "STR_Item_Kupfererz";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copperOre.paa";
    };

    class kupfer {
        variable = "kupfer";
        displayName = "STR_Item_CopperIngot";
        weight = 4;
        buyPrice = 3000;
        sellPrice = 1500;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copper.paa";
    };

    class eisenerz {
        variable = "eisenerz";
        displayName = "STR_Item_Eisenerz";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_ironOre.paa";
    };
	
    class eisen {
        variable = "eisen";
        displayName = "STR_Item_IronIngot";
        weight = 4;
        buyPrice = 2500;
        sellPrice = 1200;
        illegal = false;
        edible = -1;
        icon = "icons\ico_iron.paa";
    };
	
	class aluerz {
        variable = "aluerz";
        displayName = "STR_Item_AluErz";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "";
    };

    class alu {
        variable = "alu";
        displayName = "STR_Item_AluBarren";
        weight = 6;
        buyPrice = 8000;
        sellPrice = 2700;
        illegal = false;
        edible = -1;
        icon = "";
    };
	
	class platinerz {
        variable = "platinerz";
        displayName = "STR_Item_PlatinErz";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "";
    };

    class platin {
        variable = "platin";
        displayName = "STR_Item_PlatinBarren";
        weight = 6;
        buyPrice = 8000;
        sellPrice = 3500;
        illegal = false;
        edible = -1;
        icon = "";
    };
	
    class salt_unrefined {
        variable = "saltUnrefined";
        displayName = "STR_Item_Salt";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_saltUnprocessed.paa";
    };

    class salt_refined {
        variable = "saltRefined";
        displayName = "STR_Item_SaltR";
        weight = 2;
        buyPrice = 5000;
        sellPrice = 2500;
        illegal = false;
        edible = -1;
        icon = "icons\ico_saltProcessed.paa";
    };

    class sand {
        variable = "sand";
        displayName = "STR_Item_Sand";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_sand.paa";
    };

    class glass {
        variable = "glass";
        displayName = "STR_Item_Glass";
        weight = 3;
        buyPrice = 8000;
        sellPrice = 2000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_glass.paa";
    };
	
	class bambus {
        variable = "bambus";
        displayName = "STR_Item_Bambus";
        weight = 2;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "";
    };

    class bambusleitung {
        variable = "bambusleitung";
        displayName = "STR_Item_Bambusleitung";
        weight = 1;
        buyPrice = 2000;
        sellPrice = 1250;
        illegal = false;
        edible = -1;
        icon = "";
    };

    class diamond_uncut {
        variable = "diamondUncut";
        displayName = "STR_Item_DiamondU";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_diamondUncut.paa";
    };

    class diamond_cut {
        variable = "diamondCut";
        displayName = "STR_Item_DiamondC";
        weight = 4;
        buyPrice = 8000;
        sellPrice = 2900;
        illegal = false;
        edible = -1;
        icon = "icons\ico_diamondCut.paa";
    };
	
	class krone {
        variable = "krone";
        displayName = "STR_Item_PlatinKrone";
        weight = 10;
        buyPrice = 60000;
        sellPrice = 24000;
        illegal = false;
        edible = -1;
        icon = "";
    };
	
	class schurfgut {
        variable = "schurfgut";
        displayName = "STR_Item_Schurfgut";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_diamondUncut.paa";
    };

    class juwelen {
        variable = "juwelen";
        displayName = "STR_Item_Juwelen";
        weight = 4;
        buyPrice = 6500;
        sellPrice = 3100;
        illegal = false;
        edible = -1;
        icon = "icons\ico_diamondCut.paa";
    };

    class marmorRoh {
        variable = "marmorRoh";
        displayName = "STR_Item_MarmorRoh";
        weight = 7;
        buyPrice = 1200;
        sellPrice = 500;
        illegal = false;
        edible = -1;
        icon = "icons\ico_rock.paa";
    };

    class marmor {
        variable = "marmor";
        displayName = "STR_Item_Marmor";
        weight = 5;
        buyPrice = 7000;
        sellPrice = 3500;
        illegal = false;
        edible = -1;
        icon = "icons\ico_cement.paa";
    };
	
	class lava {
        variable = "lava";
        displayName = "STR_Item_Lava";
        weight = 7;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_rock.paa";
    };

    class obsidian {
        variable = "obsidian";
        displayName = "STR_Item_Obsidian";
        weight = 5;
        buyPrice = 8000;
        sellPrice = 3900;
        illegal = false;
        edible = -1;
        icon = "icons\ico_cement.paa";
    };


    //Drugs
	
    class heroin_unprocessed {
        variable = "heroinUnprocessed";
        displayName = "STR_Item_HeroinU";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_heroinUnprocessed.paa";
        processedItem = "heroin_processed";
    };

    class heroin_processed {
        variable = "heroinProcessed";
        displayName = "STR_Item_HeroinP";
        weight = 4;
        buyPrice = -1;
        sellPrice = 4200;
        illegal = true;
        edible = -1;
        icon = "icons\ico_heroinProcessed.paa";
    };

    class cannabis {
        variable = "cannabis";
        displayName = "STR_Item_Cannabis";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cannabis.paa";
        processedItem = "marijuana";
    };

    class marijuana {
        variable = "marijuana";
        displayName = "STR_Item_Marijuana";
        weight = 3;
        buyPrice = 7000;
        sellPrice = 3000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_marijuana.paa";
    };
	
	class schwarzpulver {
        variable = "schwarzpulver";
        displayName = "STR_Item_Schwarzpulver";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "";
        processedItem = "polenBoeller";
    };

    class polenboeller {
        variable = "polenboeller";
        displayName = "STR_Item_Polen_Boeller";
        weight = 5;
        buyPrice = 7000;
        sellPrice = 3000;
        illegal = true;
        edible = -1;
        icon = "";
    };
	
	class tabak {
        variable = "tabak";
        displayName = "STR_Item_Tabak";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "";
		processedItem = "zigaretten";
    };
	
	class zigaretten {
        variable = "zigaretten";
        displayName = "STR_Item_Zigaretten";
        weight = 3;
        buyPrice = 3000;
        sellPrice = 1400;
        illegal = true;
        edible = -1;
        icon = "";
    };
	
	class korallen {
        variable = "korallen";
        displayName = "STR_Item_Korallen";
        weight = 10;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "";
        processedItem = "korallenketten";
    };

    class korallenketten {
        variable = "korallenketten";
        displayName = "STR_Item_Korallenketten";
        weight = 8;
        buyPrice = 30000;
        sellPrice = 14000;
        illegal = true;
        edible = -1;
        icon = "";
    };

    class cocaine_unprocessed {
        variable = "cocaineUnprocessed";
        displayName = "STR_Item_CocaineU";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cocaineUnprocessed.paa";
        processedItem = "cocaine_processed";
    };

    class cocaine_processed {
        variable = "cocaineProcessed";
        displayName = "STR_Item_CocaineP";
        weight = 4;
        buyPrice = 12500;
        sellPrice = 5200;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cocaineProcessed.paa";
    };
	
	class meth_unprocessed {
        variable = "methUnprocessed";
        displayName = "STR_Item_MethU";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "";
        processedItem = "meth_processed";
    };

	class meth_processed {
        variable = "methProcessed";
        displayName = "STR_Item_MethP";
        weight = 3;
        buyPrice = 8000;
        sellPrice = 3100;
        illegal = true;
        edible = -1;
        icon = "";
    };
	
	class uranerz {
        variable = "uranerz";
        displayName = "STR_Item_Uranerz";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "";
        processedItem = "cocaine_processed";
    };
	
	class uranI {
        variable = "uranI";
        displayName = "STR_Item_UranI";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "";
		processedItem = "uranIV";
    };
	
    class uranII {
        variable = "uranII";
        displayName = "STR_Item_UranII";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "";
		processedItem = "uranIV";
    };
	
	class uranIII {
        variable = "uranIII";
        displayName = "STR_Item_UranIII";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "";
		processedItem = "uranIV";
    };

    class uranIV {
        variable = "uranIV";
        displayName = "STR_Item_UranIV";
        weight = 5;
        buyPrice = -1;
        sellPrice = 10000;
        illegal = true;
        edible = -1;
        icon = "";
		processedItem = "brennstab";
    };
	
	class plutonium {
        variable = "plutonium";
        displayName = "STR_Item_Plutonium";
        weight = 4;
        buyPrice = 30000;
        sellPrice = 10000;
        illegal = true;
        edible = -1;
        icon = "";
		processedItem = "brennstab";
    };
	
	class brennstab {
        variable = "brennstab";
        displayName = "STR_Item_Brennstab";
        weight = 5;
        buyPrice = 40000;
        sellPrice = 900000;
        illegal = true;
        edible = -1;
        icon = "";
    };
	
	class bombenkopf {
        variable = "bombenkopf";
        displayName = "STR_Item_Bombenkopf";
        weight = 40;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "";
		processedItem = "atombombe";
    };
	
	class atombombe {
        variable = "atombombe";
        displayName = "STR_Item_Atombombe";
        weight = 100;
        buyPrice = 1500000;
        sellPrice = 650000;
        illegal = true;
        edible = -1;
        icon = "";
    };

    //Drink
    class redgull {
        variable = "redgull";
        displayName = "STR_Item_RedGull";
        weight = 1;
        buyPrice = 1500;
        sellPrice = 200;
        illegal = false;
        edible = 100;
        icon = "icons\ico_redgull.paa";
    };

    class coffee {
        variable = "coffee";
        displayName = "STR_Item_Coffee";
        weight = 1;
        buyPrice = 10;
        sellPrice = 5;
        illegal = false;
        edible = 100;
        icon = "icons\ico_coffee.paa";
    };

    class waterBottle {
        variable = "waterBottle";
        displayName = "STR_Item_WaterBottle";
        weight = 1;
        buyPrice = 10;
        sellPrice = 5;
        illegal = false;
        edible = 100;
        icon = "icons\ico_waterBottle.paa";
    };

    //Food
    class apple {
        variable = "apple";
        displayName = "STR_Item_Apple";
        weight = 2;
        buyPrice = 160;
        sellPrice = 80;
        illegal = false;
        edible = 10;
        icon = "icons\ico_apple.paa";
    };

    class peach {
        variable = "peach";
        displayName = "STR_Item_Peach";
        weight = 2;
        buyPrice = 160;
        sellPrice = 80;
        illegal = false;
        edible = 10;
        icon = "icons\ico_peach.paa";
    };
	
	class ananas {
        variable = "ananas";
        displayName = "STR_Item_Ananas";
        weight = 2;
        buyPrice = 160;
        sellPrice = 80;
        illegal = false;
        edible = 10;
        icon = "";
    };

    class bananen {
        variable = "bananen";
        displayName = "STR_Item_Bananen";
        weight = 2;
        buyPrice = 160;
        sellPrice = 80;
        illegal = false;
        edible = 10;
        icon = "";
    };
	
	class kokosnuss {
        variable = "kokosnuss";
        displayName = "STR_Item_Kokosnuss";
        weight = 2;
        buyPrice = 160;
        sellPrice = 80;
        illegal = false;
        edible = 10;
        icon = "";
    };
	
	class apfelsaft {
        variable = "apfelsaft";
        displayName = "STR_Item_Apfelsaft";
        weight = 1;
        buyPrice = 400;
        sellPrice = 200;
        illegal = false;
        edible = 10;
        icon = "";
    };

    class pfirsichsaft {
        variable = "pfirsichsaft";
        displayName = "STR_Item_Pfirsichsaft";
        weight = 1;
        buyPrice = 400;
        sellPrice = 200;
        illegal = false;
        edible = 10;
        icon = "";
    };
	
	class ananassaft {
        variable = "ananassaft";
        displayName = "STR_Item_Ananassaft";
        weight = 1;
        buyPrice = 400;
        sellPrice = 200;
        illegal = false;
        edible = 10;
        icon = "";
    };

    class bananensaft {
        variable = "bananensaft";
        displayName = "STR_Item_Bananensaft";
        weight = 1;
        buyPrice = 400;
        sellPrice = 200;
        illegal = false;
        edible = 10;
        icon = "";
    };
	
	class kokosnussmilch {
        variable = "kokosnussMilch";
        displayName = "STR_Item_Kokosnussmilch";
        weight = 1;
        buyPrice = 400;
        sellPrice = 200;
        illegal = false;
        edible = 10;
        icon = "";
    };
	
	class pina_colada {
        variable = "pinaColada";
        displayName = "STR_Item_Pina_Colada";
        weight = 1;
        buyPrice = 1200;
        sellPrice = 600;
        illegal = false;
        edible = 10;
        icon = "";
    };
	
    class tbacon {
        variable = "tbacon";
        displayName = "STR_Item_TBacon";
        weight = 1;
        buyPrice = 75;
        sellPrice = 25;
        illegal = false;
        edible = 40;
        icon = "icons\ico_tBacon.paa";
    };

    class donuts {
        variable = "donuts";
        displayName = "STR_Item_Donuts";
        weight = 1;
        buyPrice = 120;
        sellPrice = 60;
        illegal = false;
        edible = 30;
        icon = "icons\ico_donuts.paa";
    };

    class rabbit_raw {
        variable = "rabbitRaw";
        displayName = "STR_Item_RabbitRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 95;
        illegal = false;
        edible = -1;
        icon = "icons\ico_rabbitRaw.paa";
    };

    class rabbit {
        variable = "rabbit";
        displayName = "STR_Item_Rabbit";
        weight = 1;
        buyPrice = 150;
        sellPrice = 115;
        illegal = false;
        edible = 20;
        icon = "icons\ico_rabbit.paa";
    };

    class salema_raw {
        variable = "salemaRaw";
        displayName = "STR_Item_SalemaRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 45;
        illegal = false;
        edible = -1;
        icon = "icons\ico_salemaRaw.paa";
    };

    class salema {
        variable = "salema";
        displayName = "STR_Item_Salema";
        weight = 1;
        buyPrice = 75;
        sellPrice = 55;
        illegal = false;
        edible = 30;
        icon = "icons\ico_cookedFish.paa";
    };

    class ornate_raw {
        variable = "ornateRaw";
        displayName = "STR_Item_OrnateRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 40;
        illegal = false;
        edible = -1;
        icon = "icons\ico_ornateRaw.paa";
    };

    class ornate {
        variable = "ornate";
        displayName = "STR_Item_Ornate";
        weight = 1;
        buyPrice = 175;
        sellPrice = 150;
        illegal = false;
        edible = 25;
        icon = "icons\ico_cookedFish.paa";
    };

    class mackerel_raw {
        variable = "mackerelRaw";
        displayName = "STR_Item_MackerelRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 175;
        illegal = false;
        edible = -1;
        icon = "icons\ico_mackerelRaw.paa";
    };

    class mackerel {
        variable = "mackerel";
        displayName = "STR_Item_Mackerel";
        weight = 2;
        buyPrice = 250;
        sellPrice = 200;
        illegal = false;
        edible = 30;
        icon = "icons\ico_cookedFish.paa";
    };

    class tuna_raw {
        variable = "tunaRaw";
        displayName = "STR_Item_TunaRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 700;
        illegal = false;
        edible = -1;
        icon = "icons\ico_tunaRaw.paa";
    };

    class tuna {
        variable = "tuna";
        displayName = "STR_Item_Tuna";
        weight = 3;
        buyPrice = 1250;
        sellPrice = 1000;
        illegal = false;
        edible = 100;
        icon = "icons\ico_cookedFish.paa";
    };

    class mullet_raw {
        variable = "mulletRaw";
        displayName = "STR_Item_MulletRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 250;
        illegal = false;
        edible = -1;
        icon = "icons\ico_mulletRaw.paa";
    };

    class mullet {
        variable = "mullet";
        displayName = "STR_Item_Mullet";
        weight = 2;
        buyPrice = 600;
        sellPrice = 400;
        illegal = false;
        edible = 80;
        icon = "icons\ico_cookedFish.paa";
    };

    class catshark_raw {
        variable = "catsharkRaw";
        displayName = "STR_Item_CatSharkRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 300;
        illegal = false;
        edible = -1;
        icon = "icons\ico_catsharkRaw.paa";
    };

    class catshark {
        variable = "catshark";
        displayName = "STR_Item_CatShark";
        weight = 3;
        buyPrice = 750;
        sellPrice = 500;
        illegal = false;
        edible = 100;
        icon = "icons\ico_cookedFish.paa";
    };

    class turtle_raw {
        variable = "turtleRaw";
        displayName = "STR_Item_TurtleRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 3000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_turtleRaw.paa";
    };

    class turtle_soup {
        variable = "turtleSoup";
        displayName = "STR_Item_TurtleSoup";
        weight = 2;
        buyPrice = 10000;
        sellPrice = 7500;
        illegal = false;
        edible = 100;
        icon = "icons\ico_turtleSoup.paa";
    };

    class hen_raw {
        variable = "henRaw";
        displayName = "STR_Item_HenRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 650;
        illegal = false;
        edible = -1;
        icon = "icons\ico_wholeChickenRaw.paa";
    };

    class hen {
        variable = "hen";
        displayName = "STR_Item_Hen";
        weight = 1;
        buyPrice = 1150;
        sellPrice = 850;
        illegal = false;
        edible = 65;
        icon = "icons\ico_wholeChicken.paa";
    };

    class rooster_raw {
        variable = "roosterRaw";
        displayName = "STR_Item_RoosterRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 650;
        illegal = false;
        edible = -1;
        icon = "icons\ico_chickenDrumstickRaw.paa";
    };

    class rooster {
        variable = "rooster";
        displayName = "STR_Item_Rooster";
        weight = 2;
        buyPrice = 900;
        sellPrice = 850;
        illegal = false;
        edible = 45;
        icon = "icons\ico_chickenDrumstick.paa";
    };

    class sheep_raw {
        variable = "sheepRaw";
        displayName = "STR_Item_SheepRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 950;
        illegal = false;
        edible = -1;
        icon = "icons\ico_lambChopRaw.paa";
    };

    class sheep {
        variable = "sheep";
        displayName = "STR_Item_Sheep";
        weight = 2;
        buyPrice = 2550;
        sellPrice = 2150;
        illegal = false;
        edible = 100;
        icon = "icons\ico_lambChop.paa";
    };

    class goat_raw {
        variable = "goatRaw";
        displayName = "STR_Item_GoatRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 1150;
        illegal = false;
        edible = -1;
        icon = "icons\ico_muttonLegRaw.paa";
    };

    class goat {
        variable = "goat";
        displayName = "STR_Item_Goat";
        weight = 2;
        buyPrice = 2750;
        sellPrice = 2350;
        illegal = false;
        edible = 100;
        icon = "icons\ico_muttonLeg.paa";
    };
};