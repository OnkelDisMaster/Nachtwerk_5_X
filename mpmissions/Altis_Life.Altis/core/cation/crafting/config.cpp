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
            {"hgun_P07_F","",{"diamond_cut",2,"copper_refined",1},"","",0}, //{Item 1,Bedingung (default: ""),{benötigtes Item1, benötigte Anzahl des Item1, benötigtes Item2, benötigte Anzahl des Item2},"Skinname","Skinseite"(Skin nur bei Fahrzeugen),0 (für vItem | 1 für alle anderen Items)},
            {"srifle_GM6_camo_F","license_civ_pro_rebel",{"copper_refined",3,"iron_refined",3,"diamond_cut",1},"","",0} //{Item 2,Bedingung (default: ""),{benötigtes Item1, benötigte Anzahl des Item1, benötigtes Item2, benötigte Anzahl des Item2},"Skinname","Skinseite" (Skin nur bei Fahrzeugen),0 (für vItem | 1 für alle anderen Items)} Kein Komma beim letzten!
        }, //Komma
        {
            "uniform",
            "Uniformen",
            {"U_IG_Guerilla1_1","",{"copper_refined",1},"","",0}
        },
        {
            "backpack",
            "Rucksäcke",
            {"B_Carryall_oli","",{"diamond_cut",1},"","",0}
        },
        {
            "vest",
            "Vesten",
            {"V_Press_F","",{"copper_refined",1},"","",0}
        },
		{
            "kronen",
            "Platinkronen herstellen",
            {"krone","",{"diamond_cut",1,"platin",1,"glass",1},"","",0}
        },
		{
            "mikroprozessoren",
            "Mikroprozessoren herstellen",
            {"mikroprozessor","",{"platin",1,"alu",1,"kupfer",1},"","",0}
        },
		{
            "bombenkopfe",
            "Bombenköpfe herstellen",
            {"bombenkopf","",{"alu",8,"eisen",8},"","",0}
        },
		{
            "atombomben",
            "Atombomben herstellen",
            {"atombombe","",{"bombenkopf",1,"plutonium",20},"","",0}
        },
        {
            "item",
            "Items",            
            {"diamond_cut","",{"copper_refined",1,"iron_refined",1},"","",1}
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
            "", //Name des Spawnmarkers auf der Map (muss in der mission.sqm vorhanden seinen)
            {"kronen"} //Variablennamen der verfügbaren Kategorien
        },
		{
            "mikroprozessorp", //Variablenname
            "", //Name des Spawnmarkers auf der Map (muss in der mission.sqm vorhanden seinen)
            {"mikroprozessoren"} //Variablennamen der verfügbaren Kategorien
        },
		{
            "bombenkopfp", //Variablenname
            "", //Name des Spawnmarkers auf der Map (muss in der mission.sqm vorhanden seinen)
            {"bombenkopfe"} //Variablennamen der verfügbaren Kategorien
        },		
		{
            "atombombenp", //Variablenname
            "", //Name des Spawnmarkers auf der Map (muss in der mission.sqm vorhanden seinen)
            {"atombomben"} //Variablennamen der verfügbaren Kategorien
        },	
		{
            "Schwarzmarkt", //Variablenname
            "Schwarzmarkt_1", //Name des Spawnmarkers auf der Map (muss in der mission.sqm vorhanden seinen)
            {"weapon","uniform","backpack"} //Variablennamen der verfügbaren Kategorien
        }
    };
};