/*
##################### DYNAMIC MARKET SCRIPT #####################
### AUTHOR: RYAN TT. ###
### STEAM: www.steamcommunity.com/id/ryanthett ###
### ###
### DISCLAIMER: THIS SCRIPT CAN BE USED ON EVERY SERVER ONLY ###
### WITH THIS HEADER / NOTIFICATION ###
#################################################################
*/




// In this file you can configure random events
DYNMARKET_chance = 20; // Chance for a random event to happen
DYNMARKET_Events =
[
 ["Ein �l Tanker ist gesunken wodurch die �lpreise gestiegen sind!",["oel","diesel"],-1], // -1 MEANS CHANGE PRICE TO MAX, -2 TO MIN, OR A VALUE TO WHICH THE PRICE BE CHANGED TO
 ["Die B�rger scheinen Ges�nder zu leben und mehr Obst zu essen, dadurch ist die Nachfrage nach Obst/-Saft gestiegen!",["apple","peach","ananas","bananen","kokosnuss","apfelsaft","pfirsichsaft","ananassaft","bananensaft","kokosnussmilch"],-1],
 ["Die Altiskom hat beschlossen das Kommunikationsnetz teuer auszubauen und ben�tigt daf�r Bambusleitungen!",["bambusleitung"],-1],
 ["Es werden nicht mehr genug Zigaretten hergestellt!\n Die Kettenraucher fordern f�r einen Aufpreis mehr Kippen!!",["zigaretten"],-1],
 ["Das Kraftwerk Kavala hat keine Brennst�be mehr!\n Die Nachfrage ist dadurch extrem gestiegen!",["brennstab"],42000],
 ["China ist an Metallen interessiert, dadurch steigt die Nachfrage extrem!",["eisen","kupfer","alu","platin"],-1]
];

_random = floor(random 100)+1;
if (_random>DYNMARKET_chance) exitWith {DYNMARKET_waitForEvent = true;};
_eventCount = count DYNMARKET_Events;
_randomEventID = floor(random _eventCount);
_eventToHappen = DYNMARKET_Events select _randomEventID;

// Create the event
_eventMessage = _eventToHappen select 0;
_eventItems = _eventToHappen select 1;
_eventToPrice = _eventToHappen select 2;

{
 _itemName = _x;
 _itemNewPrice = 0;
 _index = -1;
 {
 _index = _index + 1;
 if (_x select 0 == _itemName) then {
 if (_eventToPrice==-1) then {
 {
 {
 if (_x select 0 == _itemName) then {_itemNewPrice = _x select 2;};
 } forEach (_x select 1);
 } forEach DYNMARKET_Items_Groups;
 DYNMARKET_sellarraycopy set [_index,[_x select 0,_itemNewPrice]];
 DYNMARKET_Items_CurrentPriceArr set [_index,[_x select 0,_itemNewPrice,0]];
 } else {
 if (_eventToPrice==-2) then {
 {
 {
 if (_x select 0 == _itemName) then {_itemNewPrice = _x select 3;};
 } forEach (_x select 1);
 } forEach DYNMARKET_Items_Groups;
 DYNMARKET_sellarraycopy set [_index,[_x select 0,_itemNewPrice]];
 DYNMARKET_Items_CurrentPriceArr set [_index,[_x select 0,_itemNewPrice,0]];
 } else {
 DYNMARKET_sellarraycopy set [_index,[_x select 0,_eventToPrice]];
 DYNMARKET_Items_CurrentPriceArr set [_index,[_x select 0,_eventToPrice,0]];
 };
 };
 };
 } forEach DYNMARKET_sellarraycopy;
} forEach _eventItems;


DYNMARKET_waitForEvent = true;

sleep 2;

//diag_log "### DYNMARKET >> Event semd to be startet errorless ###";
//diag_log " %1 ", _eventMessage;
//[[0,_eventMessage],"life_fnc_broadcast",true,false] spawn life_fnc_MP;
[0,_eventMessage,true] remoteExecCall ["life_fnc_broadcast",-2];

_text = _eventMessage;
_title = "MARKT ALARM";
_color = "pink";
[_text,_title,_color] remoteExec ["MSG_fnc_handle",civilian];