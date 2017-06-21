#include "..\..\script_macros.hpp"
/*
	File: fn_vInteractionMenu.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Replaces the mass addactions for various vehicle actions
*/
#define Btn1 37450
#define Btn2 37451
#define Btn3 37452
#define Btn4 37453
#define Btn5 37454
#define Btn6 37455
#define Title 37401
private["_display","_curTarget","_Btn1","_Btn2","_Btn3","_Btn4","_Btn5","_Btn6","_veh"];
if(!dialog) then {
	createDialog "vInteraction_Menu";
};
disableSerialization;
_curTarget = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_veh = (_curTarget isKindOf "landVehicle") OR (_curTarget isKindOf "Ship") OR (_curTarget isKindOf "Air");
if(isNull _curTarget) exitWith {closeDialog 0};
if(not (_veh)) exitWith {closeDialog 0};
_isVehicle = if((_curTarget isKindOf "landVehicle") OR (_curTarget isKindOf "Ship") OR (_curTarget isKindOf "Air")) then {true} else {false};
if(!_isVehicle) exitWith {closeDialog 0;};
_display = findDisplay 37400;
_Btn1 = _display displayCtrl Btn1;
_Btn2 = _display displayCtrl Btn2;
_Btn3 = _display displayCtrl Btn3;
_Btn4 = _display displayCtrl Btn4;
_Btn5 = _display displayCtrl Btn5;
_Btn6 = _display displayCtrl Btn6;
_Btn7 = _display displayCtrl Btn7;
life_vInact_curTarget = _curTarget;
_chip = life_vInact_curTarget getvariable ["Chipsatz",0]; // 0 fpr nicht nichts, 1 für legal, 2 für illegal

//Set Repair Action
_Btn1 ctrlSetText localize "STR_vInAct_Repair";
_Btn1 buttonSetAction "[life_vInact_curTarget] spawn life_fnc_repairTruck;";

if("ToolKit" in (items player)) then {_Btn1 ctrlEnable true;} else {_Btn1 ctrlEnable false;};
if(_curTarget isKindOf "Ship") then {
		_Btn2 ctrlSetText localize "STR_vInAct_PushBoat";
		_Btn2 buttonSetAction "[] spawn life_fnc_pushObject; closeDialog 0;";
		if(_curTarget isKindOf "Ship" && {local _curTarget} && {count crew _curTarget isEqualTo 0}) then { _Btn2 ctrlEnable true;} else {_Btn2 ctrlEnable false};
	} else {
		_Btn2 ctrlSetText localize "STR_vInAct_Unflip";
		_Btn2 buttonSetAction "life_vInact_curTarget setPos [getPos life_vInact_curTarget select 0, getPos life_vInact_curTarget select 1, (getPos life_vInact_curTarget select 2)+0.5]; closeDialog 0;";
		if(count crew _curTarget isEqualTo 1 && {canMove _curTarget}) then { _Btn2 ctrlEnable false;} else {_Btn2 ctrlEnable true;};
	};

if (_veh) then {
switch (playerside) do
{
	case civilian:
	{
		_Btn5 ctrlShow false;
		
		if(license_civ_rebel) then
		{
		_Btn4 ctrlSetText localize "STR_vInAct_PullOut";
		_Btn4 buttonSetAction "[life_vInact_curTarget] spawn life_fnc_pulloutAction;";
		if(count crew _curTarget isEqualTo 0) then {_Btn4 ctrlEnable false;};
		};
		
		if((typeOf _curTarget isEqualTo "O_Truck_03_device_F") or (typeOf _curTarget isEqualTo "O_Truck_03_device_ghex_F")) then {
		_Btn3 ctrlSetText localize "STR_vInAct_DeviceMine";
		_Btn3 buttonSetAction "[life_vInact_curTarget] spawn life_fnc_deviceMine";
		if(!isNil {(_curTarget getVariable "mining")} OR !local _curTarget && {_curTarget in life_vehicles}) then {_Btn3 ctrlEnable false;};
		} else {
        _Btn3 ctrlShow false;
        if (typeOf (_curTarget) in ["C_Van_01_fuel_F","I_Truck_02_fuel_F","B_Truck_01_fuel_F"] && _curTarget in life_vehicles) then {
            if (!isNil {_curTarget getVariable "fuelTankWork"}) then {
                _Btn3 ctrlSetText localize "STR_FuelTank_Stop";
                _Btn3 buttonSetAction "life_vInact_curTarget setVariable [""fuelTankWork"",nil,true]; closeDialog 0;";
                _Btn3 ctrlShow true;
            } else {
                if (count (nearestObjects [_curTarget, ["Land_FuelStation_Feed_F","Land_fs_feed_F"], 15]) > 0) then {
                    _Btn3 ctrlSetText localize "STR_FuelTank_Supply";
                    _Btn3 buttonSetAction "[life_vInact_curTarget] spawn life_fnc_fuelSupply";
                    _Btn3 ctrlShow true;
                }else{
                    {
                        if (player distance (getMarkerPos _x) < 20) exitWith {
                            _Btn3 ctrlSetText localize "STR_FuelTank_Store";
                            _Btn3 buttonSetAction "[life_vInact_curTarget] spawn life_fnc_fuelStore";
                            _Btn3 ctrlShow true;
                        };
                    } forEach ["fuel_storage_1","fuel_storage_2"];
                };
            };
        };
		};
		
		if (typeOf (_curTarget) in ["C_Plane_Civil_01_F","B_T_VTOL_01_vehicle_blue_F","B_T_VTOL_01_vehicle_olive_F","C_Offroad_02_unarmed_red_F","O_T_VTOL_02_vehicle_hex_F","O_T_LSV_02_unarmed_black_F","O_T_LSV_02_unarmed_arid_F","B_T_LSV_01_unarmed_black_F","B_T_LSV_01_unarmed_olive_F","C_Kart_01_Blu_F","C_Kart_01_Red_F","C_Kart_01_Fuel_F","C_Kart_01_Vrana_F","B_Heli_Transport_03_F","B_Heli_Transport_03_unarmed_F","O_Heli_Transport_04_F","O_Heli_Transport_04_ammo_F","O_Heli_Transport_04_bench_F","O_Heli_Transport_04_box_F","O_Heli_Transport_04_covered_F","O_Heli_Transport_04_fuel_F","O_Heli_Transport_04_medevac_F","O_Heli_Transport_04_repair_F"]) then {
			_Btn6 ctrlSetText "Einsteigen";
			_Btn6 buttonSetAction "player moveInDriver life_vInact_curTarget; closeDialog 0;";
			if(count crew _curTarget isEqualTo 0 && {canMove _curTarget} && {locked _curTarget isEqualTo 0}) then {_Btn6 ctrlEnable true;} else {_Btn6 ctrlEnable false};
		} else {_Btn6 ctrlShow false;};
	};
	case independent:
	{
		_Btn3 ctrlShow true;
		_Btn3 ctrlSetText "Aufbrechen";
		_Btn3 buttonSetAction "[cursorTarget,0] remoteExec ['life_fnc_lockVehicle',cursorTarget];";	
		_Btn3 ctrlEnable true;
	
		_Btn5 ctrlShow true;
		_Btn5 ctrlSetText "Abschleppen";
		_Btn5 buttonSetAction "[life_vInact_curTarget] spawn life_fnc_impoundAction;";
		_Btn5 ctrlEnable true;
	
		_Btn6 ctrlShow true;
		_Btn6 ctrlSetText "Eigentümer";
		_Btn6 buttonSetAction "[life_vInact_curTarget] spawn life_fnc_searchVehAction;";
		_Btn6 ctrlEnable true;

		//Set Ticket Button
        _Btn7 ctrlSetText localize "STR_pInAct_TicketBtn";
        _Btn7 buttonSetAction "[life_pInact_curTarget] call life_fnc_ticketAction;";

		if (_chip isEqualTo 0) then {
			_Btn4 ctrlShow true;
			_Btn4 ctrlSetText localize "STR_chip_ac";
			_Btn4 buttonSetAction "[life_vInact_curTarget,false] spawn life_fnc_chipInstall;";
			_Btn4 ctrlEnable true;
		}  else {
			_Btn4 ctrlShow true;
			_Btn4 ctrlSetText localize "STR_chip_ac2";
			_Btn4 buttonSetAction "[life_vInact_curTarget,true] spawn life_fnc_chipInstall;";
			_Btn4 ctrlEnable true;
		};
	};
	case west:
	{
		_Btn6 ctrlShow true;
		_Btn6 ctrlSetText "Eigentümer";
		_Btn6 buttonSetAction "[life_vInact_curTarget] spawn life_fnc_searchVehAction;";
		_Btn6 ctrlEnable true;
	
		_Btn3 ctrlSetText localize "STR_vInAct_SearchVehicle";
		_Btn3 buttonSetAction "[life_vInact_curTarget] spawn life_fnc_vehInvSearch;";
	
		_Btn4 ctrlSetText localize "STR_vInAct_PullOut";
		_Btn4 buttonSetAction "[life_vInact_curTarget] spawn life_fnc_pulloutAction;";
		if(count crew _curTarget isEqualTo 0) then {_Btn4 ctrlEnable false;};
	
		_Btn5 ctrlSetText localize "STR_vInAct_Impound";
		_Btn5 buttonSetAction "[life_vInact_curTarget] spawn life_fnc_impoundAction;";
	};
};
};	

	
	
	
