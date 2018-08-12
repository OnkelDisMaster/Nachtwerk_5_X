/*
    File: fn_bunker.sqf
    Author: Valle
    
    Description:
    Holt das Item aus dem Inventar und setzt es auf der Map.
*/
if (playerSide == civilian) exitwith {hint "Du bist kein Beamter!"};
private["_position","_bunker"];
_bunker = "Land_Medevac_HQ_V1_F" createVehicle [0,0,0];
_bunker attachTo[player,[0,5.5,0.2]];
_bunker setDir 90;
_bunker setVariable["item","bunkerDeployed",true];

life_action_bunkerDeploy = player addAction["<t color='#ffffff'>Bunker errichten</t>",{if(!isNull life_bunker) then {detach life_bunker; life_bunker = ObjNull;}; player removeAction life_action_bunkerDeploy; life_action_bunkerDeploy = nil;},"",999,false,false,"",'!isNull life_bunker'];
life_bunker = _bunker;
waitUntil {isNull life_bunker};
if(!isNil "life_action_bunkerDeploy") then {player removeAction life_action_bunkerDeploy;};
if(isNull _bunker) exitWith {life_bunker = ObjNull;};
_bunker setPos [(getPos _bunker select 0),(getPos _bunker select 1),0];
_bunker allowDamage false;
_bunker enableSimulation true;