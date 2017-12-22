/*
    File: fn_houseConfig.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Master config file for buyable houses?
*/
private["_house"];
_house = [_this,0,"",[""]] call BIS_fnc_param;
if (_house isEqualTo "") exitWith {[]};

/*
    Return Format:
    [price,# of containers allowed]
*/
switch (true) do {
    case (_house in ["Land_i_House_Big_02_V1_F","Land_i_House_Big_02_V2_F","Land_i_House_Big_02_V3_F"]): {[28000000,3]};
    case (_house in ["Land_i_House_Big_01_V1_F","Land_i_House_Big_01_V2_F","Land_i_House_Big_01_V3_F"]): {[35000000,4]};
    case (_house in ["Land_i_Garage_V1_F","Land_i_Garage_V2_F"]): {[4000000,0]};
    case (_house in ["Land_i_House_Small_01_V1_F","Land_i_House_Small_01_V2_F","Land_i_House_Small_01_V3_F"]): {[20000000,2]};
    case (_house in ["Land_i_House_Small_02_V1_F","Land_i_House_Small_02_V2_F","Land_i_House_Small_02_V3_F"]): {[20000000,2]};
    case (_house in ["Land_i_House_Small_03_V1_F"]): {[15000000,2]};
    case (_house in ["Land_i_Stone_HouseSmall_V2_F","Land_i_Stone_HouseSmall_V1_F","Land_i_Stone_HouseSmall_V3_F"]): {[6500000,1]};
	//Apex Häuser
	case (_house in ["Land_i_House_Big_01_b_whiteblue_F"]): {[60000000,5]};
	case (_house in ["Land_House_Big_03_F"]): {[100000000,8]};
	//Malden Häuser
	case (_house in ["Land_i_House_Big_02_b_brown_F","Land_i_House_Big_02_b_white_F","Land_i_House_Big_02_b_pink_F","Land_i_House_Big_02_b_blue_F"]): {[80000000,6]};	//NW Schnöselberg Groß
	case (_house in ["Land_i_House_Small_02_b_blue_F"]): {[70000000,3]};
	case (_house in ["Land_i_House_Small_01_b_brown_F","Land_i_House_Small_01_b_white_F","Land_i_House_Small_01_b_blue_F"]): {[60000000,4]};	//NW Schnöselberg Klein
    default {[]};
};