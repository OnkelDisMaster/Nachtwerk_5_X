/*
    File: init.sqf
    Author: 
    
    Description:
    
*/
StartProgress = false;
DYNAMICMARKET_boughtItems = [];
[player] remoteExec ["TON_fnc_playerLogged",RSERV];
[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";

StartProgress = true;



