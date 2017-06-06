#include "..\..\script_macros.hpp"
/*

? 2014 nano2K - written for we-are-friendly.de
*/
_player = _this select 0;
_slot = assignedVehicleRole player;
_vehicle = vehicle player;
_result = false;
_heli = ["B_Heli_Light_01_F","I_Heli_light_03_unarmed_F","O_Heli_Light_02_unarmed_F","I_Heli_Transport_02_F","B_Heli_Transport_01_F","B_Heli_Transport_03_F","I_MRAP_03_F","B_MRAP_01_F","C_Offroad_01_F","C_Hatchback_01_F","C_Hatchback_01_sport_F","I_APC_Wheeled_03_cannon_F","C_SUV_01_F"];

if((_vehicle != player) && (playerSide == west)) && (life_coplevel > 2) then {
    if((typeof _vehicle in _heli) && (_vehicle getVariable ["nano_emp_enabled", false])) then {
        if(_slot select 0 == "Turret") then {
            if(_slot select 1 select 0 == 0) then {
                _result = true;
            };
        }
    };
};
_result;