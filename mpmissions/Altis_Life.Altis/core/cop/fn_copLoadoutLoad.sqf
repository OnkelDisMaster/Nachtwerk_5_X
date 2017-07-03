/*
fn_copLoadoutLoad.sqf

AUTHOR: OnkelDisMaster (afo-odin.com)
VERSION: v1.0 Nov 2015
*/

disableSerialization;
private["_loadout"];

_loadout = lbText[77403,(lbCurSel 77403)];

//Testing
hint _loadout;

switch _loadout do
{
	case "Rekruten Bank/ Tanken Loadout":
	{
	private["_handle"];
	_handle = [] spawn life_fnc_stripDownPlayer;
	waitUntil {scriptDone _handle};
	player addUniform "U_B_SpecopsUniform_sgg";
	player addVest "V_TacVest_blk_POLICE";
	player addBackpack "B_Bergen_dgtl_F";
	player addHeadgear "H_Cap_police";
	// TAZER
	player addWeapon "hgun_Pistol_heavy_01_snds_F",
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addItem "optic_MRD";
	// SCHARFE WAFFE
	player addWeapon "arifle_MX_Black_Hamr_pointer_F";
	player addMagazine "30Rnd_65x39_caseless_mag";
	player addMagazine "30Rnd_65x39_caseless_mag";
	player addMagazine "30Rnd_65x39_caseless_mag";
	player addMagazine "30Rnd_65x39_caseless_mag";
	player addMagazine "30Rnd_65x39_caseless_mag";
	player addMagazine "30Rnd_65x39_caseless_mag";
	player addMagazine "30Rnd_65x39_caseless_mag";
	player addMagazine "30Rnd_65x39_caseless_mag";
	// ITEMS
	player addItem "ItemMap";
	player assignItem "ItemMap";
	player addItem "ItemCompass";
	player assignItem "ItemCompass";
	player addItem "ItemWatch";
	player assignItem "ItemWatch";
	player addItem "B_UavTerminal";
	player assignItem "B_UavTerminal";
	player addItem "Rangefinder";
	player assignItem "Rangefinder";
	player addItem "NVGoggles_OPFOR";
	player assignItem "NVGoggles_OPFOR";
	player addItem "optic_ERCO_blk_F";
	//player addItem "muzzle_snds_H_MG_blk_F"; //6,5 mm Schalli
	player addItem "ToolKit";
	player addItem "Medikit";
	player addItem "HandGrenade_Stone";
	player addItem "HandGrenade_Stone";
	player addItem "muzzle_snds_H";
	
  [] call life_fnc_saveGear;
};
	
	case "MP5 Loadout":
	{
  private["_handle"];
  _handle = [] spawn life_fnc_stripDownPlayer;
  waitUntil {scriptDone _handle};
	player addUniform "U_B_SpecopsUniform_sgg";
	player addVest "V_TacVest_blk_POLICE";
	player addBackpack "B_Bergen_dgtl_F";
	player addHeadgear "H_Cap_police";
	// TAZER
	player addWeapon "hgun_Pistol_heavy_01_snds_F",
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addItem "optic_MRD";
	// SCHARFE WAFFE
	player addWeapon "SMG_05_F";
	player addMagazine "30Rnd_9x21_Mag_SMG_02";
	player addMagazine "30Rnd_9x21_Mag_SMG_02";
	player addMagazine "30Rnd_9x21_Mag_SMG_02";
	player addMagazine "30Rnd_9x21_Mag_SMG_02";
	player addMagazine "30Rnd_9x21_Mag_SMG_02";
	player addMagazine "30Rnd_9x21_Mag_SMG_02";
	player addMagazine "30Rnd_9x21_Mag_SMG_02";
	player addMagazine "30Rnd_9x21_Mag_SMG_02";
	// ITEMS
	player addItem "ItemMap";
	player assignItem "ItemMap";
	player addItem "ItemCompass";
	player assignItem "ItemCompass";
	player addItem "ItemWatch";
	player assignItem "ItemWatch";
	player addItem "B_UavTerminal";
	player assignItem "B_UavTerminal";
	player addItem "Rangefinder";
	player assignItem "Rangefinder";
	player addItem "NVGoggles_OPFOR";
	player assignItem "NVGoggles_OPFOR";
	player addItem "optic_Aco";
	player addItem "muzzle_snds_L"; //9 mm Schalli
	player addItem "ToolKit";
	player addItem "Medikit";
	player addItem "HandGrenade_Stone";
	player addItem "HandGrenade_Stone";
	player addItem "";
	
  [] call life_fnc_saveGear;
};
	
	case "MX-3GL Loadout":
	{
  private["_handle"];
  _handle = [] spawn life_fnc_stripDownPlayer;
  waitUntil {scriptDone _handle};
	player addUniform "U_B_SpecopsUniform_sgg";
	player addVest "V_TacVest_blk_POLICE";
	player addBackpack "B_Bergen_dgtl_F";
	player addHeadgear "H_Watchcap_blk";
	// TAZER
	player addWeapon "hgun_Pistol_heavy_01_snds_F",
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addItem "optic_MRD";
	// SCHARFE WAFFE
	player addWeapon "arifle_MX_GL_Black_Hamr_pointer_F";
	player addMagazine "30Rnd_65x39_caseless_mag";
	player addMagazine "30Rnd_65x39_caseless_mag";
	player addMagazine "30Rnd_65x39_caseless_mag";
	player addMagazine "30Rnd_65x39_caseless_mag";
	player addMagazine "30Rnd_65x39_caseless_mag";
	player addMagazine "30Rnd_65x39_caseless_mag";
	player addMagazine "30Rnd_65x39_caseless_mag";
	player addMagazine "30Rnd_65x39_caseless_mag";
	player addItem "3Rnd_SmokeBlue_Grenade_shell";
	player addItem "3Rnd_SmokeBlue_Grenade_shell";
	player addItem "3Rnd_SmokeBlue_Grenade_shell";
	player addItem "3Rnd_SmokeBlue_Grenade_shell";
	player addItem "3Rnd_SmokeBlue_Grenade_shell";
	player addItem "3Rnd_SmokeBlue_Grenade_shell";
	player addItem "3Rnd_SmokeBlue_Grenade_shell";
	player addItem "3Rnd_SmokeBlue_Grenade_shell";
	player addItem "3Rnd_SmokeBlue_Grenade_shell";
	player addItem "3Rnd_SmokeBlue_Grenade_shell";
	// ITEMS
	player addItem "ItemMap";
	player assignItem "ItemMap";
	player addItem "ItemCompass";
	player assignItem "ItemCompass";
	player addItem "ItemWatch";
	player assignItem "ItemWatch";
	player addItem "B_UavTerminal";
	player assignItem "B_UavTerminal";
	player addItem "Rangefinder";
	player assignItem "Rangefinder";
	player addItem "NVGoggles_OPFOR";
	player assignItem "NVGoggles_OPFOR";
	player addItem "optic_ERCO_blk_F";
	player addItem "muzzle_snds_H"; //6,5 mm Schalli
	player addItem "ToolKit";
	player addItem "Medikit";
	player addItem "HandGrenade_Stone";
	player addItem "HandGrenade_Stone";
	player addItem "muzzle_snds_H";
	
  [] call life_fnc_saveGear;
};
	
	case "MX-SW Loadout":
	{
  private["_handle"];
  _handle = [] spawn life_fnc_stripDownPlayer;
  waitUntil {scriptDone _handle};
	player addUniform "U_B_SpecopsUniform_sgg";
	player addVest "V_TacVest_blk_POLICE";
	player addBackpack "B_Bergen_dgtl_F";
	player addHeadgear "H_Watchcap_blk";
	// TAZER
	player addWeapon "hgun_Pistol_heavy_01_snds_F",
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addItem "optic_MRD";
	// SCHARFE WAFFE
	player addWeapon "arifle_MX_SW_Black_F";
	player addMagazine "100Rnd_65x39_caseless_mag";
	player addMagazine "100Rnd_65x39_caseless_mag";
	player addMagazine "100Rnd_65x39_caseless_mag";
	player addMagazine "100Rnd_65x39_caseless_mag";
	player addMagazine "100Rnd_65x39_caseless_mag";
	// ITEMS
	player addItem "ItemMap";
	player assignItem "ItemMap";
	player addItem "ItemCompass";
	player assignItem "ItemCompass";
	player addItem "ItemWatch";
	player assignItem "ItemWatch";
	player addItem "B_UavTerminal";
	player assignItem "B_UavTerminal";
	player addItem "Rangefinder";
	player assignItem "Rangefinder";
	player addItem "NVGoggles_OPFOR";
	player assignItem "NVGoggles_OPFOR";
	player addItem "optic_ERCO_blk_F";
	player addItem "muzzle_snds_H"; //6,5 mm Schalli
	player addItem "ToolKit";
	player addItem "Medikit";
	player addItem "HandGrenade_Stone";
	player addItem "HandGrenade_Stone";
	player addItem "muzzle_snds_H_MG_blk_F";
	
  [] call life_fnc_saveGear;
};
	
	case "SPAR-16-S Loadout":
	{
	private["_handle"];
	_handle = [] spawn life_fnc_stripDownPlayer;
	waitUntil {scriptDone _handle};
	player addUniform "U_B_CombatUniform_mcam_vest";
	player addVest "V_TacVest_blk_POLICE";
	player addBackpack "B_Bergen_dgtl_F";
	player addHeadgear "H_Beret_blk_POLICE";
	// TAZER
	player addWeapon "hgun_Pistol_heavy_01_snds_F",
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addItem "optic_MRD";
	// SCHARFE WAFFE
	player addWeapon "arifle_SPAR_02_blk_F";
	player addMagazine "150Rnd_556x45_Drum_Mag_F";
	player addMagazine "150Rnd_556x45_Drum_Mag_F";
	player addMagazine "150Rnd_556x45_Drum_Mag_F";
	player addMagazine "150Rnd_556x45_Drum_Mag_F";
	player addMagazine "150Rnd_556x45_Drum_Mag_F";
	// ITEMS
	player addItem "ItemMap";
	player assignItem "ItemMap";
	player addItem "ItemCompass";
	player assignItem "ItemCompass";
	player addItem "ItemWatch";
	player assignItem "ItemWatch";
	player addItem "B_UavTerminal";
	player assignItem "B_UavTerminal";
	player addItem "Rangefinder";
	player assignItem "Rangefinder";
	player addItem "NVGoggles_OPFOR";
	player assignItem "NVGoggles_OPFOR";
	player addItem "optic_ERCO_blk_F";
	player addItem "muzzle_snds_M";
	player addItem "ToolKit";
	player addItem "Medikit";
	player addItem "HandGrenade_Stone";
	player addItem "HandGrenade_Stone";
	player addItem "muzzle_snds_M";
	
  [] call life_fnc_saveGear;
};
	
	case "CAR-95-1 Loadout":
	{
		private["_handle"]; 
		_handle = [] spawn life_fnc_stripDownPlayer;
		waitUntil {scriptDone _handle};
		player addUniform "U_B_CombatUniform_mcam_vest";
		player addVest "V_PlateCarrier1_blk";
		player addBackpack "B_Bergen_dgtl_F";
		player addHeadgear "H_Beret_02";
		// TAZER
		player addWeapon "hgun_Pistol_heavy_01_snds_F",
		player addMagazine "11Rnd_45ACP_Mag";
		player addMagazine "11Rnd_45ACP_Mag";
		player addMagazine "11Rnd_45ACP_Mag";
		player addMagazine "11Rnd_45ACP_Mag";
		player addMagazine "11Rnd_45ACP_Mag";
		player addItem "optic_MRD";
		// SCHARFE WAFFE
		player addWeapon "arifle_CTARS_blk_F";
		player addMagazine "100Rnd_580x42_Mag_F";
		player addMagazine "100Rnd_580x42_Mag_F";
		player addMagazine "100Rnd_580x42_Mag_F";
		player addMagazine "100Rnd_580x42_Mag_F";
		player addMagazine "100Rnd_580x42_Mag_F";
		player addMagazine "100Rnd_580x42_Mag_F";
		player addMagazine "100Rnd_580x42_Mag_F";
		player addMagazine "100Rnd_580x42_Mag_F";
		// ITEMS
		player addItem "ItemMap";
		player assignItem "ItemMap";
		player addItem "ItemCompass";
		player assignItem "ItemCompass";
		player addItem "ItemWatch";
		player assignItem "ItemWatch";
		player addItem "B_UavTerminal";
		player assignItem "B_UavTerminal";
		player addItem "Rangefinder";
		player assignItem "Rangefinder";
		player addItem "NVGoggles_OPFOR";
		player assignItem "NVGoggles_OPFOR";
		player addItem "optic_ERCO_blk_F";
		player addItem "muzzle_snds_58_blk_F";
		player addItem "ToolKit";
		player addItem "Medikit";
		player addItem "HandGrenade_Stone";
		player addItem "HandGrenade_Stone";
		player addItem "muzzle_snds_58_blk_F";
		
	 [] call life_fnc_saveGear;
};
	
	case "Spar-17 Loadout":{ 
  private["_handle"];
  _handle = [] spawn life_fnc_stripDownPlayer;
  waitUntil {scriptDone _handle};
	player addUniform "U_B_CombatUniform_mcam_vest";
	player addVest "V_PlateCarrier1_blk";
	player addBackpack "B_Bergen_dgtl_F";
	player addHeadgear "H_Beret_02";
	// TAZER
	player addWeapon "hgun_Pistol_heavy_01_snds_F",
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addItem "optic_MRD";
	// SCHARFE WAFFE
	player addWeapon "arifle_SPAR_03_blk_F";
	player addMagazine "20Rnd_762x51_Mag";
	player addMagazine "20Rnd_762x51_Mag";
	player addMagazine "20Rnd_762x51_Mag";
	player addMagazine "20Rnd_762x51_Mag";
	player addMagazine "20Rnd_762x51_Mag";
	player addMagazine "20Rnd_762x51_Mag";
	player addMagazine "20Rnd_762x51_Mag";
	player addMagazine "20Rnd_762x51_Mag";
	// ITEMS
	player addItem "ItemMap";
	player assignItem "ItemMap";
	player addItem "ItemCompass";
	player assignItem "ItemCompass";
	player addItem "ItemWatch";
	player assignItem "ItemWatch";
	player addItem "B_UavTerminal";
	player assignItem "B_UavTerminal";
	player addItem "Rangefinder";
	player assignItem "Rangefinder";
	player addItem "NVGoggles_OPFOR";
	player assignItem "NVGoggles_OPFOR";
	player addItem "optic_ERCO_blk_F";
	player addItem "optic_MRD";
	player addItem "ToolKit";
	player addItem "Medikit";
	player addItem "HandGrenade_Stone";
	player addItem "HandGrenade_Stone";
	player addItem "HandGrenade_Stone";
	player addItem "HandGrenade_Stone";
	player addItem "SmokeShellBlue";
	player addItem "SmokeShellBlue";
	player addItem "SmokeShellBlue";
	player addItem "SmokeShellBlue";
	player addItem "muzzle_snds_B";
	
  [] call life_fnc_saveGear;
};

	case "AK-12-GL Loadout":{ 
  private["_handle"];
  _handle = [] spawn life_fnc_stripDownPlayer;
  waitUntil {scriptDone _handle};
	player addUniform "U_B_CombatUniform_mcam_vest";
	player addVest "V_PlateCarrier1_blk";
	player addBackpack "B_Bergen_dgtl_F";
	player addHeadgear "H_Beret_02";
	// TAZER
	player addWeapon "hgun_Pistol_heavy_01_snds_F",
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addItem "optic_MRD";
	// SCHARFE WAFFE
	player addWeapon "arifle_AK12_GL_F";
	player addMagazine "30Rnd_762x39_Mag_F";
	player addMagazine "30Rnd_762x39_Mag_F";
	player addMagazine "30Rnd_762x39_Mag_F";
	player addMagazine "30Rnd_762x39_Mag_F";
	player addMagazine "30Rnd_762x39_Mag_F";
	player addMagazine "30Rnd_762x39_Mag_F";
	player addMagazine "30Rnd_762x39_Mag_F";
	player addMagazine "30Rnd_762x39_Mag_F";
	player addMagazine "1Rnd_SmokeBlue_Grenade_shell";
	player addMagazine "1Rnd_SmokeBlue_Grenade_shell";
	player addMagazine "1Rnd_SmokeBlue_Grenade_shell";
	player addMagazine "1Rnd_SmokeBlue_Grenade_shell";
	player addMagazine "1Rnd_SmokeBlue_Grenade_shell";
	player addMagazine "1Rnd_SmokeBlue_Grenade_shell";
	// ITEMS
	player addItem "ItemMap";
	player assignItem "ItemMap";
	player addItem "ItemCompass";
	player assignItem "ItemCompass";
	player addItem "ItemWatch";
	player assignItem "ItemWatch";
	player addItem "B_UavTerminal";
	player assignItem "B_UavTerminal";
	player addItem "Rangefinder";
	player assignItem "Rangefinder";
	player addItem "NVGoggles_OPFOR";
	player assignItem "NVGoggles_OPFOR";
	player addItem "optic_ERCO_blk_F";
	player addItem "ToolKit";
	player addItem "Medikit";
	player addItem "HandGrenade_Stone";
	player addItem "HandGrenade_Stone";
	player addItem "HandGrenade_Stone";
	player addItem "HandGrenade_Stone";
	player addItem "SmokeShellBlue";
	player addItem "SmokeShellBlue";
	player addItem "SmokeShellBlue";
	player addItem "SmokeShellBlue";
	player addItem "muzzle_snds_B";
	
  [] call life_fnc_saveGear;
};
	
	case "MK18 Loadout":{ 
  private["_handle"];
  _handle = [] spawn life_fnc_stripDownPlayer;
  waitUntil {scriptDone _handle};
	player addUniform "U_B_CombatUniform_mcam_vest";
	player addVest "V_PlateCarrier1_blk";
	player addBackpack "B_Bergen_dgtl_F";
	player addHeadgear "H_Beret_02";
	// TAZER
	player addWeapon "hgun_Pistol_heavy_01_snds_F",
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	// SCHARFE WAFFE
	player addWeapon "srifle_EBR_ARCO_pointer_snds_F";
	player addMagazine "20Rnd_762x51_Mag";
	player addMagazine "20Rnd_762x51_Mag";
	player addMagazine "20Rnd_762x51_Mag";
	player addMagazine "20Rnd_762x51_Mag";
	player addMagazine "20Rnd_762x51_Mag";
	player addMagazine "20Rnd_762x51_Mag";
	player addMagazine "20Rnd_762x51_Mag";
	player addMagazine "20Rnd_762x51_Mag";
	// ITEMS
	player addItem "ItemMap";
	player assignItem "ItemMap";
	player addItem "ItemCompass";
	player assignItem "ItemCompass";
	player addItem "ItemWatch";
	player assignItem "ItemWatch";
	player addItem "B_UavTerminal";
	player assignItem "B_UavTerminal";
	player addItem "Rangefinder";
	player assignItem "Rangefinder";
	player addItem "NVGoggles_OPFOR";
	player assignItem "NVGoggles_OPFOR";
	player addItem "optic_MRD";
	player addItem "ToolKit";
	player addItem "Medikit";
	player addItem "HandGrenade_Stone";
	player addItem "HandGrenade_Stone";
	player addItem "HandGrenade_Stone";
	player addItem "HandGrenade_Stone";
	player addItem "SmokeShellBlue";
	player addItem "SmokeShellBlue";
	player addItem "SmokeShellBlue";
	player addItem "SmokeShellBlue";
	player addItem "muzzle_snds_B";
	
  [] call life_fnc_saveGear;
};
	
	case "Typ115 Loadout":{ 
  private["_handle"];
  _handle = [] spawn life_fnc_stripDownPlayer;
  waitUntil {scriptDone _handle};
	player addUniform "U_B_GEN_Soldier_F";
	player addVest "V_PlateCarrier1_blk";
	player addBackpack "B_Bergen_dgtl_F";
	player addHeadgear "H_Beret_02";
	// TAZER
	player addWeapon "hgun_Pistol_heavy_01_snds_F",
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	// SCHARFE WAFFE
	player addWeapon "arifle_ARX_blk_F";
	player addMagazine "30Rnd_65x39_caseless_green";
	player addMagazine "30Rnd_65x39_caseless_green";
	player addMagazine "30Rnd_65x39_caseless_green";
	player addMagazine "30Rnd_65x39_caseless_green";
	player addMagazine "30Rnd_65x39_caseless_green";
	player addMagazine "30Rnd_65x39_caseless_green";
	player addMagazine "30Rnd_65x39_caseless_green";
	player addMagazine "30Rnd_65x39_caseless_green";
	player addMagazine "30Rnd_65x39_caseless_green";
	player addMagazine "30Rnd_65x39_caseless_green";
	player addMagazine "10Rnd_50BW_Mag_F";
	player addMagazine "10Rnd_50BW_Mag_F";
	player addMagazine "10Rnd_50BW_Mag_F";
	player addMagazine "10Rnd_50BW_Mag_F";
	player addMagazine "10Rnd_50BW_Mag_F";
	// ITEMS
	player addItem "ItemMap";
	player assignItem "ItemMap";
	player addItem "ItemCompass";
	player assignItem "ItemCompass";
	player addItem "ItemWatch";
	player assignItem "ItemWatch";
	player addItem "B_UavTerminal";
	player assignItem "B_UavTerminal";
	player addItem "Rangefinder";
	player assignItem "Rangefinder";
	player addItem "NVGoggles_OPFOR";
	player assignItem "NVGoggles_OPFOR";
	player addItem "optic_MRCO";
	player addItem "optic_MRD";
	player addItem "muzzle_snds_65_TI_blk_F";
	player addItem "ToolKit";
	player addItem "Medikit";
	player addItem "HandGrenade_Stone";
	player addItem "HandGrenade_Stone";
	player addItem "HandGrenade_Stone";
	player addItem "HandGrenade_Stone";
	player addItem "SmokeShellBlue";
	player addItem "SmokeShellBlue";
	player addItem "SmokeShellBlue";
	player addItem "SmokeShellBlue";
	player addItem "muzzle_snds_65_TI_blk_F";
	
  [] call life_fnc_saveGear;
};
	
case "Zafir Loadout":{ 
  private["_handle"];
  _handle = [] spawn life_fnc_stripDownPlayer;
  waitUntil {scriptDone _handle};
	player addUniform "U_B_CombatUniform_mcam";
	player addVest "V_PlateCarrierSpec_blk";
	player addBackpack "B_Bergen_dgtl_F";
	player addHeadgear "H_HelmetSpecB_blk";
	// TAZER
	player addWeapon "hgun_Pistol_heavy_01_snds_F",
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	// SCHARFE WAFFE
	player addWeapon "LMG_Zafir_ARCO_F";
	player addMagazine "150Rnd_762x54_Box";
	player addMagazine "150Rnd_762x54_Box";
	player addMagazine "150Rnd_762x54_Box";
	player addMagazine "150Rnd_762x54_Box";
	player addMagazine "150Rnd_762x54_Box";
	player addMagazine "150Rnd_762x54_Box";
	// ITEMS
	player addItem "ItemMap";
	player assignItem "ItemMap";
	player addItem "ItemCompass";
	player assignItem "ItemCompass";
	player addItem "ItemWatch";
	player assignItem "ItemWatch";
	player addItem "B_UavTerminal";
	player assignItem "B_UavTerminal";
	player addItem "Rangefinder";
	player assignItem "Rangefinder";
	player addItem "NVGoggles_OPFOR";
	player assignItem "NVGoggles_OPFOR";
	player addItem "optic_MRCO";
	player addItem "optic_MRD";
	player addItem "ToolKit";
	player addItem "Medikit";
	player addItem "HandGrenade_Stone";
	player addItem "HandGrenade_Stone";
	player addItem "HandGrenade_Stone";
	player addItem "HandGrenade_Stone";
	player addItem "SmokeShellBlue";
	player addItem "SmokeShellBlue";
	player addItem "SmokeShellBlue";
	player addItem "SmokeShellBlue";
	
  [] call life_fnc_saveGear;
};	
	
	case "MK200 Loadout":{ 
  private["_handle"];
  _handle = [] spawn life_fnc_stripDownPlayer;
  waitUntil {scriptDone _handle};
	player addUniform "U_B_CombatUniform_mcam";
	player addVest "V_PlateCarrierSpec_blk";
	player addBackpack "B_Bergen_dgtl_F";
	player addHeadgear "H_HelmetSpecB_blk";
	// TAZER
	player addWeapon "hgun_Pistol_heavy_01_snds_F",
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	// SCHARFE WAFFE
	player addWeapon "LMG_Mk200_LP_BI_F";
	player addMagazine "200Rnd_65x39_cased_Box";
	player addMagazine "200Rnd_65x39_cased_Box";
	player addMagazine "200Rnd_65x39_cased_Box";
	player addMagazine "200Rnd_65x39_cased_Box";
	player addMagazine "200Rnd_65x39_cased_Box";
	// ITEMS
	player addItem "ItemMap";
	player assignItem "ItemMap";
	player addItem "ItemCompass";
	player assignItem "ItemCompass";
	player addItem "ItemWatch";
	player assignItem "ItemWatch";
	player addItem "B_UavTerminal";
	player assignItem "B_UavTerminal";
	player addItem "Rangefinder";
	player assignItem "Rangefinder";
	player addItem "NVGoggles_OPFOR";
	player assignItem "NVGoggles_OPFOR";
	player addItem "optic_MRCO";
	player addItem "optic_MRD";
	player addItem "muzzle_snds_H";
	player addItem "ToolKit";
	player addItem "Medikit";
	player addItem "HandGrenade_Stone";
	player addItem "HandGrenade_Stone";
	player addItem "HandGrenade_Stone";
	player addItem "HandGrenade_Stone";
	player addItem "SmokeShellBlue";
	player addItem "SmokeShellBlue";
	player addItem "SmokeShellBlue";
	player addItem "SmokeShellBlue";
	player addItem "muzzle_snds_H_MG";
	
  [] call life_fnc_saveGear;
};
	
	case "LRR Loadout":{ 
	private["_handle"];
	_handle = [] spawn life_fnc_stripDownPlayer;
	waitUntil {scriptDone _handle};
	player addUniform "U_B_FullGhillie_sard";
	player addVest "V_PlateCarrier1_blk";
	player addBackpack "B_Bergen_dgtl_F";
	player addHeadgear "H_HelmetSpecB_blk";
	// TAZER
	player addWeapon "hgun_Pistol_heavy_01_snds_F",
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	// SCHARFE WAFFE
	player addWeapon "srifle_LRR_LRPS_F";
	player addMagazine "7Rnd_408_Mag";
	player addMagazine "7Rnd_408_Mag";
	player addMagazine "7Rnd_408_Mag";
	player addMagazine "7Rnd_408_Mag";
	player addMagazine "7Rnd_408_Mag";
	player addMagazine "7Rnd_408_Mag";
	player addMagazine "7Rnd_408_Mag";
	player addMagazine "7Rnd_408_Mag";
	// ITEMS
	player addItem "ItemMap";
	player assignItem "ItemMap";
	player addItem "ItemCompass";
	player assignItem "ItemCompass";
	player addItem "ItemWatch";
	player assignItem "ItemWatch";
	player addItem "B_UavTerminal";
	player assignItem "B_UavTerminal";
	player addItem "Rangefinder";
	player assignItem "Rangefinder";
	player addItem "NVGoggles_OPFOR";
	player assignItem "NVGoggles_OPFOR";
	player addItem "optic_NVS";
	player addItem "optic_MRD";
	player addItem "ToolKit";
	player addItem "Medikit";
	player addItem "HandGrenade_Stone";
	player addItem "HandGrenade_Stone";
	player addItem "HandGrenade_Stone";
	player addItem "HandGrenade_Stone";
	player addItem "SmokeShellBlue";
	player addItem "SmokeShellBlue";
	player addItem "SmokeShellBlue";
	player addItem "SmokeShellBlue";
	player addItem "";
	
  [] call life_fnc_saveGear;
};
	
	case "Valles Loadout":
	{   
    private["_handle"];
	_handle = [] spawn life_fnc_stripDownPlayer;
	waitUntil {scriptDone _handle};
	player addUniform "U_B_GEN_Commander_F";
	player addVest "V_PlateCarrier1_blk";
	player addBackpack "B_Bergen_dgtl_F";
	player addHeadgear "H_Beret_Gen_F";
	// TAZER
	player addWeapon "hgun_Pistol_heavy_01_MRD_F";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	// SCHARFE WAFFE
	player addWeapon "srifle_DMR_02_F";
	player addMagazine "10Rnd_338_Mag";
	player addMagazine "10Rnd_338_Mag";
	player addMagazine "10Rnd_338_Mag";
	player addMagazine "10Rnd_338_Mag";
	player addMagazine "10Rnd_338_Mag";
	player addMagazine "10Rnd_338_Mag";
	player addMagazine "10Rnd_338_Mag";
	player addMagazine "10Rnd_338_Mag";
	player addMagazine "10Rnd_338_Mag";
	player addMagazine "10Rnd_338_Mag";
	player addMagazine "10Rnd_338_Mag";
	player addMagazine "10Rnd_338_Mag";
	player addMagazine "10Rnd_338_Mag";
	player addMagazine "10Rnd_338_Mag";
	player addMagazine "10Rnd_338_Mag";
	player addMagazine "10Rnd_338_Mag";	
	player addMagazine "10Rnd_338_Mag";
	player addMagazine "10Rnd_338_Mag";	
	// ITEMS
	player addItem "ItemMap";
	player assignItem "ItemMap";
	player addItem "ItemCompass";
	player assignItem "ItemCompass";
	player addItem "ItemWatch";
	player assignItem "ItemWatch";
	player addItem "B_UavTerminal";
	player assignItem "B_UavTerminal";
	player addItem "Rangefinder";
	player assignItem "Rangefinder";
	player addItem "NVGoggles_OPFOR";
	player assignItem "NVGoggles_OPFOR";
	player addItem "optic_ERCO_blk_F";
	player addItem "optic_AMS";
	player addItem "optic_LRPS";
	player addItem "ToolKit";
	player addItem "Medikit";
	player addItem "HandGrenade_Stone";
	player addItem "HandGrenade_Stone";
	player addItem "SmokeShellBlue";
	player addItem "SmokeShellBlue";
	player addItem "SmokeShellBlue";
	player addItem "SmokeShellBlue";
	player addItem "muzzle_snds_338_black";
	player addItem "DemoCharge_Remote_Mag";
	
	[] call life_fnc_saveGear;
	};

case "Valles Loadout Ak12":
	{   
    private["_handle"];
	_handle = [] spawn life_fnc_stripDownPlayer;
	waitUntil {scriptDone _handle};
	player addUniform "U_B_GEN_Commander_F";
	player addVest "V_PlateCarrier1_blk";
	player addBackpack "B_Bergen_dgtl_F";
	player addHeadgear "H_Beret_Gen_F";
	// TAZER
	player addWeapon "hgun_Pistol_heavy_01_MRD_F";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	player addMagazine "11Rnd_45ACP_Mag";
	// SCHARFE WAFFE
	player addWeapon "arifle_AK12_GL_F";
	player addMagazine "30Rnd_762x39_Mag_F";
	player addMagazine "30Rnd_762x39_Mag_F";
	player addMagazine "30Rnd_762x39_Mag_F";
	player addMagazine "30Rnd_762x39_Mag_F";
	player addMagazine "30Rnd_762x39_Mag_F";
	player addMagazine "30Rnd_762x39_Mag_F";
	player addMagazine "30Rnd_762x39_Mag_F";
	player addMagazine "30Rnd_762x39_Mag_F";
	player addMagazine "30Rnd_762x39_Mag_Tracer_Green_F";
	player addMagazine "30Rnd_762x39_Mag_Tracer_Green_F";
	player addMagazine "30Rnd_762x39_Mag_Tracer_Green_F";
	player addMagazine "30Rnd_762x39_Mag_Tracer_Green_F";
	player addMagazine "30Rnd_762x39_Mag_Tracer_Green_F";
	player addMagazine "30Rnd_762x39_Mag_Tracer_Green_F";
	player addMagazine "30Rnd_762x39_Mag_Tracer_Green_F";
	player addMagazine "30Rnd_762x39_Mag_Tracer_Green_F";
	player addMagazine "30Rnd_762x39_Mag_Tracer_Green_F";
	player addMagazine "30Rnd_762x39_Mag_Tracer_Green_F";

	// ITEMS
	player addItem "ItemMap";
	player assignItem "ItemMap";
	player addItem "ItemCompass";
	player assignItem "ItemCompass";
	player addItem "ItemWatch";
	player assignItem "ItemWatch";
	player addItem "B_UavTerminal";
	player assignItem "B_UavTerminal";
	player addItem "Rangefinder";
	player assignItem "Rangefinder";
	player addItem "NVGoggles_OPFOR";
	player assignItem "NVGoggles_OPFOR";
	player addItem "optic_ERCO_blk_F";
	player addItem "optic_AMS";
	player addItem "optic_LRPS";
	player addItem "muzzle_snds_93mmg";
	player addItem "ToolKit";
	player addItem "Medikit";
	player addItem "muzzle_snds_B";
	player addItem "HandGrenade_Stone";
	player addItem "HandGrenade_Stone";
	player addItem "SmokeShellBlue";
	player addItem "SmokeShellBlue";
	player addItem "1Rnd_HE_Grenade_shell";
	player addItem "1Rnd_HE_Grenade_shell";
	player addItem "1Rnd_HE_Grenade_shell";
	player addItem "1Rnd_HE_Grenade_shell";
	player addItem "1Rnd_HE_Grenade_shell";
	player addItem "1Rnd_HE_Grenade_shell";
	player addItem "1Rnd_SmokeBlue_Grenade_shell";
	player addItem "1Rnd_SmokeBlue_Grenade_shell";
	player addItem "1Rnd_SmokeBlue_Grenade_shell";
	player addItem "1Rnd_SmokeBlue_Grenade_shell";
	
	[] call life_fnc_saveGear;
	};
};