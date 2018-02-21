#include "..\..\script_macros.hpp"
/*
    File: fn_gangSkins.sqf
    Author: Valle

    Description:
	Lädt Skins auf Fahrzeuge durch Lizenz
    
*/
private ["_lizenzen","_vehicle","_i"];
_lizenzen = [];
//_lizenzen = ["license_civ_gang_as","license_civ_gang_rog"];

if (license_civ_gang_as) then { _lizenzen pushBack "license_civ_gang_as";};
_vehicle = typeOf (vehicle player);
//_lizenzen pushBack "license_civ_gang_as"; _lizenzen pushBack "license_civ_gang_rog";

for "_i" from 0 to (count _lizenzen)-1 do{
    switch (_lizenzen select _i) do
    {
        case "license_civ_gang_as": 
            {           
                switch (_vehicle) do 
                {
                    case "B_MRAP_01_F": { skinAction = player addAction["[AS] Hunter Skin", '(vehicle player) setObjectTextureGlobal[0,"skins\car\Hunter_asiimov_0.jpg"]; (vehicle player) setObjectTextureGlobal[1,"skins\car\Hunter_asiimov_1.jpg"]; player removeAction skinAction;', "",0,false,true,"""",'(vehicle player != player) && ((typeOf (vehicle player)) isEqualTo "B_MRAP_01_F")' ]; };
                    case "O_MRAP_02_F": { skinAction = player addAction["[AS] Ifrit Skin", '(vehicle player) setObjectTextureGlobal[0,"skins\car\Ifrit_AS_0.jpg"]; (vehicle player) setObjectTextureGlobal[1,"skins\car\Ifrit_AS_1.jpg"]; player removeAction skinAction;', "",0,false,true,"""",'(vehicle player != player) && ((typeOf (vehicle player)) isEqualTo "O_MRAP_02_F")' ]; };
                    case "C_SUV_01_F": { skinAction = player addAction["[AS] SUV Skin", '(vehicle player) setObjectTextureGlobal[0,"skins\car\SUV_AS.jpg"]; player removeAction skinAction;', "",0,false,true,"""",'(vehicle player != player) && ((typeOf (vehicle player)) isEqualTo "C_SUV_01_F")' ]; };
                }; 
                hint "Gang: AS";
            };
        case "license_civ_gang_rog": { systemChat "Gang: RoG";};
    };
};