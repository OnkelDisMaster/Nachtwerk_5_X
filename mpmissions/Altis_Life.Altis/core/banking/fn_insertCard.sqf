/*
 * Author: Alexy (DiabolicaTrix)
 * Description: Card inserted
*/
private["_sound"];
params [
  ["_param", 0, [0]]
];

if(_param == 1) then {
  if(life_banking_isclosing) exitWith {};
  life_banking_isclosing = true;
  playSound "InsertCard";
  _sound = ASLToAGL [0,0,0] nearestObject "#soundonvehicle";
  life_banking_isclosing = false;
  closeDialog 0;
} else {
  playSound "InsertCard";
  _sound = ASLToAGL [0,0,0] nearestObject "#soundonvehicle";
  [-1] spawn life_fnc_PINMenu;
};
