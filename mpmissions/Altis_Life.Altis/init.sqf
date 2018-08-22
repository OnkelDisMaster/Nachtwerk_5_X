/*
    File: init.sqf
    Author: 
    
    Description:
    
*/
StartProgress = false;

if (hasInterface) then {
    [] execVM "briefing.sqf"; //Load Briefing
};
[] execVM "KRON_Strings.sqf";
[] execVM "core\functions\fn_teargas.sqf"; //Load Teargas Script for Cops
[] execVM "nw_functions\savezone.sqf"; //Load the Savezones

if(isDedicated && isNil("life_market_prices")) then
{
[] call life_fnc_marketconfiguration;
diag_log "Markt Preise generiert!";
 
"life_market_prices" addPublicVariableEventHandler
{
diag_log format["Markt Preise geupdated! %1", _this select 1];
};

//Start server fsm
[] execFSM "core\fsm\server.fsm";
diag_log "Server FSM executed";
};

StartProgress = true;
