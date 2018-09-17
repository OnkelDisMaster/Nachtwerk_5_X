/*
	File: fn_radar.sqf
	Author: Silly Aussie kid named Jaydon
	
	Description:
	Looks like weird but radar?
*/
if(playerSide != west) exitWith {};
private ["_speed","_vehicle"];
_vehicle = cursorTarget;
_speed = round speed _vehicle;

//if((_vehicle isKindOf "Car") && (currentWeapon player) in ["hgun_Pistol_heavy_01_F","hgun_Pistol_heavy_01_snds_F","hgun_Pistol_heavy_01_MRD_F"]) then
if(_vehicle isKindOf "Car") then
{
	switch (true) do 
	{
		case ((_speed > 33 && _speed <= 80)) : 
		{	
			hintSilent parseText format ["<t color='#ffffff'><t size='2'><t align='center'>" + "Radar" + "<br/><t color='#33CC33'><t align='center'><t size='1'>" + "Geschwindigkeit %1 km/h",round  _speed];
		};
		
		case ((_speed > 80)) : 
		{	
			hintSilent parseText format ["<t color='#ffffff'><t size='2'><t align='center'>" + "Radar" + "<br/><t color='#FF0000'><t align='center'><t size='1'>" + "Geschwindigkeit %1 km/h",round  _speed];
		};
	};
};