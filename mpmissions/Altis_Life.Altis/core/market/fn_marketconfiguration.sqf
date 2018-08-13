/*

	Main configuration for non-persistent market system
	Will need triggers to hook into vanilla pricing methods

*/

	//Schema: SHORTNAME, Default, Min, Max, changes in action, [Sales multiplied by 1, Purchase multiplied by -1]
	//["gold", 1500, 450, 2300, 8, 5],

////////////MAIN CONFIG

life_market_resources = [
	
	// Default İsler
	
	["oel", 5500, 0, 6250, 3, 1, 
		[ 
			["diamond_cut",1], 
			["iron_refined",1],
			["copper_refined",1],
			["gold_refined",1],
			["cement",1],
			["glass",1] 
		] 
	],
	
	["kupfer", 4530, 0, 5250, 5, 2, 
		[ 
			["oil_processed",1],
			["iron_refined",1],
			["copper_refined",1],
			["gold_refined",1],
			["salt_refined",1],
			["cement",1],
			["glass",1] 
		] 
	],
	
	["eisen", 2500, 0, 3500, 2, 1, 
		[ 
			["diamond_cut",1], 
			["oil_processed",1],
			["iron_refined",1],
			["gold_refined",1],
			["cement",1],
			["glass",1] 
		] 
	],
	
	["alu", 4530, 0, 5250, 5, 2, 
		[ 
			["oil_processed",1],
			["iron_refined",1],
			["copper_refined",1],
			["gold_refined",1],
			["salt_refined",1],
			["cement",1],
			["glass",1] 
		] 
	],
    
    ["platin", 4530, 0, 5250, 5, 2, 
		[ 
			["oil_processed",1],
			["iron_refined",1],
			["copper_refined",1],
			["gold_refined",1],
			["salt_refined",1],
			["cement",1],
			["glass",1] 
		] 
	],
    
    ["salz", 4530, 0, 5250, 5, 2, 
		[ 
			["oil_processed",1],
			["iron_refined",1],
			["copper_refined",1],
			["gold_refined",1],
			["salt_refined",1],
			["cement",1],
			["glass",1] 
		] 
	],
    
    ["glass", 4530, 0, 5250, 5, 2, 
		[ 
			["oil_processed",1],
			["iron_refined",1],
			["copper_refined",1],
			["gold_refined",1],
			["salt_refined",1],
			["cement",1],
			["glass",1] 
		] 
	],
    
    ["bambusleitung", 4530, 0, 5250, 5, 2, 
		[ 
			["oil_processed",1],
			["iron_refined",1],
			["copper_refined",1],
			["gold_refined",1],
			["salt_refined",1],
			["cement",1],
			["glass",1] 
		] 
	],
    
    ["diamant", 4530, 0, 5250, 5, 2, 
		[ 
			["oil_processed",1],
			["iron_refined",1],
			["copper_refined",1],
			["gold_refined",1],
			["salt_refined",1],
			["cement",1],
			["glass",1] 
		] 
	],
    
    ["krone", 4530, 0, 5250, 5, 2, 
		[ 
			["oil_processed",1],
			["iron_refined",1],
			["copper_refined",1],
			["gold_refined",1],
			["salt_refined",1],
			["cement",1],
			["glass",1] 
		] 
	],
	
    ["juwelen", 4530, 0, 5250, 5, 2, 
		[ 
			["oil_processed",1],
			["iron_refined",1],
			["copper_refined",1],
			["gold_refined",1],
			["salt_refined",1],
			["cement",1],
			["glass",1] 
		] 
	],
    
    ["marmor", 4530, 0, 5250, 5, 2, 
		[ 
			["oil_processed",1],
			["iron_refined",1],
			["copper_refined",1],
			["gold_refined",1],
			["salt_refined",1],
			["cement",1],
			["glass",1] 
		] 
	],
	
    ["obsidian", 4530, 0, 5250, 5, 2, 
		[ 
			["oil_processed",1],
			["iron_refined",1],
			["copper_refined",1],
			["gold_refined",1],
			["salt_refined",1],
			["cement",1],
			["glass",1] 
		] 
	],
    
	["goldbar", 55000, 0, 75000, 2, 1, 
		[ 
			["diamond_cut",1], 
			["oil_processed",1],
			["iron_refined",1],
			["copper_refined",1],
			["glass",1]
		] 
	],
	
	["weed", 5750, 0, 7500, 10, 7,   
		[ 
			["cocaine_processed",1],
			["heroin_processed",1]
		] 
	],

	["koks", 6300, 0, 7850, 15, 10,   
		[ 
			["marijuana",1], 
			["heroin_processed",1]
		] 
	],
		
	["heroin", 6500, 0, 8700, 15, 10,   
		[ 
			["marijuana",1], 
			["cocaine_processed",1]
		] 
	],
    
    ["polenboeller", 6500, 0, 8700, 15, 10,   
		[ 
			["marijuana",1], 
			["cocaine_processed",1]
		] 
	],
    
    ["zigaretten", 6500, 0, 8700, 15, 10,   
		[ 
			["marijuana",1], 
			["cocaine_processed",1]
		] 
	],
    
    ["korallenketten", 6500, 0, 8700, 15, 10,   
		[ 
			["marijuana",1], 
			["cocaine_processed",1]
		] 
	],
    
    ["meth", 6500, 0, 8700, 15, 10,   
		[ 
			["marijuana",1], 
			["cocaine_processed",1]
		] 
	],
    
    ["uranIV", 6500, 0, 8700, 15, 10,   
		[ 
			["marijuana",1], 
			["cocaine_processed",1]
		] 
	],
    
    ["plutonium", 6500, 0, 8700, 15, 10,   
		[ 
			["marijuana",1], 
			["cocaine_processed",1]
		] 
	],
    
    ["brennstab", 6500, 0, 8700, 15, 10,   
		[ 
			["marijuana",1], 
			["cocaine_processed",1]
		] 
	],
    
    ["atombombe", 6500, 0, 8700, 15, 10,   
		[ 
			["marijuana",1], 
			["cocaine_processed",1]
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