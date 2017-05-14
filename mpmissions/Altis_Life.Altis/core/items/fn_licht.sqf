/*
    File: fn_licht.sqf
    Author: Valle
    
    Description:
    Holt das Item aus dem Inventar und setzt es auf der Map.
*/
if (playerSide == civilian) exitwith {hint "Du bist kein Beamter!"};
private["_position","_licht"];
_licht = "Land_Flush_Light_red_F" createVehicle [0,0,0];
_licht attachTo[player,[0,5.5,0.2]];
_licht setDir 90;
_licht setVariable["item","lichtDeployed",true];

life_action_lichtDeploy = player addAction["<t color='#ffffff'>Licht aufstellen</t>",{if(!isNull life_licht) then {detach life_licht; life_licht = ObjNull;}; player removeAction life_action_lichtDeploy; life_action_lichtDeploy = nil;},"",999,false,false,"",'!isNull life_licht'];
life_licht = _licht;
waitUntil {isNull life_licht};
if(!isNil "life_action_lichtDeploy") then {player removeAction life_action_lichtDeploy;};
if(isNull _licht) exitWith {life_licht = ObjNull;};
_licht setPos [(getPos _licht select 0),(getPos _licht select 1),0];
_licht allowDamage false;
_licht enableSimulation false;