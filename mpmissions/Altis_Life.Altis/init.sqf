/*
    File: init.sqf
    Author: 
    
    Description:
    
*/
StartProgress = false;

if (hasInterface) then {
    [] execVM "briefing.sqf"; //Load Briefing
    [] call life_fnc_teargas;
    [] call life_fnc_savezone; //Load the Savezones
} else {
	[] spawn 
	{
		for [{_i=0}, {_i < 12}, {_i = _i + 1}] do 
		{
			sleep (60*30);	
			[] spawn life_fnc_randomDealer;
		};
	};
};

[] execVM "KRON_Strings.sqf";

if(isDedicated && isNil("life_market_prices")) then
{
[] call life_fnc_marketconfiguration;
diag_log "Markt Preise generiert!";
 
"life_market_prices" addPublicVariableEventHandler
{
diag_log format["Markt Preise geupdated! %1", _this select 1];
};

MAC_fnc_switchMove = {
 private["_object","_anim"];
 _object = _this select 0;
 _anim = _this select 1;
 _object switchMove _anim;
};

//Start server fsm
[] execFSM "core\fsm\server.fsm";
diag_log "Server FSM executed";
};

StartProgress = true;
