/*

	Author Shinji 
	Installs the illegal/legal chip for using

*/
disableSerialization;
if(!dialog) then {
	createDialog "vInteraction_Menu";
};
_veh =_this select 0;
_display = findDisplay 37400;
for "_i" from 37450 to 37455 do {
	ctrlShow [_i, false];
};
life_ve_chip = _veh;

_inst = _this select 1;

if (_inst) then {
	_deinst = _display ctrlCreate ["RscButton", 37452];
	_deinst ctrlSetPosition [0.35,0.41,0.24,0.04];
	_deinst ctrlSetText "Deinstall Chip";	
	
	_button3 = format ["hint format [(localize 'STR_chip_dein'),0]; closedialog 0; [0] spawn life_fnc_installChip;",0];
	_deinst buttonSetAction _button3;		
	_deinst ctrlCommit 0;	
} else {
	_legal = _display ctrlCreate ["RscButton", 37450];
	_illegal = _display ctrlCreate ["RscButton", 37451];	
	_legal ctrlSetPosition [0.35,0.27,0.24,0.04];
	_legal ctrlSetText "Legal Chip";	
	_illegal ctrlSetPosition [0.35,0.34,0.24,0.04];
	_illegal ctrlSetText "Illegal Chip";	

	_button = format [" hint format [(localize 'STR_chip_ins'),0]; closedialog 0; [1] spawn life_fnc_installChip;",0];
	_legal buttonSetAction _button;		
	_legal ctrlCommit 0;	

	_button2 = format ["hint format [(localize 'STR_chip_ins'),0]; closedialog 0; [2] spawn life_fnc_installChip;",0];
	_illegal buttonSetAction _button2;		
	_illegal ctrlCommit 0;		
};

	












	