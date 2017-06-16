/*
*    class:
*        variable = Variable Name
*        displayName = License Name
*        price = License Price
*        illegal = Illegal License
*        side = side indicator
*/

/*
class  {
        variable = "";
        displayName = "";
        price = ;
        illegal = false;
        side = "civ";
    };
*/

class Licenses {
    //Civilian Licenses
    class driver {
        variable = "driver";
        displayName = "STR_License_Driver";
        price = 1000;
        illegal = false;
        side = "civ";
    };

    class boat {
        variable = "boat";
        displayName = "STR_License_Boat";
        price = 25000;
        illegal = false;
        side = "civ";
    };

    class pilot {
        variable = "pilot";
        displayName = "STR_License_Pilot";
        price = 150000;
        illegal = false;
        side = "civ";
    };

    class trucking {
        variable = "trucking";
        displayName = "STR_License_Truck";
        price = 25000;
        illegal = false;
        side = "civ";
    };

    class gun {
        variable = "gun";
        displayName = "Waffenschein";
        price = 60000;
        illegal = false;
        side = "civ";
    };

    class dive {
        variable = "dive";
        displayName = "Taucherschein";
        price = 14000;
        illegal = false;
        side = "civ";
    };

    class home {
        variable = "home";
        displayName = "Hauseigentümer Lizenz";
        price = 500000;
        illegal = false;
        side = "civ";
    };

    //Processing Licenses
    class oil {
        variable = "license_civ_oil";
        displayName = "ÖL Verarbeitung";
        price = 65000;
        illegal = false;
        side = "civ";
    };

	class oilu {
        variable = "life_inv_oilu";
        displayName = "Rohöl";
        price = 65000;
        illegal = false;
        side = "civ";
    };

	class oilp {
        variable = "life_inv_oilp";
        displayName = "Euro-Diesel";
        price = 65000;
        illegal = false;
        side = "civ";
    };

    class diamond {
        variable = "diamond";
        displayName = "Diamant Verarbeitung";
        price = 80000;
        illegal = false;
        side = "civ";
    };

	class diamondUncut {
        variable = "life_inv_diamond";
        displayName = "Diamant Uncut";
        price = 80000;
        illegal = false;
        side = "civ";
    };

	class diamondCut {
        variable = "life_inv_diamondr";
        displayName = "Diamant Cut";
        price = 80000;
        illegal = false;
        side = "civ";
    };

    class salt {
        variable = "salt";
        displayName = "Salzerz";
        price = 55000;
        illegal = false;
        side = "civ";
    };

	class saltr {
        variable = "life_inv_saltr";
        displayName = "Salz";
        price = 55000;
        illegal = false;
        side = "civ";
    };

	class saltv {
        variable = "license_civ_salt";
        displayName = "Salz Verarbeitung";
        price = 55000;
        illegal = false;
        side = "civ";
    };

    class sand {
        variable = "sand";
        displayName = "Sand";
        price = 40000;
        illegal = false;
        side = "civ";
    };

	class sandv {
        variable = "license_civ_sand";
        displayName = "Sand Verarbeitung";
        price = 40000;
        illegal = false;
        side = "civ";
    };

    class iron {
        variable = "license_civ_iron";
        displayName = "Eisen Verarbeitung";
        price = 25000;
        illegal = false;
        side = "civ";
    };

	class ironr {
        variable = "life_inv_ironr";
        displayName = "Eisen Barren";
        price = 25000;
        illegal = false;
        side = "civ";
    };

	class ironore {
        variable = "life_inv_ironore";
        displayName = "Eisenerz";
        price = 25000;
        illegal = false;
        side = "civ";
    };

    class copper {
        variable = "license_civ_copper";
        displayName = "Kupfer Verarbeitung";
        price = 20000;
        illegal = false;
        side = "civ";
    };

	class copperr {
        variable = "life_inv_copperr";
        displayName = "Kupfer Barren";
        price = 20000;
        illegal = false;
        side = "civ";
    };

	class copperore {
        variable = "life_inv_copperore";
        displayName = "Kupfererz";
        price = 20000;
        illegal = false;
        side = "civ";
    };

    class cement {
        variable = "license_civ_cement";
        displayName = "Zement Mix Lizenz";
        price = 32000;
        illegal = false;
        side = "civ";
    };

	class cementm {
        variable = "life_inv_cement";
        displayName = "Marmorplatte";
        price = 32000;
        illegal = false;
        side = "civ";
    };

	class rock {
        variable = "life_inv_rock";
        displayName = "Marmor";
        price = 32000;
        illegal = false;
        side = "civ";
    };

	//@todo: Brauchen wir medizinisches Marijuana?
    /*class medmarijuana {
        variable = "medmarijuana";
        displayName = "STR_License_Medmarijuana";
        price = 15000;
        illegal = false;
        side = "civ";
    };*/

	class transport {
        variable = "license_civ_transport";
        displayName = "Transporteur Lizenz";
        price = 7500000;
        illegal = false;
        side = "civ";
    };

	class grapes {
        variable = "license_civ_grapes";
        displayName = "Wein Verarbeitung";
        price = 35000;
        illegal = false;
        side = "civ";
    };

	class wine {
        variable = "life_inv_wine";
        displayName = "Wein";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class grapesr {
        variable = "life_inv_grapes";
        displayName = "Trauben";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class peach {
        variable = "life_inv_peach";
        displayName = "Pfirsich";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class lockpick {
        variable = "life_inv_lockpick";
        displayName = "Dietrich";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class redgull {
        variable = "life_inv_redgull";
        displayName = "RedBull";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class bacon {
        variable = "life_inv_tbacon";
        displayName = "Tactical Bacon";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class glass {
        variable = "life_inv_glass";
        displayName = "Glas";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class pickaxe {
        variable = "life_inv_pickaxe";
        displayName = "Spitzhacke";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class bottles {
        variable = "life_inv_bottles";
        displayName = "Glass Flaschen";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class apple {
        variable = "life_inv_apple";
        displayName = "Apfel";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class rabbit {
        variable = "life_inv_rabbit";
        displayName = "Hasenfleisch";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class salema {
        variable = "life_inv_salema";
        displayName = "Salema Fleisch";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class ornate {
        variable = "life_inv_ornate";
        displayName = "Aufwendiges Fleisch";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class mackerel {
        variable = "life_inv_mackerel";
        displayName = "Makrele Fleisch";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class tuna {
        variable = "life_inv_tuna";
        displayName = "Thunfisch";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class mullet {
        variable = "life_inv_mullet";
        displayName = "Meeräsche Fleisch";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class catshark {
        variable = "life_inv_catshark";
        displayName = "Katzenhai Fleisch";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class turtle {
        variable = "life_inv_turtle";
        displayName = "Turtle Meat";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class fishingpoles {
        variable = "life_inv_fishingpoles";
        displayName = "Angel";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class water {
        variable = "life_inv_water";
        displayName = "Wasserflasche";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class coffee {
        variable = "life_inv_coffee";
        displayName = "Kaffee";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class turtlesoup {
        variable = "life_inv_turtlesoup";
        displayName = "Schildkröten Suppe";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class donuts {
        variable = "life_inv_donuts";
        displayName = "Donuts";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class fuelE {
        variable = "life_inv_fuelE";
        displayName = "Benzinkanister (leer)";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class fuelF {
        variable = "life_inv_fuelF";
        displayName = "Benzinkanister";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class spikeStrip {
        variable = "life_inv_spikeStrip";
        displayName = "Nagelband";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class goldbar {
        variable = "life_inv_goldbar";
        displayName = "Gold Barren";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class battery {
        variable = "life_inv_battery";
        displayName = "Telefon Batterie";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class storageb {
        variable = "life_inv_storage2";
        displayName = "Kiste (groß)";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class storagel {
        variable = "life_inv_storage1";
        displayName = "Kiste (klein)";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class boltcutter {
        variable = "life_inv_boltcutter";
        displayName = "Bolzen Schneider";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class painkillers {
        variable = "life_inv_painkillers";
        displayName = "Schmerzmittel";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class zipties {
        variable = "life_inv_zipties";
        displayName = "Kabelbinder";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class storagesmall {
        variable = "life_inv_storagesmall";
        displayName = "Small Storage Box";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class storagebig {
        variable = "life_inv_storagebig";
        displayName = "Large Storage Box";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class mauer {
        variable = "life_inv_mauer";
        displayName = "Strassensperre";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class schranke {
        variable = "life_inv_schranke";
        displayName = "Schranke";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class blitzer {
        variable = "life_inv_blitzer";
        displayName = "Platzierbarer Blitzer";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class plastik {
        variable = "life_inv_plastik";
        displayName = "Plastik Absperrung";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class bunker {
        variable = "life_inv_bunker";
        displayName = "Bunkerfundament";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class flutlicht {
        variable = "life_inv_flutlicht";
        displayName = "Flutlicht";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class licht {
        variable = "life_inv_licht";
        displayName = "Straßenlicht";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class yeast {
        variable = "life_inv_yeast";
        displayName = "Hefe";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class rye {
        variable = "life_inv_rye";
        displayName = "Roggen";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class hops {
        variable = "life_inv_hops";
        displayName = "Hopfen";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class whiskey {
        variable = "life_inv_whiskey";
        displayName = "Destillierter Whiskey";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class beerp {
        variable = "life_inv_beerp";
        displayName = "Fermentiertes Bier";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class bottledwhiskey {
        variable = "life_inv_bottledwhiskey";
        displayName = "Abgefüllter Whiskey";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class bottledbeer {
        variable = "life_inv_bottledbeer";
        displayName = "Abgefülltes Beer";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class ziege_roh {
        variable = "life_inv_ziege_roh";
        displayName = "Rohes Ziegenfleisch";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class hahn_roh {
        variable = "life_inv_hahn_roh";
        displayName = "Rohes Haehnchen";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class schaf_roh {
        variable = "life_inv_schaf_roh";
        displayName = "Rohes Lammfleisch";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class hase_roh {
        variable = "life_inv_hase_roh";
        displayName = "Rohes Hasenfleisch";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class ziege_ver {
        variable = "life_inv_ziege_ver";
        displayName = "Ziegenschmorbraten";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class hahn_ver {
        variable = "life_inv_hahn_ver";
        displayName = "Brathaehnchen";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class schaf_ver {
        variable = "life_inv_schaf_ver";
        displayName = "Lammbraten";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class hase_ver {
        variable = "life_inv_hase_ver";
        displayName = "Hasenbraten";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class jagdmesser {
        variable = "life_inv_jagdmesser";
        displayName = "Jagdmesser";
        price = 1;
        illegal = false;
        side = "civ";
    };

	class stiller {
        variable = "license_civ_stiller";
        displayName = "Destillier Lizenz";
        price = 25000;
        illegal = false;
        side = "civ";
    };

	class liquor {
        variable = "license_civ_liquor";
        displayName = "Schnaps Lizenz";
        price = 135000;
        illegal = false;
        side = "civ";
    };

	class bottler {
        variable = "license_civ_bottler";
        displayName = "Abfüll Lizenz";
        price = 25000;
        illegal = false;
        side = "civ";
    };

	class jagen {
        variable = "license_civ_jagen";
        displayName = "Jagdschein";
        price = 400000;
        illegal = false;
        side = "civ";
    };

	class chefkoch {
        variable = "license_civ_chefkoch";
        displayName = "Kochausbilung";
        price = 150000;
        illegal = false;
        side = "civ";
    };

    //Illegal Licenses
    class cocaine {
        variable = "license_civ_coke";
        displayName = "Kokain Training";
        price = 325000;
        illegal = true;
        side = "civ";
    };

	class cocaineu {
        variable = "life_inv_coke";
        displayName = "Unverarbeitetes Kokain";
        price = 325000;
        illegal = true;
        side = "civ";
    };

	class cocainep {
        variable = "life_inv_cokep";
        displayName = "Verarbeitetes Kokain";
        price = 325000;
        illegal = true;
        side = "civ";
    };

    class heroin {
        variable = "license_civ_heroin";
        displayName = "Heroin Training";
        price = 250000;
        illegal = true;
        side = "civ";
    };

	class heroinu {
        variable = "life_inv_heroinu";
        displayName = "Unverarbeitetes Heroin";
        price = 250000;
        illegal = true;
        side = "civ";
    };

	class heroinp {
        variable = "life_inv_heroinp";
        displayName = "Verarbeitetes Heroin";
        price = 250000;
        illegal = true;
        side = "civ";
    };

	class cannabis {
        variable = "life_inv_cannabis";
        displayName = "Kannabis";
        price = 180000;
        illegal = true;
        side = "civ";
    };

    class marijuana {
        variable = "life_inv_marijuana";
        displayName = "Marijuana";
        price = 180000;
        illegal = true;
        side = "civ";
    };

	class marijuanat {
        variable = "license_civ_marijuana";
        displayName = "Marijuana Training";
        price = 180000;
        illegal = true;
        side = "civ";
    };

	class meth {
        variable = "license_civ_meth";
        displayName = "Methamphetamine Training";
        price = 200000;
        illegal = true;
        side = "civ";
    };

	class methu {
        variable = "life_inv_methu";
        displayName = "Unverarbeitetes Methamphetamine";
        price = 200000;
        illegal = true;
        side = "civ";
    };

	class methp {
        variable = "life_inv_methp";
        displayName = "Pures Methamphetamine";
        price = 200000;
        illegal = true;
        side = "civ";
    };

	class uranium {
        variable = "license_civ_uranium";
        displayName = "Uran Lizenz";
        price = 1500000;
        illegal = true;
        side = "civ";
    };

	class uraniumore {
        variable = "life_inv_uranium1";
        displayName = "Uranerz";
        price = 1500000;
        illegal = true;
        side = "civ";
    };

	class uraniumroh {
        variable = "life_inv_uranium2";
        displayName = "Rohes Uran";
        price = 1500000;
        illegal = true;
        side = "civ";
    };

	class uraniumge {
        variable = "life_inv_uranium3";
        displayName = "Gereinigtes Uran";
        price = 1500000;
        illegal = true;
        side = "civ";
    };

	class uraniumkon {
        variable = "life_inv_uranium4";
        displayName = "Uran Konzetrat";
        price = 1500000;
        illegal = true;
        side = "civ";
    };

	class uran {
        variable = "life_inv_uranium";
        displayName = "Uran";
        price = 1500000;
        illegal = true;
        side = "civ";
    };

	class morphium {
        variable = "life_inv_morphium";
        displayName = "Morphium";
        price = 1500000;
        illegal = true;
        side = "civ";
    };

	class kidney {
        variable = "life_inv_kidney";
        displayName = "Niere";
        price = 90000000;
        illegal = true;
        side = "civ";
    };

	class scalpel {
        variable = "life_inv_scalpel";
        displayName = "Scalpel";
        price = 90000000;
        illegal = true;
        side = "civ";
    };

	class blastingcharge {
        variable = "life_inv_blastingcharge";
        displayName = "C4 Sprengstoff";
        price = 50000;
        illegal = true;
        side = "civ";
    };

	class defusekit {
        variable = "life_inv_defusekit";
        displayName = "C4 EntschärfungsKit";
        price = 50000;
        illegal = true;
        side = "civ";
    };

	class gang {
        variable = "license_civ_gang";
        displayName = "Gang Lizenz";
        price = 50000;
        illegal = true;
        side = "civ";
    };

	class gangmtse {
        variable = "license_civ_gang_mtse";
        displayName = "MTSE Gangmitglied";
        price = 1;
        illegal = true;
        side = "civ";
    };

	class gangbk {
        variable = "license_civ_gang_bk";
        displayName = "BK Gangmitglied";
        price = 1;
        illegal = true;
        side = "civ";
    };

	class gangbt {
        variable = "license_civ_gang_bt";
        displayName = "BT Gangmitglied";
        price = 1;
        illegal = true;
        side = "civ";
    };

	class gangraize {
        variable = "license_civ_gang_raize";
        displayName = "RaiZe Gangmitglied";
        price = 1;
        illegal = true;
        side = "civ";
    };

	class gangadb {
        variable = "license_civ_gang_adb";
        displayName = "ADB Gangmitglied";
        price = 1;
        illegal = true;
        side = "civ";
    };

	class gangtwl {
        variable = "license_civ_gang_twl";
        displayName = "TWL Gangmitglied";
        price = 1;
        illegal = true;
        side = "civ";
    };

    class rebel {
        variable = "license_civ_rebel";
        displayName = "Rebellen Training";
        price = 2750000;
        illegal = true;
        side = "civ";
    };

	class eliterebel {
        variable = "license_civ_elite";
        displayName = "Eliterebellen Lizenz";
        price = 90000000;
        illegal = true;
        side = "civ";
    };

    //Cop Licenses
    class cAir {
        variable = "cAir";
        displayName = "Pilotenschein";
        price = 1500;
        illegal = false;
        side = "cop";
    };

    class cg {
        variable = "cg";
        displayName = "Küstenwache";
        price = 1000;
        illegal = false;
        side = "cop";
    };

	class swat {
        variable = "license_cop_swat";
        displayName = "GSG9 Lizenz";
        price = 3500;
        illegal = false;
        side = "cop";
    };

	class revive {
        variable = "revive";
        displayName = "Sanitäterausbildung";
        price = 500000;
        illegal = false;
        side = "cop";
    };

    //Medic Licenses
    class mAir {
        variable = "mAir";
        displayName = "Medizin Ausbildung";
        price = 1000;
        illegal = false;
        side = "med";
    };
};
