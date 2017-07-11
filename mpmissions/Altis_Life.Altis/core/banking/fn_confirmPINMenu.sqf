/*
 * Author: Alexy (DiabolicaTrix)
 * Description: Opening and initializing the pin menu
*/
private["_pinBox", "_pinText", "_pinHidden", "_pinHiddenText", "_pinArray"];
params [
  ["_pin", 0, [0]]
];

if(isNull (findDisplay 45000)) then {
  if (!(createDialog "Life_banking_createconfirmaccount")) exitWith {};
};

(findDisplay 45000) displaySetEventHandler ["keyDown","_this call life_fnc_displayHandler"];

disableSerialization;
_pinBox = ((findDisplay 45000) displayCtrl 45088);
_pinBox ctrlEnable false;
_pinHidden  = ((findDisplay 45000) displayCtrl 45087);
_pinText = ctrlText _pinHidden;

if(_pin != -1 && _pin != -3) then {
  if(_pin != -2 && count (toArray _pinText) >= 4) exitWith {};
  if(_pin == -2 && count (toArray _pinText) <= 0) exitWith {};
  if(_pin == -2) then
  {
    _pinArray = _pinText splitString "";
    _pinText = "";
    for "_x" from 0 to ((count _pinArray) - 2) do {
      _pinText = _pinText + (_pinArray select _x);
    };
    _pinHidden ctrlSetText _pinText;
  } else {
    _pinText = _pinText + str _pin;
    _pinHidden ctrlSetText _pinText;
  };
  _pinHiddenText = "";
  {
    _pinHiddenText = _pinHiddenText + "*";
  } forEach (toArray _pinText);
  _pinBox ctrlSetText _pinHiddenText;
} else {
  if(_pin == -3) then {
    if(!(count (toArray _pinText) == 4)) exitWith {hint localize "STR_Banking_InvalidPin"};
    if(life_bankingpin != (parseNumber _pinText)) exitWith {hint localize "STR_Banking_WrongPinConfirm"};
    [8] call SOCK_fnc_updatePartial;
    closeDialog 0;
    hint localize "STR_Banking_PinSuccess";
  };
};
hint format ["Dein Aktueller ATM Pin Code lautet: %1, life_bankingpin];
