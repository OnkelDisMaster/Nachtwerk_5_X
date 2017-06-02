/*

	Author Shinji
	Sets the var to the damn car

*/

_mode = _this select 0;

switch(_mode) do {
	
	case 0: {
		life_ve_chip setvariable ['Chipsatz',0,true];
	};
	case 1: {
		life_ve_chip setvariable ['Chipsatz',1,true];
	};
	case 2: {
		life_ve_chip setvariable ['Chipsatz',2,true];
	};
	
};