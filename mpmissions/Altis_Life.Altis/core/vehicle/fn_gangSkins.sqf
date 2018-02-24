#include "..\..\script_macros.hpp"
/*
    File: fn_gangSkins.sqf
    Author: Valle @ Nachtwerk

    Description:
	Lädt Skins auf Fahrzeuge durch Lizenz
    
*/
private ["_lizenzen","_vehicle","_i"];
_lizenzen = [];
//_lizenzen = ["license_civ_gang_as","license_civ_gang_rog"];


//cleanup

player removeAction ASskinAction;
player removeAction skinAction;
player removeAction CopskinAction;

if (license_civ_gang_as) then { _lizenzen pushBack "license_civ_gang_as";};
if (license_civ_pro_rebel) then { _lizenzen pushBack "license_civ_pro_rebel";};
if (FETCH_CONST(life_adminlevel) > 3) then { _lizenzen pushBack "CopSkins";};

_vehicle = typeOf (vehicle player);
//_lizenzen pushBack "license_civ_gang_as"; _lizenzen pushBack "license_civ_gang_rog";

for "_i" from 0 to (count _lizenzen)-1 do{
    switch (_lizenzen select _i) do
    {
        case "license_civ_gang_as": 
            {           
                switch (_vehicle) do 
                {
                    case "O_MRAP_02_F": { ASskinAction = player addAction["<t color = '#FF00FF'>[AS] Ifrit Skin</t>", '(vehicle player) setObjectTextureGlobal[0,"skins\car\Ifrit_AS_0.jpg"]; (vehicle player) setObjectTextureGlobal[1,"skins\car\Ifrit_AS_1.jpg"]; player removeAction ASskinAction;', "",0,false,true,"""",'(vehicle player != player) && ((typeOf (vehicle player)) isEqualTo "O_MRAP_02_F")' ]; };
                    case "O_T_MRAP_02_ghex_F": { ASskinAction = player addAction["<t color = '#FF00FF'>[AS] Ifrit Skin</t>", '(vehicle player) setObjectTextureGlobal[0,"skins\car\Ifrit_AS_0.jpg"]; (vehicle player) setObjectTextureGlobal[1,"skins\car\Ifrit_AS_1.jpg"]; player removeAction ASskinAction;', "",0,false,true,"""",'(vehicle player != player) && ((typeOf (vehicle player)) isEqualTo "O_T_MRAP_02_ghex_F")' ]; };
                    case "C_SUV_01_F": { ASskinAction = player addAction["<t color = '#FF00FF'>[AS] SUV Skin</t>", '(vehicle player) setObjectTextureGlobal[0,"skins\car\SUV_AS.jpg"]; player removeAction ASskinAction;', "",0,false,true,"""",'(vehicle player != player) && ((typeOf (vehicle player)) isEqualTo "C_SUV_01_F")' ]; };
                };
            };
        case "license_civ_pro_rebel": 
            {    
                switch (_vehicle) do 
                {
                    case "B_MRAP_01_F": { skinAction = player addAction["Asiimov Hunter Skin", '(vehicle player) setObjectTextureGlobal[0,"skins\car\Hunter_asiimov_0.paa"]; (vehicle player) setObjectTextureGlobal[1,"skins\car\Hunter_asiimov_1.paa"]; player removeAction skinAction;', "",0,false,true,"""",'(vehicle player != player) && ((typeOf (vehicle player)) isEqualTo "B_MRAP_01_F")' ]; if(BANK > 50000) then {BANK = BANK - 50000; hint "Du hast alle möglichen Skins auf dein Fahrzeug geladen\n und dafür 50 000$ bezahlt!";};};
                    case "C_SUV_01_F": { skinAction = player addAction["Hyperbeast SUV Skin", '(vehicle player) setObjectTextureGlobal[0,"skins\car\HyperbeastSUV.jpg"]; player removeAction skinAction;', "",0,false,true,"""",'(vehicle player != player) && ((typeOf (vehicle player)) isEqualTo "C_SUV_01_F")' ]; if(BANK > 50000) then {BANK = BANK - 50000; hint "Du hast alle möglichen Skins auf dein Fahrzeug geladen\n und dafür 50 000$ bezahlt!";};};
                    case "B_Heli_Light_01_F": { skinAction = player addAction["Hyperbeast Hummingbird Skin", '(vehicle player) setObjectTextureGlobal[0,"skins\air\hyperbird.paa"]; player removeAction skinAction;', "",0,false,true,"""",'(vehicle player != player) && ((typeOf (vehicle player)) isEqualTo "B_Heli_Light_01_F")' ]; if(BANK > 50000) then {BANK = BANK - 50000; hint "Du hast alle möglichen Skins auf dein Fahrzeug geladen\n und dafür 50 000$ bezahlt!";};};
                    case "I_MRAP_03_F": { skinAction = player addAction["Nachtwerk Strider Skin", '(vehicle player) setObjectTextureGlobal[0,"skins\car\nachtwerk_strider.paa"]; player removeAction skinAction;', "",0,false,true,"""",'(vehicle player != player) && ((typeOf (vehicle player)) isEqualTo "I_MRAP_03_F")' ];if(BANK > 50000) then {BANK = BANK - 50000; hint "Du hast alle möglichen Skins auf dein Fahrzeug geladen\n und dafür 50 000$ bezahlt!";};};
                    case "C_Hatchback_01_sport_F": { skinAction = player addAction["Monster Energy Limousine Skin", '(vehicle player) setObjectTextureGlobal[0,"skins\car\hatchback_sport_monster.jpg"]; player removeAction skinAction;', "",0,false,true,"""",'(vehicle player != player) && ((typeOf (vehicle player)) isEqualTo "C_Hatchback_01_sport_F")' ]; if(BANK > 50000) then {BANK = BANK - 50000; hint "Du hast alle möglichen Skins auf dein Fahrzeug geladen\n und dafür 50 000$ bezahlt!";};};
                };
            };
        case "CopSkins":   
        {
            switch (_vehicle) do
            {
                case "B_MRAP_01_F": { CopskinAction = player addAction["<t color = '#0000FF'>Polizei Hunter Skin</t>", '(vehicle player) setObjectTextureGlobal[0,"skins\car\hunterpol_1.paa"]; (vehicle player) setObjectTextureGlobal[1,"skins\car\hunterpol_2.paa"]; player removeAction CopskinAction;', "",0,false,true,"""",'(vehicle player != player) && ((typeOf (vehicle player)) isEqualTo "B_MRAP_01_F")' ]; };
                case "C_SUV_01_F": { CopskinAction = player addAction["<t color = '#0000FF'>Polizei SUV Skin</t>", '(vehicle player) setObjectTextureGlobal[0,"skins\car\police_suv.paa"]; player removeAction CopskinAction;', "",0,false,true,"""",'(vehicle player != player) && ((typeOf (vehicle player)) isEqualTo "C_SUV_01_F")' ]; };
                case "I_MRAP_03_F": { CopskinAction = player addAction["<t color = '#0000FF'>Polizei Strider Skin</t>", '(vehicle player) setObjectTextureGlobal[0,"skins\car\strider_sek.paa"]; player removeAction CopskinAction;', "",0,false,true,"""",'(vehicle player != player) && ((typeOf (vehicle player)) isEqualTo "I_MRAP_03_F")' ]; };
                case "C_Hatchback_01_sport_F": { CopskinAction = player addAction["<t color = '#0000FF'>Polizei Limousine Skin</t>", '(vehicle player) setObjectTextureGlobal[0,"skins\car\police_hatchback.paa"]; player removeAction CopskinAction;', "",0,false,true,"""",'(vehicle player != player) && ((typeOf (vehicle player)) isEqualTo "C_Hatchback_01_sport_F")' ]; };
                case "C_Van_02_transport_F": { CopskinAction = player addAction["<t color = '#0000FF'>Polizei Van Skin</t>", '(vehicle player) setObjectTextureGlobal[0,"skins\car\polizei_van.jpg"]; player removeAction CopskinAction;', "",0,false,true,"""",'(vehicle player != player) && ((typeOf (vehicle player)) isEqualTo "C_Van_02_transport_F")' ]; };
                case "B_Heli_Light_01_F": { CopskinAction = player addAction["<t color = '#0000FF'>Polizei Hummingbird Skin</t>", '(vehicle player) setObjectTextureGlobal[0,"skins\air\police_heli.paa"]; player removeAction CopskinAction;', "",0,false,true,"""",'(vehicle player != player) && ((typeOf (vehicle player)) isEqualTo "B_Heli_Light_01_F")' ]; };  
            };
        };
        case "license_civ_gang_rog": { systemChat "Gang: RoG";};
    };
};