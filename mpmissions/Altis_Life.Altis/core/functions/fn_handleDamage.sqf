#include "..\..\script_macros.hpp"
/*
    File: fn_handleDamage.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Handles damage, specifically for handling the 'tazer' pistol and nothing else.
*/
params [
    ["_unit",objNull,[objNull]],
    ["_part","",[""]],
    ["_damage",0,[0]],
    ["_source",objNull,[objNull]],
    ["_projectile","",[""]],
    ["_index",0,[0]]
];

//Handle the tazer first (Top-Priority).
if(!isNull _source) then {
	if(_source != _unit) then {
		_curWep = currentWeapon _source;
		if(_projectile in ["B_556x45_dual","B_50BW_Ball_F","B_45ACP_Ball","B_127x108_Ball","B_127x108_APDS","B_762x39_Ball_Green_F"] && _curWep in ["arifle_SDAR_F","arifle_ARX_blk_F","srifle_GM6_F","srifle_GM6_LRPS_F","srifle_GM6_SOS_F","hgun_Pistol_heavy_01_F","hgun_Pistol_heavy_01_snds_F","hgun_Pistol_heavy_01_MRD_F","arifle_AK12_GL_F","arifle_AK12_F"]) then {
			if(side _source isEqualTo west && playerSide != west) then {
				private["_distance","_isVehicle","_isQuad"];
				_isVehicle = if(vehicle player != player) then {true} else {false};
				
				_damage = false;
					if(!life_istazed && !(_unit getVariable["restrained",false])) then {
						if(_isVehicle) then {
							player action ["Eject",vehicle player];
							moveOut (vehicle player);
							[_unit,_source] spawn life_fnc_tazed;
						} else {
							[_unit,_source] spawn life_fnc_tazed;
						};
					};
			};			
			if(playerSide isEqualTo independent && side _source isEqualTo independent) then {
				_damage = false;
			};
			//Temp fix for super tasers on cops.
			if(playerSide isEqualTo west && side _source isEqualTo west) then {
				_damage = false;
			};
            
		};
	};
};

if(vehicle _unit isEqualTo _unit) then {
    if(_source isKindOf "Air" OR _source isKindOf "Car" OR _source isKindOf "Boat") then    { //Vehicle without Player
    }else{
        _isVehicle = vehicle _source;
        if(_isVehicle isKindOf "Air" OR _isVehicle isKindOf "Car" OR _isVehicle isKindOf "Boat") then    { //Vehicle driven by a player
            _damage = false;
			moveOut player;
            player playMove "amovppnemstpsraswrfldnon";
        };
    };
};

if ((vehicle _unit) isKindOf "Car" && (isNull _source || _source isEqualTo _unit)) then
{
	_damage = if (life_seatbelt) then { _damage / 2 } else { _damage};
};

[] spawn life_fnc_hudUpdate;
_damage;