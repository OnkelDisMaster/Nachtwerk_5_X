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

DYNMARKET_Serveruptime         = 6;   // Serveruptime after restart in hours
DYNMARKET_UseExternalDatabase  = false; // Should the script use the External Database?
DYNMARKET_PriceUpdateInterval  = 5;   // After how many minutes should the price be updated?
DYNMARKET_CreateBackups        = false; // Should the server save write the prices regulary into the Database? If false, it will save the prices before Server-restart?
DYNMARKET_CreateBackupInterval = 2;   // After how many updates (PriceUpdateIntervals) should the prices be saved into the Database?
DYNMARKET_UserNotification     = false; // Should the user be informed with a hint whenever the prices got updated?
DYNMARKET_createRandomEvents   = true; // Should random events appear that influence the market?

// █████████████████ USER NOTIFICATION TEXTS  █████████████████

DYNMARKET_UserNotification_Text = 
[
	"Die Preise wurden aktualisiert!",
	"Die Preise werden gerade vom Server angepasst..."
];

// █████████████████ ITEM GROUP CONFIGURATION █████████████████

DYNMARKET_Items_Groups =
[
	["Legal",
		[										//Schwankungsbreite 
			["apple",-1,50,120],					// ["apple",-1,10,50],  
			["peach",-1,50,120],
			["ananas",-1,50,200],					// itemname		-1, minimum, maximum preis
			["bananen",-1,50,200],
			["kokosnuss",-1,50,200],
			["apfelsaft",-1,140,360],
			["pfirsichsaft",-1,140,360],
			["ananassaft",-1,140,360],
			["bananensaft",-1,140,360],
			["kokosnussmilch",-1,140,360],
			["pina_colada",-1,420,880],
			["eisen",-1,880,3500],
			["kupfer",-1,1100,4500],
			["alu",-1,1890,6510],
			["platin",-1,2450,7550],
			["bambusleitung",-1,875,4625],
			["juwelen",-1,3170,9030],
			["marmor",-1,2450,6550],
			["obsidian",-1,2730,7070],
			["salz",-1,1750,4550],
			["glass",-1,1400,4600],
			["diamant",-1,3030,7730],
			["oel",-1,3150,7850],
			["diesel",-1,8000,18000],
			["krone",-1,30000,70000]
		],
		0.5
	],
	["Illegal", 
		[
			["heroin",-1,2940,6000],
			["weed",-1,2100,5700],
			["koks",-1,3640,7500],
			["polenboeller",-1,2100,3900],
			["zigaretten",-1,980,4500],
			["korallenketten",-1,9800,28200],
			["meth",-1,2170,6030],
			["uranIV",-1,6000,45000],
			["plutonium",-1,17000,32000],
			["brennstab",-1,22250,50000],
			["atombombe",-1,455000,5500000],
			["mikroProzessor",-1,27500,50500],
			["implantatNormal",-1,385500,500500]
		],
		0.2
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
	["goldbar",200000],
	["mikroProzessor",40000],
	["implantatNormal",420000],
	["oel",4500],
	["diesel",12000],
	["eisen",1200],
	["kupfer",1500],
	["alu",2700],
	["platin",3500],
	["krone",45000],
	["salz",2600],
	["glass",2000],
	["bambusleitung",1250],
	["marmor",3500],
	["obsidian",3500],
	["diamant",4300],
	["juwelen",5000],
	["polenboeller",3000],
	["zigaretten",3400],
	["korallenketten",13000],
	["heroin",4400],
	["meth",3900],
	["weed",3000],
	["koks",5400],
	["uranIV",22000],
	["plutonium",25000],
	["brennstab",32000],
	["atombombe",2300000]
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
