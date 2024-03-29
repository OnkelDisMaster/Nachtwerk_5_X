#include "..\..\script_macros.hpp"
/*

	Some random and dynamical stuff for market

*/

private["_rand","_modifier","_price", "_globalchange","_defaultprice","_shortname","_difference"];

_rand = [0,200] call life_fnc_randomRound; //0-200

/*

	HINWEIS: obige Zahl in random erhöhen, um alle ereignisse seltener zu machen!
	
*/

diag_log "[MARKET] marketChange called.";

switch(true) do
{
	case (_rand <= 30): //30% default market change value (strong version)
	{
		{
			if(random(10) <= 4) then //Random for each resource
			{
				/*_price = _x select 1;
				_globalchange = _x select 2;*/
				
				_modifier = [-20,20] call life_fnc_randomRound; //Verkaufte/Gekaufte Items
				/*_modifier = _price * _modifier;
				
				_price = _price + _modifier;
				_globalchange = _globalchange + _modifier;
				
				life_market_prices set [_forEachIndex, [_x select 0, _price, _globalchange, _modifier] ];*/
				
				if(_modifier < 0) then
				{
					[_x select 0, -(_modifier), true] call life_fnc_marketSell; 
				}
				else
				{
					[_x select 0, _modifier, true] call life_fnc_marketBuy; 
				};
			};
		}
		foreach life_market_prices;
	};
    
	case (_rand <= 36): //6% Drogenpreis erhöhen
	{
		[0,format["News: Drogenpreise sind rapide gestiegen!"]] remoteExecCall ["life_fnc_broadcast",RCLIENT];
		
		//Erhöhe Marktpreis mit marketSell
		["weed", [15,30] call life_fnc_randomRound, true] call life_fnc_marketBuy; 
		["meth", [15,30] call life_fnc_randomRound, true] call life_fnc_marketBuy; 
		["koks", [15,30] call life_fnc_randomRound, true] call life_fnc_marketBuy; 
		["heroin", [15,30] call life_fnc_randomRound, true] call life_fnc_marketBuy; 
		
		diag_log "+Market+ Event: +Drogen";
	};
    
	case (_rand <= 44): //8% Ölpreis erhöhen
	{
		[0,format["News: Ölpreise sind gestiegen!"]] remoteExecCall ["life_fnc_broadcast",RCLIENT];
		
		["oel", [20,40] call life_fnc_randomRound, true] call life_fnc_marketBuy; 
		
		diag_log "+Market+ Event: +Öl";
	};
    
	case (_rand <= 54): //10% Metallpreis
	{
		[0,format["News: Metallpreise sind gestiegen!"]] remoteExecCall ["life_fnc_broadcast",RCLIENT];
		
		["eisen", [20,40] call life_fnc_randomRound, true] call life_fnc_marketBuy; 
		["kupfer", [20,30] call life_fnc_randomRound, true] call life_fnc_marketBuy; 
		["alu", [25,35] call life_fnc_randomRound, true] call life_fnc_marketBuy;
        ["platin", [25,35] call life_fnc_randomRound, true] call life_fnc_marketBuy;         
		
		diag_log "+Market+ Event: +Metall";
	};

	case (_rand <= 60): //4% Atombombe sinkt
	{
		[0,format["News: goldbar price decreased."]] remoteExecCall ["life_fnc_broadcast",RCLIENT];
		
		["atombombe", [15,80] call life_fnc_randomRound, true] call life_fnc_marketSell; 
		
		diag_log "+Market+ Event: -Atombomen";
	};

	case (_rand <= 68): //8% Uran, Plutonium und Brennstäbe erhöht sich
	{
		[0,format["News: Uran, Plutonium und Brennstabpreise sind gestiegen!"]] remoteExecCall ["life_fnc_broadcast",RCLIENT];
		
		["uranIV", [15,30] call life_fnc_randomRound, true] call life_fnc_marketBuy; 
		["brennstab", [15,30] call life_fnc_randomRound, true] call life_fnc_marketBuy; 
        ["plutonium", [15,30] call life_fnc_randomRound, true] call life_fnc_marketBuy; 
		diag_log "+Market+ Event: +Uran & co";
	};

	case (_rand <= 74): //6% Atombombe erhöht sich
	{
		[0,format["News: goldbar price increased."]] remoteExecCall ["life_fnc_broadcast",RCLIENT];
		
		["atombombe", [15,100] call life_fnc_randomRound, true] call life_fnc_marketBuy; 
		
		diag_log "+Market+ Event: +Atombomen";
	};
    
	case (_rand <= 80): //6% Drogenpreis niedriger
	{
		[0,format["News: Drogenpreiss sind gesunken!"]] remoteExecCall ["life_fnc_broadcast",RCLIENT];
		
		//Erhöhe Marktpreis mit marketSell
		["weed", [15,30] call life_fnc_randomRound, true] call life_fnc_marketSell; 
		["meth", [15,30] call life_fnc_randomRound, true] call life_fnc_marketSell; 
		["koks", [15,30] call life_fnc_randomRound, true] call life_fnc_marketSell;
		["heroin", [15,30] call life_fnc_randomRound, true] call life_fnc_marketSell; 
		
		diag_log "+Market+ Event: -Drogen";
	};
    
	case (_rand <= 90): //10% Schildkröten höher
	{		
		[0,format["News: Uran, Plutonium und Brennstabpreise sind gesunken!"]] remoteExecCall ["life_fnc_broadcast",RCLIENT];
		
		["uranIV", [15,30] call life_fnc_randomRound, true] call life_fnc_marketSell;
		["brennstab", [15,30] call life_fnc_randomRound, true] call life_fnc_marketSell; 
        ["plutonium", [15,30] call life_fnc_randomRound, true] call life_fnc_marketSell; 
		diag_log "+Market+ Event: -Uran & co";
	};
    
	default //market change: default version
	{
		//diag_log format["[MARKET] marketChange did nothing. Rand=%1", _rand];
		{
			//Get default price
			_defaultprice = 0;
			_shortname = _x select 0;
			_price = _x select 1;
			_globalchange = _x select 2;
		
			{
				if((_x select 0) == _shortname) exitWith
				{
					_defaultprice = _x select 1;
				};
			}
			foreach life_market_resources;
			
			if(_defaultprice > 0) then
			{
			
				//Get difference
				_difference = _defaultprice - _price; //Defaultprice - current price
			
				_modifier = _difference * (random 0.4);
				_modifier = round _modifier;
			
				//Protecting hard caps
				/*if( _modifier < -700) then {_modifier = -700;};
				if( _modifier > 700) then {_modifier = 700;};*/
			
				//_modifier = [-15,25] call life_fnc_randomRound; //Verkaufte/Gekaufte Items
				
				/*if(_modifier < 0) then
				{
					[_x select 0, -(_modifier), true] call life_fnc_marketSell; 
				}
				else
				{
					[_x select 0, _modifier, true] call life_fnc_marketBuy; 
				};*/
				
				diag_log format["+Market+ Correcting market value of %1 from %2 to %3 by %4", _shortname, _price, (_price + _modifier), _modifier];
				
				_price = _price + _modifier;
				_globalchange = _globalchange + _modifier;
				
				
				
				//New price arr
				life_market_prices set [_forEachIndex, [_shortname, _price,_globalchange,_modifier] ]; //set raw values
			
			}
			else
			{
				diag_log format["+Market+ Cannot correct market value of %1", _shortname];
			};
		}
		foreach life_market_prices;
	};
};

publicVariable "life_market_prices";