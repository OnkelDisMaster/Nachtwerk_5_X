/*
    File: fn_plastik.sqf
    Author: Valle
    
    Description:
    Holt das Item aus dem Inventar und setzt es auf der Map.
*/
if (playerSide == civilian) exitwith {hint "Du bist kein Beamter!"};
private["_position","_plastik"];
_plastik = "PlasticBarrier_02_grey_F" createVehicle [0,0,0];
_plastik attachTo[player,[0,5.5,0.2]];
_plastik setDir 90;
_plastik setVariable["item","plastikDeployed",true];

life_action_plastikDeploy = player addAction["<t color='#ffffff'>Plastikabsperrung aufstellen</t>",{if(!isNull life_plastik) then {detach life_plastik; life_plastik = ObjNull;}; player removeAction life_action_plastikDeploy; life_action_plastikDeploy = nil;},"",999,false,false,"",'!isNull life_plastik'];
life_plastik = _plastik;
waitUntil {isNull life_plastik};
if(!isNil "life_action_plastikDeploy") then {player removeAction life_action_plastikDeploy;};
if(isNull _plastik) exitWith {life_plastik = ObjNull;};
_plastik setPos [(getPos _plastik select 0),(getPos _plastik select 1),0];
_plastik allowDamage false;
_plastik enableSimulation false;