/*
    File: config.cpp
    Author: B4v4r!4n_Str!k3r (julianbauer@cationstudio.com)
    Licence: THIS FILE AND EXTRACTS OF IT IS THE MINDSET OF CATIONSTUDIO
             AND ONLY AUTHORIZED PEOPLE/SERVERS ARE ALLOWED TO USE IT.
    Description: Master config for crafting system. 
*/
#include "dialog\craft.hpp"
class Cation_Crafting {

    version_4_4 = 1; // version 3.x - 4.3 -> 0 | version 4.4+ -> 1
    duration = 0.3; //Dauer im Craftingvorgang für 1% in s (Mögliche Werte zwischen 0.1 und 10)
    
    //Texte
    Craftingmenu = "Baumenü";
    CraftStats = "Sachen zum Bauen";
    CraftingMaterials = "Benötigte Sachen";
    CraftButton = "Bauen!";
    Close = "Schließen";
    Craft = "Baue";
    NoMaterial = "Du hast nicht alle Baumaterialien!";
    Process = "Du hast folgendes hergestellt:";
    Process_Stay = "Du musst innerhalb von 10m bleiben, um craften zu können.";
    NotificationBackpack = "Du hast bereits einen Rucksack! Pack den alten erstmal weg.";
    NotificationVest = "Du hast bereits eine Veste! Pack die alte erst einmal weg.";
    NotificationUnifrom = "Du hast bereits etwas an! Mach dich nackt und versuch es nochmal.";
    SelectItemFirst = "Du musst zuerst einen Gegenstand auswählen!";
    NothingNeeded = "Es wird nichts benötigt!";
    NoRoom = "Du hast nicht genug Platz für den Gegenstand.";
    Veh_Block = "Ein Fahrzeug blockiert gerade den Spawnpunkt";
    NoSpawnpoint = "Kein Spawnpoint verfügbar";
    Color = "Farbe";

    category[] = { //Kategorien
        {
            "weapon", //Variable
            "Waffen", //Text
            {"hgun_P07_F","",{"diamond_cut",10,"kupfer",2},"","",0}, //{Item 1,Bedingung (default: ""),{benötigtes Item1, benötigte Anzahl des Item1, benötigtes Item2, benötigte Anzahl des Item2},"Skinname","Skinseite"(Skin nur bei Fahrzeugen),0 (für vItem | 1 für alle anderen Items)},
            {"arifle_AK12_F","license_civ_pro_rebel",{"goldbauteil",2,"diamond_cut",20,"mikroprozessor",4},"","",0}, 
			{"arifle_ARX_hex_F","license_civ_pro_rebel",{"goldbauteil",1,"diamond_cut",2,"mikroprozessor",1},"","",0}, 
			{"LMG_Mk200_F","license_civ_pro_rebel",{"goldbauteil",1,"diamond_cut",10,"mikroprozessor",3},"","",0}, 
			{"LMG_Zafir_F","license_civ_pro_rebel",{"goldbauteil",1,"diamond_cut",20,"mikroprozessor",4},"","",0},
			{"srifle_DMR_04_F","license_civ_pro_rebel",{"goldbauteil",5,"diamond_cut",10,"mikroprozessor",5},"","",0}, 
			{"srifle_DMR_04_tan_F","license_civ_pro_rebel",{"goldbauteil",5,"diamond_cut",10,"mikroprozessor",5},"","",0}, 
			{"srifle_DMR_02_camo_F","license_civ_pro_rebel",{"goldbauteil",2,"diamond_cut",10,"mikroprozessor",4},"","",0},
			{"srifle_DMR_02_sniper_F","license_civ_pro_rebel",{"goldbauteil",2,"diamond_cut",10,"mikroprozessor",4},"","",0},			
			{"srifle_DMR_05_hex_F","license_civ_pro_rebel",{"goldbauteil",2,"diamond_cut",10,"mikroprozessor",5},"","",0}, 
			{"srifle_DMR_05_tan_F","license_civ_pro_rebel",{"goldbauteil",2,"diamond_cut",10,"mikroprozessor",5},"","",0}, 
			{"srifle_LRR_F","license_civ_pro_rebel",{"goldbauteil",4,"diamond_cut",10,"mikroprozessor",2},"","",0}, 
			{"srifle_LRR_camo_F","license_civ_pro_rebel",{"goldbauteil",4,"diamond_cut",10,"mikroprozessor",2},"","",0}, 			
			{"srifle_GM6_camo_F","license_civ_pro_rebel",{"goldbauteil",8,"diamond_cut",10,"mikroprozessor",4},"","",0} 

		}, //Komma
        {
            "uniform",
            "Uniformen",
            {"U_IG_Guerilla1_1","",{"kupfer",5},"","",0}
        },
        {
            "backpack",
            "Rucksäcke",
            {"B_Carryall_oli","",{"diamond_cut",6},"","",0},
			{"B_Bergen_dgtl_F","",{"oel",10},"","",0},
			{"B_ViperHarness_blk_F","",{"juwelen",10},"","",0}
        },
        {
            "vest",
            "Vesten",
            {"V_Press_F","",{"krone",4},"","",0}
        },
		{
            "fahrzeuge",
            "Fahrzeuge zusammen schweißen",
            {"B_Truck_01_box_F","",{"kupfer",1},"Digi Green","2",2}
        },
		{
            "kronen",
            "Platinkronen herstellen",
            {"krone","license_civ_kronen",{"diamond_cut",4,"platin",4,"glass",4},"","",1}
        },
		{
            "Goldbauteile",
            "Goldbauteile herstellen",
            {"goldbauteil","license_civ_goldbauteile",{"goldbar",10},"","",1}
        },
		{
            "mikroprozessoren",
            "Mikroprozessoren herstellen",
            {"mikroprozessor","license_civ_implantat",{"platin",2,"alu",3,"kupfer",5},"","",1}
        },
		{
            "bombenkopfe",
            "Bombenköpfe herstellen",
            {"bombenkopf","license_civ_bombe",{"alu",8,"eisen",8},"","",1}
        },
		{
            "atombomben",
            "Atombomben herstellen",
            {"atombombe","license_civ_abombe",{"bombenkopf",1,"plutonium",20},"","",1}
        },
        {
            "item",
            "Items",            
            {"diamond_cut","",{"kupfer",1,"eisen",1},"","",1}
        } //Kein Komma bei letzten
    };

    craftingStations[] = { //verfügbare Kategorien an verschiedenen Crafting Stationen
		/*     Beispiele
		{
            "craftingItems", //Variablenname
            "craftingItemsMarker", //Name des Spawnmarkers auf der Map (muss in der mission.sqm vorhanden seinen)
            {"item","weapon"} //Variablennamen der verfügbaren Kategorien
        }, //Komma
        {
            "craftingClothes", //Variablenname
            "craftingClothesMarker", //Name des Spawnmarkers auf der Map (muss in der mission.sqm vorhanden seinen)
            {"uniform","backpack","vest"} //Variablennamen der verfügbaren Kategorien
        } //Kein Komma bei letzten		
		*/
		{
            "platinkrone", //Variablenname
            "kronen1", //Name des Spawnmarkers auf der Map (muss in der mission.sqm vorhanden seinen)
            {"kronen"} //Variablennamen der verfügbaren Kategorien
        },
		{
            "mikroprozessorp", //Variablenname
            "", //Name des Spawnmarkers auf der Map (muss in der mission.sqm vorhanden seinen)
            {"mikroprozessoren"} //Variablennamen der verfügbaren Kategorien
        },		
		{
            "atombombenp", //Variablenname
            "", //Name des Spawnmarkers auf der Map (muss in der mission.sqm vorhanden seinen)
            {"atombomben"} //Variablennamen der verfügbaren Kategorien
        },	
		{
            "Schwarzmarkt", //Variablenname
            "Schwarzmarkt_1", //Name des Spawnmarkers auf der Map (muss in der mission.sqm vorhanden seinen)
            {"weapon","uniform","vest","backpack","bombenkopfe","Goldbauteile"} //Variablennamen der verfügbaren Kategorien
        }
    };
};