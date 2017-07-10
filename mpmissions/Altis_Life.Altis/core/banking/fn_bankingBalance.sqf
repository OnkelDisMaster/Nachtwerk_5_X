/*
 * Author: Alexy (DiabolicaTrix)
 * Description: Opens the balance menu
*/
if(isNull (findDisplay 45050)) then {
  if (!(createDialog "Life_banking_balance")) exitWith {};
};
disableSerialization;

((findDisplay 45050) displayCtrl 45051) ctrlSetStructuredText parseText format["<img size='1.7' image='icons\ico_bank.paa'/> $%1<br/><img size='1.6' image='icons\ico_money.paa'/> $%2",[life_atmbank] call life_fnc_numberText,[life_cash] call life_fnc_numberText];
