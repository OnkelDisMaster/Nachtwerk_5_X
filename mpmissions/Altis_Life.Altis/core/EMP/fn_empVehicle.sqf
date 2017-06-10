/*
	File: empVehicles.sqf
	Author: � 2014 nano2K - written for we-are-friendly.de
*/
private["_index","_vehicle"];
disableSerialization;
if(!isNull (findDisplay 3494)) then {
	if(nn_empInUse) exitWith { hintSilent "Das EMP warnt grade schon ein Fahrzeug oder die Batterie muss sich erst wieder aufladen"; };
	nn_empInUse = true;
	_index = lbCurSel (2902);
	_vehicle = nn_last_vehicles select _index;
	if(isNull _vehicle) exitWith {};
	(vehicle player) say3D "empacsound";
// alt	[[_vehicle], "life_fnc_vehicleEmpd",crew _vehicle,false] spawn life_fnc_MP;
	[_vehicle] remoteExecCall ["life_fnc_vehicleEmpd",crew _vehicle];
	hint format ["Fahrzeug: %1 \n crew: %2", _vehicle,crew _vehicle];
	uiSleep (1 * 60);
	nn_empInUse = false;
};