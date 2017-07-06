/*
##################### DYNAMIC MARKET SCRIPT #####################
### AUTHOR: RYAN TT.                                          ###
### STEAM: www.steamcommunity.com/id/ryanthett                ###
###                                                           ###
### DISCLAIMER: THIS SCRIPT CAN BE USED ON EVERY SERVER ONLY  ###
###             WITH THIS HEADER / NOTIFICATION               ###
#################################################################
*/

// ███████████████████████████████████████████████████████████████████████
// █████████████████ DYNAMIC MARKET BASIC CONFIGURATION ██████████████████
// ███████████████████████████████████████████████████████████████████████

DYNMARKET_Serveruptime         = 06;   // Serveruptime after restart in hours
DYNMARKET_UseExternalDatabase  = true; // Should the script use the External Database?
DYNMARKET_PriceUpdateInterval  = 1;   // After how many minutes should the price be updated?
DYNMARKET_CreateBackups        = true; // Should the server save write the prices regulary into the Database? If false, it will save the prices before Server-restart?
DYNMARKET_CreateBackupInterval = 2;   // After how many updates (PriceUpdateIntervals) should the prices be saved into the Database?
DYNMARKET_UserNotification     = true; // Should the user be informed with a hint whenever the prices got updated?
DYNMARKET_createRandomEvents   = true; // Should random events appear that influence the market?

// █████████████████ USER NOTIFICATION TEXTS  █████████████████

DYNMARKET_UserNotification_Text = 
[
	"Die Preise wurde naktualisiert!",
	"TDie Preise werden gerade vom Server angepasst..."
];

// █████████████████ ITEM GROUP CONFIGURATION █████████████████

DYNMARKET_Items_Groups =
[
	["Legal",
		[										//Schwankungsbreite 
			["apple",-1,50,100],					// ["apple",-1,10,50],     
			["ananas",-1,50,100],					// itemname		-1, minimum, maximum preis
			["bananen",-1,50,100],
			["kokosnuss",-1,50,100],
			["apfelsaft",-1,140,260],
			["pfirsichsaft",-1,140,260],
			["ananassaft",-1,140,260],
			["bananensaft",-1,140,260],
			["kokosnussmilch",-1,140,260],
			["pina_colada",-1,420,780],
			["eisen",-1,880,1620],
			["kupfer",-1,1100,2000],
			["alu",-1,1890,3510],
			["platin",-1,2450,4550],
			["bambusleitung",-1,875,1625],
			["juwelen",-1,2170,4030],
			["marmor",-1,2450,4550],
			["obsidian",-1,2730,5070],
			["saltRefined",-1,1750,3250],
			["glass",-1,1400,2600],
			["diamondCut",-1,2030,3730],
			["oel",-1,3150,5850],
			["diesel",-1,3920,7280],
			["krone",-1,16800,31200]
		],
		0.5
	],
	["Illegal", 
		[
			["heroinProcessed",1,2940,6000],
			["marijuana",1,2100,4700],
			["cocaineProcessed",1,3640,7000],
			["polenboeller",1,2100,3900],
			["zigaretten",1,980,2500],
			["korallenketten",1,9800,18200],
			["methProcessed",1,2170,4030],
			["uranIV",1,7000,13000],
			["plutonium",1,7000,13000],
			["brennstab",1,12250,22750],
			["atombombe",1,455000,845000],
			["mikroProzessor",1,17500,32500],
			["implantatNormal",1,185500,444500]
		],
		0.5
	]
];

// █████████████████    ALL SELLABLE ITEMS    █████████████████

DYNMARKET_Items_ToTrack        = 
[

	["apple",80],   	// Standard Preise
	["peach",80],
	["ananas",80],
	["bananen",80],
	["kokosnuss",80],
	["apfelsaft",80],
	["pfirsichsaft",200],
	["ananassaft",200],
	["bananensaft",200],
	["kokosnussmilch",200],
	["pina_colada",600],
	["rabbit_raw",150],
	["rabbit",170],
	["ornate_raw",190],
	["ornate",190],
	["mackerel_raw",190],
	["mackerel",190],
	["tuna_raw",190],
	["tuna",190],
	["mullet_raw",190],
	["mullet",200],
	["catshark_raw",200],
	["catshark",200],
	["turtle_soup",7500],
	["turtle_raw",7500],
	["hen_raw",650],
	["hen",850],
	["rooster_raw",650],
	["rooster",850],
	["sheep_raw",950],
	["sheep",2150],
	["goat_raw",1550],
	["goat",2350],
	["goldbar",95000],
	["mikroProzessor",25000],
	["implantatNormal",265000],
	["oel",4500],
	["diesel",5600],
	["eisen",1200],
	["kupfer",1500],
	["alu",2700],
	["platin",3500],
	["krone",24000],
	["salt_refined",2500],
	["glass",2000],
	["bambusleitung",1250],
	["marmor",3500],
	["obsidian",3500],
	["diamond_cut",2900],
	["juwelen",3100],
	["polenboeller",3000],
	["zigaretten",1400],
	["korallenketten",14000],
	["heroin_processed",4200],
	["meth_processed",3100],
	["marijuana",3000],
	["cocaine_processed",5200],
	["uranIV",10000],
	["plutonium",10000],
	["brennstab",17500],
	["atombombe",650000]
];

//███████████████████████████████████████████████████████████████████████
//██████████████████ DO NOT MODIFY THE FOLLOWING CODE! ██████████████████
//███████████████████████████████████████████████████████████████████████

DYNMARKET_Items_CurrentPriceArr = [];
DYNMARKET_sellarraycopy = DYNMARKET_Items_ToTrack;
DYNMARKET_Serveruptime = (DYNMARKET_Serveruptime * 3600) - 300;
{
	_currentArray = _x;
	DYNMARKET_Items_CurrentPriceArr pushBack [_currentArray select 0,_currentArray select 1,0];
} forEach DYNMARKET_Items_ToTrack;
publicVariable "DYNMARKET_UserNotification";
publicVariable "DYNMARKET_UserNotification_Text";
if (DYNMARKET_UseExternalDatabase) then {[1] call TON_fnc_HandleDB;};
DYNMARKET_UpdateCount = 0;
if (DYNMARKET_UseExternalDatabase) then {
	[] spawn {
		sleep DYNMARKET_Serveruptime;
		diag_log "### DYNMARKET >> CURRENT PRICES ARE BEING WRITTEN TO THE DATABASE    ###";
		diag_log "### DYNMARKET >> AS PLANNED, AWAITING RESULT...                      ###";
		[0] call TON_fnc_HandleDB;
	};
};
sleep 5;
[] call TON_fnc_sleeper;
