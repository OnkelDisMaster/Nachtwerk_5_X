/*
    File: fn_blitzer.sqf
    Author: Valle
    
    Description:
    Holt das Item aus dem Inventar und setzt es auf der Map.
*/
if (playerSide == civilian) exitwith {hint "Du bist kein Beamter!"};
private["_position","_blitzer"];
_blitzer = "Land_Runway_PAPI" createVehicle [0,0,0];
_blitzer attachTo[player,[0,5.5,0.2]];
_blitzer setDir 90;
_blitzer setVariable["item","blitzerDeployed",true];

life_action_blitzerDeploy = player addAction["<t color='#ffffff'>Blitzer aufstellen</t>",{if(!isNull life_blitzer) then {detach life_blitzer; life_blitzer = ObjNull;}; player removeAction life_action_blitzerDeploy; life_action_blitzerDeploy = nil;},"",999,false,false,"",'!isNull life_blitzer'];
life_blitzer = _blitzer;
waitUntil {isNull life_blitzer};
if(!isNil "life_action_blitzerDeploy") then {player removeAction life_action_blitzerDeploy;};
if(isNull _blitzer) exitWith {life_blitzer = ObjNull;};
_blitzer setPos [(getPos _blitzer select 0),(getPos _blitzer select 1),0];
_blitzer allowDamage false;
_blitzer enableSimulation false;