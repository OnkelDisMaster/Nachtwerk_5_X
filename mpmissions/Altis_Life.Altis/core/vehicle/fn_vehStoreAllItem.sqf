#include "..\..\script_macros.hpp"
#define ctrlSelData(ctrl) (lbData[##ctrl,(lbCurSel ##ctrl)])
/*
	File: fn_vehStoreAllItem.sqf
	Author: Killerknight
	
	Description:
	stores all (max items) from selected and add it to the Vehicles inventory
*/
private["_ctrl","_num","_totalWeight","_itemWeight","_veh_data","_inv","_index","_val","_truck","_FuelTrucks","_FuelStuff"];

if(!DarfEinzahlen) exitWith {[localize "STR_NOTF_Trunk_Store_Stop",true,"fast","orange","Error"]spawn Life_fnc_msg;};
if(DarfEinzahlen) then {
	DarfEinzahlen = false;
	[] spawn {
		sleep 1;
		DarfEinzahlen = true;
	};
};

disableSerialization;

_ctrl = ctrlSelData(3503);
if ((lbCurSel ((findDisplay 3500) displayCtrl 3503)) isEqualTo -1)exitWith {["Du musst zuerst etwas auswählen.",true,"fast","orange","Error"]spawn Life_fnc_msg;};
if(Life_trunk_vehicle isKindOf "House_F") then {
	_mWeight = 0;
	{_mWeight = _mWeight + ([(typeOf _x)] call Life_fnc_vehicleWeightCfg);} foreach (Life_trunk_vehicle getVariable["containers",[]]);
	_totalWeight = [_mWeight,(Life_trunk_vehicle getVariable["Trunk",[[],0]]) select 1];
} else {
	_totalWeight = [Life_trunk_vehicle] call Life_fnc_vehicleWeight;
};
_num2 = getNumber(missionConfigFile >> "VirtualItems" >> _ctrl >> "weight");
_num1 = (floor (((_totalWeight select 0) - (_totalWeight select 1)) / _num2));
_num = if (_num1 <= (ITEM_VALUE(_ctrl))) then {_num1}else{(ITEM_VALUE(_ctrl))};
if(_num < 1) exitWith {["Du hast kein Platz dafür.",true,"fast","orange","Error"]spawn Life_fnc_msg;};
_itemWeight = ([_ctrl] call Life_fnc_itemWeight) * _num;
_veh_data = Life_trunk_vehicle getVariable ["Trunk",[[],0]];
_inv = _veh_data select 0;

_Truck = TypeOf life_trunk_vehicle;
_FuelStuff = ["oelu","oel","diesel"]; //Which Items can be stored in?
_FuelTrucks = ["C_Van_01_fuel_F","B_Truck_01_fuel_F","O_Truck_02_fuel_F","O_Truck_03_fuel_F"]; //Fuel Trucks, who are allowed to carry fuel


switch (true) do
{
case ((_ctrl in _FuelStuff) && (_Truck in _FuelTrucks)): {life_TankLaster = 1}; //Fuel in FuelTruck -> Allowed
case (!(_ctrl in _FuelStuff) && !(_Truck in _FuelTrucks)): {life_TankLaster = 2}; //NonFuel in NonFuelTruck -> Allowed
case (!(_ctrl in _FuelStuff) && (_Truck in _FuelTrucks)): {life_TankLaster = 3}; //NonFuel in FuelTruck -> Nope
case ((_ctrl in _FuelStuff) && !(_Truck in _FuelTrucks)): {life_TankLaster = 4}; //Fuel in NonFuelTruck -> Nope!
};

if (life_TankLaster isEqualTo 3) exitWith {hint "Du kannst nur Öl oder Diesel in einen Tanklaster füllen! "};
if (life_TankLaster isEqualTo 4) exitWith {hint "Du kannst Öl oder Diesel NUR in einen Tanklaster füllen! ";};


if(_ctrl == "goldbar" && {!(Life_trunk_vehicle isKindOf "LandVehicle" OR Life_trunk_vehicle isKindOf "House_F")}) exitWith {["Du kannst dieses Item nur in Landfahrzeuge einlagern.",true,"fast","orange","Error"]spawn Life_fnc_msg;};

if(_ctrl == "money") then
{
	_index = [_ctrl,_inv] call TON_fnc_index;
	if(Life_cash < _num) exitWith {["Du hast nicht so viel Geld zum einlagern.",true,"fast","orange","Error"]spawn Life_fnc_msg;};
	if(_index == -1) then
	{
		_inv pushBack [_ctrl,_num];
	}
		else
	{
		_val = _inv select _index select 1;
		_inv set[_index,[_ctrl,_val + _num]];
	};
	
	Life_cash = Life_cash - _num;
	Life_trunk_vehicle setVariable["Trunk",[_inv,(_veh_data select 1) + _itemWeight],true];
	[Life_trunk_vehicle] call Life_fnc_vehInventory;
}
	else
{
	if(((_totalWeight select 1) + _itemWeight) > (_totalWeight select 0)) exitWith {["Das Fahrzeug ist voll.",true,"fast","orange","Error"]spawn Life_fnc_msg;};

	if(!([false,_ctrl,_num] call Life_fnc_handleInv)) exitWith {["Konnte das Item nicht umlagern.",true,"fast","orange","Error"]spawn Life_fnc_msg;};
	_index = [_ctrl,_inv] call TON_fnc_index;
	if(_index isEqualTo -1) then
	{
		_inv pushBack [_ctrl,_num];
	}
		else
	{
		_val = _inv select _index select 1;
		_inv set[_index,[_ctrl,_val + _num]];
	};
	
	Life_trunk_vehicle setVariable["Trunk",[_inv,(_veh_data select 1) + _itemWeight],true];
	[Life_trunk_vehicle] call Life_fnc_vehInventory;
};
closeDialog 0;