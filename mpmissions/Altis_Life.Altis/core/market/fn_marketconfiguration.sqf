/*

	Main configuration for non-persistent market system
	Will need triggers to hook into vanilla pricing methods

*/

	//Schema: SHORTNAME, Default, Min, Max, changes in action, [Sales multiplied by 1, Purchase multiplied by -1]
	//["gold", 1500, 450, 2300, 8, 5],

////////////MAIN CONFIG

life_market_resources = [
	
	// Default İsler
	
	["oel", 3150, 0, 7850, 3, 1, 
		[ 
			["diamant",1], 
			["kupfer"],
			["eisen"],
			["alu"]
		] 
	],
	
	["kupfer", 1100, 0, 4500, 5, 2, 
		[ 
			["eisen",1],
			["salz",1],
			["glass",1],
			["alu"]
		] 
	],
	
	["eisen", 3500, 0, 4500, 2, 1, 
		[
			["kupfer",1],
			["glass",1],
			["alu"]
		] 
	],
	
	["alu", 1890, 0, 6510, 5, 2, 
		[ 
			["eisen",1],
			["kupfer",1],
			["glass",1]
		] 
	],
    
    ["platin", 2450, 0, 7550, 5, 2, 
		[ 
			["alu",1],
			["eisen",1],
			["oel",1],
			["glass",1] 
		] 
	],
    
    ["salz", 1750, 0, 4550, 5, 2, 
		[ 
			["eisen",1],
			["kupfer",1],
			["glass",1] 
		] 
	],
    
    ["glass", 1400, 0, 4600, 5, 2, 
		[ 
			["eisen",1],
			["kupfer",1],
			["salz",1]
		] 
	],
    
    ["bambusleitung", 875, 0, 4625, 5, 2, 
		[ 
			["eol",1],
			["salz",1],
			["marmor",1]
		] 
	],
    
    ["diamant", 3030, 0, 7730, 5, 2, 
		[ 
			["juwelen",1],
			["oel",1],
			["marmor",1] 
		] 
	],
    
    ["krone", 30000, 0, 70000, 5, 2, 
		[ 
			["obsidian",1],
			["diamant",1],
			["juwelen",1]
		] 
	],
	
    ["juwelen", 3170, 0, 9030, 5, 2, 
		[ 
			["diamant",1],
			["obsidian",1],
			["marmor",1]
		] 
	],
    
    ["marmor", 2450, 0, 6550, 5, 2, 
		[ 
			["obsidian",1],
			["diamant",1]
		] 
	],
	
    ["obsidian", 2730, 0, 7070, 5, 2, 
		[ 
			["marmor",1],
			["obsidian",1],
			["kupfer",1],
			["eisen",1]
		] 
	],
	
    ["goldbar", 200000, 200000, 200000, 2, 1, 
		[
        
        ]
    ],
    
	["weed", 2100, 0, 5700, 10, 7,   
		[ 
			["heroin",1],
			["koks",1],
			["polenboeller",1],
			["zigaretten",1],
			["meth",1]
		] 
	],

	["koks", 3640, 0, 7500, 15, 10,   
		[ 
			["heroin",1], 
			["weed",1],
			["polenboeller",1],
			["zigaretten",1],
			["meth",1]
		] 
	],
		
	["heroin", 2940, 0, 6000, 15, 10,   
		[ 
			["koks",1], 
			["weed",1],
			["polenboeller",1],
			["zigaretten",1],
			["meth",1]
        ]    
	],
    
    ["polenboeller", 2100, 0, 3900, 15, 10,   
		[ 
			["weed",1], 
			["koks",1],
			["heroin",1],
			["zigaretten",1],
			["meth",1]
		] 
	],
    
    ["zigaretten", 980, 0, 4500, 15, 10,   
		[ 
			["weed",1], 
			["koks",1],
			["heroin",1],
			["polenboeller",1],
			["meth",1]
		] 
	],
    
    ["korallenketten", 9800, 0, 28200, 15, 10,   
		[ 
			["weed",1], 
			["koks",1],
			["heroin",1],
			["polenboeller",1],
			["meth",1]
		] 
	],
    
    ["meth", 2170, 0, 6030, 15, 10,   
		[ 
			["weed",1], 
			["koks",1],
			["heroin",1],
			["polenboeller",1],
			["weed",1], 
			["koks",1],
			["heroin",1],
			["polenboeller",1],
			["korallenketten",1]
		] 
	],
    
    ["uranIV", 6000, 0, 45000, 15, 10,   
		[ 
			["plutonium",1], 
			["brennstab",1]
		] 
	],
    
    ["plutonium", 17000, 0, 32000, 15, 10,   
		[ 
			["uranIV",1], 
			["brennstab",1]
		] 
	],
    
    ["brennstab", 22250, 0, 50000, 15, 10,   
		[ 
			["uranIV",1], 
			["plutonium",1],
			["atombombe",1]
		] 
	],
    
    ["atombombe", 455000, 0, 4700000, 15, 10,   
		[ 
			["uranIV",1], 
			["plutonium",1],
			["uranIV",1]
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