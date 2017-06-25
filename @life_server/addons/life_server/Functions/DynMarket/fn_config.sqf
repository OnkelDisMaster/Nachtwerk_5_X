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

DYNMARKET_Serveruptime         = 15;   // Serveruptime after restart in hours
DYNMARKET_UseExternalDatabase  = true; // Should the script use the External Database?
DYNMARKET_PriceUpdateInterval  = 1;   // After how many minutes should the price be updated?
DYNMARKET_CreateBackups        = true; // Should the server save write the prices regulary into the Database? If false, it will save the prices before Server-restart?
DYNMARKET_CreateBackupInterval = 3;   // After how many updates (PriceUpdateIntervals) should the prices be saved into the Database?
DYNMARKET_UserNotification     = false; // Should the user be informed with a hint whenever the prices got updated?
DYNMARKET_createRandomEvents   = true; // Should random events appear that influence the market?

// █████████████████ USER NOTIFICATION TEXTS  █████████████████

DYNMARKET_UserNotification_Text = 
[
	"Your prices have been updated!",
	"The new prices are being calculated by the server..."
];

// █████████████████ ITEM GROUP CONFIGURATION █████████████████

DYNMARKET_Items_Groups =
[
	["Obst",
		[
			["apple",-1,10,50],
			["apple",-1,10,50],
			["apple",-1,10,50],
			["apple",-1,10,50],
			["peach",-1,30,100]
		],
		0.5
	],
	["Minensachen",
		[
			["copperRefined",-1,1000,2500],
			["ironRefined",-1,2000,4000],
			["saltRefined",-1,500,2000],
			["glass",-1,500,2500],
			["diamondCut",-1,1000,5000],
			["cement",-1,750,3000]
		],
		0.5
	],
		["Fisch",
		[
			["mullet",-1,100,1250],
			["tuna",-1,1000,2000],
			["salema",-1,50,200],
			["ornate",-1,75,250],
			["mackerel",-1,100,500],
			["mullet",-1,250,500],
			["catshark",-1,250,1000]
		],
		0.5
	],
	["Illegal", 
		[
			["heroinProcessed",-1,2000,6000],
			["marijuana",-1,1000,3500],
			["cocaineProcessed",-1,2500,8000]
		],
		0.5
	]
];

// █████████████████    ALL SELLABLE ITEMS    █████████████████

DYNMARKET_Items_ToTrack        = 
[

	["apple",80],
	["peach",80],
	["ananas",80],
	["bananen",80],
	["kokosnuss",80],
	["apfelsaft",80],
	["pfirsichsaft",200],
	["ananassaft",20],
	["bananensaft",20],
	["kokosnussmilch",200],
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
	["turtle_soup",200],
	["hen_raw",200],
	["hen",200],
	["rooster_raw",210],
	["sheep_raw",210],
	["sheep",155],
	["goat_raw",155],
	["goat",300],
	["goldbar",95000],
	["mikro_prozessor",25000],
	["imlantat_normal",265000],
	["oil_processed",4500],
	["diesel",5600],
	["copper_refined",2400],
	["iron_refined",3000],
	["alu_barren",2700],
	["platin_barren",3500],
	["platin_krone",24000],
	["salt_refined",2500],
	["glass",2000],
	["bambusleitung",1250],
	["marmor",3500],
	["obsidian",3500],
	["diamond_cut",2900],
	["juwelen",3100],
	["polen_boeller",3000],
	["zigaretten",1400],
	["heroin_processed",4200],
	["marijuana",3000],
	["cocaine_processed",5200]
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
