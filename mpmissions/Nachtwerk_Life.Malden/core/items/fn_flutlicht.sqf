/*
    File: fn_flutlicht.sqf
    Author: Valle
    
    Description:
    Holt das Item aus dem Inventar und setzt es auf der Map.
*/
if (playerSide == civilian) exitwith {hint "Du bist kein Beamter!"};
private["_position","_flutlicht"];
_flutlicht = "Land_PortableLight_double_F" createVehicle [0,0,0];
_flutlicht attachTo[player,[0,5.5,0.2]];
_flutlicht setDir 90;
_flutlicht setVariable["item","flutlichtDeployed",true];

life_action_flutlichtDeploy = player addAction["<t color='#ffffff'>Flutlicht aufstellen</t>",{if(!isNull life_flutlicht) then {detach life_flutlicht; life_flutlicht = ObjNull;}; player removeAction life_action_flutlichtDeploy; life_action_flutlichtDeploy = nil;},"",999,false,false,"",'!isNull life_flutlicht'];
life_flutlicht = _flutlicht;
waitUntil {isNull life_flutlicht};
if(!isNil "life_action_flutlichtDeploy") then {player removeAction life_action_flutlichtDeploy;};
if(isNull _flutlicht) exitWith {life_flutlicht = ObjNull;};
_flutlicht setPos [(getPos _flutlicht select 0),(getPos _flutlicht select 1),0];
_flutlicht allowDamage false;
_flutlicht enableSimulation false;