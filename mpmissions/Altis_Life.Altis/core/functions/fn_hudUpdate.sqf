#include "..\..\script_macros.hpp"

/*
    File: fn_hudUpdate.sqf
    Author: Daniel Stuart

    Description:
    Updates the HUD when it needs to.
*/
//disableSerialization;

//if (isNull LIFEdisplay) then {[] call life_fnc_hudSetup;};
//LIFEctrl(2200) progressSetPosition (life_hunger / 100);
//LIFEctrl(2201) progressSetPosition (1 - (damage player));
//LIFEctrl(2202) progressSetPosition (life_thirst / 100);

private ["_BG","_BG2","_Text_FOOD","_Text_THIRST","_Text_HEALTH","_ProgressBar_FOOD","_ProgressBar_THIRST","_seatbelt_icon"];
disableSerialization;

_ui = uiNameSpace getVariable ["playerHUD",displayNull];
if(isNull _ui) then {[] call life_fnc_hudSetup;};

_BG = _ui displayCtrl 4451;
_BG2 = _ui displayCtrl 4466;

_Text_FOOD = _ui displayCtrl 4452;
_Text_THIRST = _ui displayCtrl 4453;

_ProgressBar_FOOD = _ui displayCtrl 4459;
_ProgressBar_THIRST = _ui displayCtrl 4460;

_seatbelt_icon = _ui displayCtrl 4203; 

//Update food
_ProgressBar_FOOD progressSetPosition (1 / (100 / life_hunger));

_Text_FOOD ctrlSetText format["%1%2", life_hunger,"%"];
_Text_FOOD ctrlCommit 0;

//Update thirst
_ProgressBar_THIRST  progressSetPosition (1 / (100 / life_thirst));

_Text_THIRST ctrlSetText format["%1%2", life_thirst,"%"];
_Text_THIRST ctrlCommit 0;
//6 cutRsc ["osefStatusBarAdmin","PLAIN"];

if(!isNil "life_seatbelt") then {
    if ( vehicle player != player ) then {
        if(life_seatbelt) then {
            _seatbelt_icon ctrlSetText "icons\anschnallen.paa";
        } else {
            _seatbelt_icon ctrlSetText "icons\ico_apple.paa";
        };
    } else {
        _seatbelt_icon ctrlSetText "";
    };
};
