#include "..\..\script_macros.hpp"
/*
    File: fn_playerSkins.sqf
    Author: Daniel Stuart

    Description:
    Sets skins for players by their side and uniform.
*/
private["_skinName"];

switch (playerSide) do {
/*  case civilian: {
        if (uniform player isEqualTo "U_C_Poloshirt_blue") then {
			player setObjectTextureGlobal [0, "skins\civilian_uniform_1.jpg"];
        };     
    };
*/
    case west: {
			if (uniform player isEqualTo "U_Rangemaster") then {
				player setObjectTextureGlobal [0,"skins\human\cop\NW_PD_uniform_KV.paa"];
			};
			if (uniform player isEqualTo "U_B_CombatUniform_mcam_vest") then {
				player setObjectTextureGlobal [0,"skins\human\cop\polizei_uniform.jpg"];
			};
			if (uniform player isEqualTo "U_B_SpecopsUniform_sgg") then {
				player setObjectTextureGlobal [0,"skins\human\cop\polizei2.jpg"];
			};
			if (uniform player isEqualTo "U_B_CombatUniform_mcam") then {
				player setObjectTextureGlobal [0,"skins\human\cop\sek.jpg"];
			};
			if (uniform player isEqualTo "U_B_CombatUniform_mcam_worn") then {
				player setObjectTextureGlobal [0,"skins\human\cop\sek_NW.paa"];
			};
    };
	
	case independent: {
    *    if (uniform player isEqualTo "U_B_CombatUniform_mcam") then {
			player setObjectTextureGlobal [0, "skins\human\medic\FW_Uniform.paa"];
        };  */
		if (backpack player isEqualTo "B_Kitbag_sgg") then {
			(unitBackpack player) setObjectTextureGlobal [0, "skins\human\medic\FW_backpack.paa"];
        };     
    };
};
