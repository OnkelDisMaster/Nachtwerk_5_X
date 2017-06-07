/*
	File: warnVehicles.sqf
	Author: � 2014 nano2K - written for we-are-friendly.de
*/
private["_index","_vehicle"];
disableSerialization;
if(!isNull (findDisplay 3494)) then {
hint "ICH BIN EIN TEST! warnVehicle 1";
uiSleep 3.35;
	if(nn_empInUse) exitWith { hintSilent "Das EMP warnt grade schon ein Fahrzeug"; };
	hint "ICH BIN EIN TEST! warnVehicle 2";
    uiSleep 3.35;
	nn_empInUse = true;
	_index = lbCurSel (2902);
	_vehicle = nn_last_vehicles select _index;
	if(isNull _vehicle) exitWith {};
	hint "ICH BIN EIN TEST! warnVehicle 4";
    uiSleep 3.35;
	[[_vehicle], "life_fnc_vehicleWarned",crew _vehicle,false] spawn life_fnc_MP;
	hint "ICH BIN EIN TEST! warnVehicle 5";
    uiSleep 3.35;
	uiSleep 10;
	nn_empInUse = false;
};