/*
	File: warnVehicles.sqf
	Author: � 2014 nano2K - written for we-are-friendly.de
*/
private["_index","_vehicle"];
disableSerialization;
if(!isNull (findDisplay 3494)) then {
	if(nn_empInUse) exitWith { hintSilent "Das EMP warnt grade schon ein Fahrzeug"; };
	nn_empInUse = true;
	_index = lbCurSel (2902);
	_vehicle = nn_last_vehicles select _index;
	if(isNull _vehicle) exitWith {};
//	hint format["[]: %1 \n crew: %2 \n veh: %3",[_vehicle], crew _vehicle,_vehicle];
	[_vehicle] remoteExecCall ["life_fnc_vehicleWarned",crew _vehicle];
	uiSleep 10;
	nn_empInUse = false;
};