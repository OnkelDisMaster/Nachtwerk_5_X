/*

	Main configuration for non-persistent market system
	Will need triggers to hook into vanilla pricing methods

*/

	//Schema: SHORTNAME, Default, Min, Max, changes in action, [Sales multiplied by 1, Purchase multiplied by -1]
	//["gold", 1500, 450, 2300, 8, 5],
                                    --> x Items mal Wert = Drop/Steigen
                                                --> x verkaufte Items steigern Preise der Items im Kasten drunter
////////////MAIN CONFIG

life_market_resources = [
	
	// Default İsler
	
	["oel", 4500, 3150, 7850, 3, 1, 
		[ 
			["diamant",1], 
			["kupfer",1],
			["eisen",1],
			["alu,1"]
		] 
	],
	
	["kupfer", 1500, 1100, 4500, 5, 2, 
		[ 
			["eisen",1],
			["salz",1],
			["glass",1],
			["alu,1"]
		] 
	],
	
	["eisen", 1200, 3500, 4500, 2, 1, 
		[
			["kupfer",1],
			["glass",1],
			["alu",1"]
		] 
	],
	
	["alu", 2700, 1890, 6510, 5, 2, 
		[ 
			["eisen",1],
			["kupfer",1],
			["glass",1]
		] 
	],
    
    ["platin", 3500, 2450, 7550, 5, 2, 
		[ 
			["alu",1],
			["eisen",1],
			["oel",1],
			["glass",1] 
		] 
	],
    
    ["salz", 2600, 1750, 4550, 5, 2, 
		[ 
			["eisen",1],
			["kupfer",1],
			["glass",1] 
		] 
	],
    
    ["glass", 2000, 1400, 4600, 5, 2, 
		[ 
			["eisen",1],
			["kupfer",1],
			["salz",1]
		] 
	],
    
    ["bambusleitung", 1250, 875, 4625, 5, 2, 
		[ 
			["eol",1],
			["salz",1],
			["marmor",1]
		] 
	],
    
    ["diamant", 4300, 3030, 7730, 5, 2, 
		[ 
			["juwelen",1],
			["oel",1],
			["marmor",1] 
		] 
	],
    
    ["krone", 45000, 30000, 70000, 5, 2, 
		[ 
			["obsidian",1],
			["diamant",1],
			["juwelen",1]
		] 
	],
	
    ["juwelen", 15000, 3170, 60300, 5, 2, 
		[ 
			["diamant",1],
			["obsidian",1],
			["marmor",1]
		] 
	],
    
    ["marmor", 3500, 2450, 6550, 5, 2, 
		[ 
			["obsidian",1],
			["diamant",1]
		] 
	],
	
    ["obsidian", 5500, 2730, 9070, 5, 2, 
		[ 
			["marmor",1],
			["obsidian",1],
			["kupfer",1],
			["eisen",1]
		] 
	],
    
	["weed", 3000, 2100, 5700, 10, 7,   
		[ 
			["heroin",1],
			["koks",1],
			["polenboeller",1],
			["zigaretten",1],
			["meth",1]
		] 
	],

	["koks", 5400, 3640, 7500, 15, 10,   
		[ 
			["heroin",1], 
			["weed",1],
			["polenboeller",1],
			["zigaretten",1],
			["meth",1]
		] 
	],
		
	["heroin", 4400, 2940, 6000, 15, 10,   
		[ 
			["koks",1], 
			["weed",1],
			["polenboeller",1],
			["zigaretten",1],
			["meth",1]
        ]    
	],
    
    ["polenboeller", 3000, 2100, 3900, 15, 10,   
		[ 
			["weed",1], 
			["koks",1],
			["heroin",1],
			["zigaretten",1],
			["meth",1]
		] 
	],
    
    ["zigaretten", 3400, 980, 4500, 15, 10,   
		[ 
			["weed",1], 
			["koks",1],
			["heroin",1],
			["polenboeller",1],
			["meth",1]
		] 
	],
    
    ["korallenketten", 13000, 9800, 28200, 15, 10,   
		[ 
			["weed",1], 
			["koks",1],
			["heroin",1],
			["polenboeller",1],
			["meth",1]
		] 
	],
    
    ["meth", 3900, 2170, 6030, 15, 10,   
		[ 
			["polenboeller",1],
			["weed",1], 
			["koks",1],
			["heroin",1],
			["polenboeller",1],
			["korallenketten",1]
		] 
	],
    
    ["uranIV", 22000, 6000, 45000, 15, 10,   
		[ 
			["plutonium",1], 
			["brennstab",1]
		] 
	],
    
    ["plutonium", 25000, 17000, 32000, 15, 10,   
		[ 
			["uranIV",1], 
			["brennstab",1]
		] 
	],
    
    ["brennstab", 32000, 22250, 50000, 15, 10,   
		[ 
			["uranIV",1], 
			["plutonium",1],
			["atombombe",1]
		] 
	],
    
    ["atombombe", 2300000, 455000, 4700000, 15, 10,   
		[ 
			["uranIV",1], 
			["plutonium",1],
			["brennstab",1]
		] 
	]
];
publicVariable "life_market_resources";

////////////GENERATED CONFIG
//life_market_changes = []; //[SHORTNAME,SELL,BUY]
life_market_shortnames = []; //shortnames if in market
//life_market_clampprices = []; //[SHORTNAME,MIN,MAX]

{
	life_market_shortnames set [count life_market_shortnames, _x select 0];
	//life_market_clampprices set [count life_market_clampprices, [_x select 0, _x select 2, _x select 3] ];
	//life_market_changes set [count life_market_changes, [_x select 0, _x select 4, _x select 5] ];
}
foreach life_market_resources;

publicVariable "life_market_shortnames";
//publicVariable "life_market_clampprices";

////////////SYNC PRICES WITH SERVER IF EMPTY
//if(isNil("life_market_prices")) then
//{
	life_market_prices = []; //[SHORTNAME,CURRENTPRICE,DIRECTIONGLOBAL,DIRECTIONLOCAL]
	{
	
		life_market_prices set [count life_market_prices, [_x select 0, _x select 1, 0, 0] ];
	}
	foreach life_market_resources;
	
	publicVariable "life_market_prices";
	
	systemChat "Market Prices Generated!";
//};