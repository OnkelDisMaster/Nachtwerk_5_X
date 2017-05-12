/*
##################### DYNAMIC MARKET SCRIPT #####################
### AUTHOR: RYAN TT.                                          ###
### STEAM: www.steamcommunity.com/id/ryanthett                ###
###                                                           ###
### DISCLAIMER: THIS SCRIPT CAN BE USED ON EVERY SERVER ONLY  ###
###             WITH THIS HEADER / NOTIFICATION               ###
#################################################################
*/
/* Alt
_playerUID = _this select 0;
[1,DYNMARKET_sellarraycopy] remoteExecCall ["life_fnc_update",_playerUID];
*/
_playerUID = owner (_this select 0);
[1,DYNMARKET_sellarraycopy] remoteExecCall ["life_fnc_update",_playerUID];
