/*
	File: fn_speedBomb.sqf
	Author: Fuzz
	
	Description:
	Attaches a speed bomb to a vehicle.
*/
private["_unit"];
_unit = cursorTarget;

if(!license_civ_rebel) exitWith {hint "You need Rebel Training to use it."}; // OPTIONAL - If you want license to plant the bomb.
if((!(_unit isKindOf "LandVehicle"))&&(!(_unit getVariable ["restrained",false]))) exitWith {hint "You cannot add a speed bomb unit to this."};
if(player distance _unit > 7) exitWith {hint "You need to be within 7 feet!"};
if(!([false,"speedbomb",1] call life_fnc_handleInv)) exitWith {};
closeDialog 0;
 
life_action_inUse = true;
 
player playMove "AinvPknlMstpSnonWnonDnon_medic_1";
sleep 1.5;
waitUntil {animationState player != "ainvpknlmstpsnonwnondnon_medic_1"};
 
life_action_inUse = false;
if(player distance _unit > 7) exitWith {titleText["You are not in range!","PLAIN"];};
 
titleText["You have attached an armed speed bomb to this vehicle.","PLAIN"];
//life_experience = life_experience + 25;
 
[_unit] spawn
{
	_veh = _this select 0;
	waitUntil {(speed _veh) > 70}; // 70 - Speed for activate the bomb. You can change if you want ;)
	[player,"bomb"] remoteExec ["life_fnc_say3D",RANY];
	hint "A speed bomb you planted on a vehicle has just become active!";
	{ [[2,"A speed bomb has been activated on this vehicle and will detonate when your speed drops below 50km/h!"],"life_fnc_broadcast",_x,false] spawn BIS_fnc_MP; } foreach (crew _veh);
	waitUntil {(speed _veh) < 50}; // 50 - Speed that the bomb will explode. You change it what you want. Don't forget to change the text above too.
	serv_killed = [player,"1090"];
	publicVariableServer "serv_killed";
	_test = "Bo_Mk82" createVehicle [0,0,9999];
	_test setPos (getPos _veh);
	_test setVelocity [100,0,0];
	hint "A speed bomb you planted on a vehicle has DETONATED!";
};