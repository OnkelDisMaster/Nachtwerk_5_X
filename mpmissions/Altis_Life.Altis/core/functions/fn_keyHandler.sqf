#include "..\..\script_macros.hpp"
/*
*    File: fn_keyHandler.sqf
*    Author: Bryan "Tonic" Boardwine
*
*    Description:
*    Main key handler for event 'keyDown'.
*/
private ["_handled","_shift","_alt","_code","_ctrl","_alt","_ctrlKey","_veh","_locked","_interactionKey","_interruptionKeys"];
_ctrl = _this select 0;
_code = _this select 1;
_shift = _this select 2;
_ctrlKey = _this select 3;
_alt = _this select 4;
_speed = speed cursorObject;
_handled = false;

_interactionKey = if (count (actionKeys "User10") isEqualTo 0) then {219} else {(actionKeys "User10") select 0};
//hint str _code;
_interruptionKeys = [17,30,31,32]; //A,S,W,D

//Vault handling...
if ((_code in (actionKeys "GetOver") || _code in (actionKeys "salute") || _code in (actionKeys "SitDown") || _code in (actionKeys "Throw") || _code in (actionKeys "GetIn") || _code in (actionKeys "GetOut") || _code in (actionKeys "Fire") || _code in (actionKeys "ReloadMagazine") || _code in [16,18]) && ((player getVariable ["restrained",false]) || (player getVariable ["playerSurrender",false]) || life_isknocked || life_istazed)) exitWith {
    true;
};

if (life_action_inUse) exitWith {
    if (!life_interrupted && _code in _interruptionKeys) then {life_interrupted = true;};
    _handled;
};

//Hotfix for Interaction key not being able to be bound on some operation systems.
if (!(count (actionKeys "User10") isEqualTo 0) && {(inputAction "User10" > 0)}) exitWith {
    //Interaction key (default is Left Windows, can be mapped via Controls -> Custom -> User Action 10)
    if (!life_action_inUse) then {
        [] spawn {
            private "_handle";
            _handle = [] spawn life_fnc_actionKeyHandler;
            waitUntil {scriptDone _handle};
            life_action_inUse = false;
        };
    };
    true;
};

if (life_container_active) exitwith {
    //ignore movement actions
    private _allowedMoves = [
        "MoveForward",
        "MoveBack",
        "TurnLeft",
        "TurnRight",
        "MoveFastForward",
        "MoveSlowForward",
        "turbo",
        "TurboToggle",
        "MoveLeft",
        "MoveRight",
        "WalkRunTemp",
        "WalkRunToggle",
        "AdjustUp",
        "AdjustDown",
        "AdjustLeft",
        "AdjustRight",
        "Stand",
        "Crouch",
        "Prone",
        "MoveUp",
        "MoveDown",
        "LeanLeft",
        "LeanLeftToggle",
        "LeanRight",
        "LeanRightToggle"
    ];
    if (({_code in (actionKeys _x)} count _allowedMoves) > 0) exitwith {
        false;
    };
    //handle other keys
    if (_code isEqualTo 57) then {//space key -> place
        life_storagePlacing = 0 spawn life_fnc_placestorage;
    } else { //other keys -> abort
        if (!isNull life_storagePlacing) exitWith {}; //already placing down a box
        if (!isNull life_container_activeObj) then {
            deleteVehicle life_container_activeObj;
            titleText [localize "STR_NOTF_PlaceContainerAbort", "PLAIN"];
        };
        life_container_active = false;
    };
    true;
};

//Sitdown Script
 if (_code in (actionKeys "MoveForward")) then
 {
     if (life_sitting) then
     {
         [] call life_fnc_standup;
         _handled = true;
     };
 };
 
switch (_code) do {

     // -- Disable commander/tactical view
    if (LIFE_SETTINGS(getNumber,"disableCommanderView") isEqualTo 1) then {
        private _CommandMode = actionKeys "tacticalView";

        if (_code in _CommandMode) then {
            hint localize "STR_NOTF_CommanderView";
            _handled = true;
        };
    };
    
     //Space key for Jumping
    case 57: {
        if (isNil "jumpActionTime") then {jumpActionTime = 0;};
        if (_shift && {!(animationState player isEqualTo "AovrPercMrunSrasWrflDf")} && {isTouchingGround player} && {stance player isEqualTo "STAND"} && {speed player > 2} && {!life_is_arrested} && {((velocity player) select 2) < 2.5} && {time - jumpActionTime > 1.5}) then {
            jumpActionTime = time; //Update the time.
            [player] remoteExec ["life_fnc_jumpFnc",RANY]; //Global execution
            _handled = true;
        };
    };

    //Surrender (Shift + B)
    case 48: {
		if (_shift) then {
			if (player getVariable ["playerSurrender",false]) then {
				player setVariable ["playerSurrender",false,true];
            } else {
                [] spawn life_fnc_surrender;
            };
            _handled = true;
        };
    };	

    //Map Key
    case _mapKey: {
        switch (playerSide) do {
            case west: {if (!visibleMap) then {[] spawn life_fnc_copMarkers;}};
            case independent: {if (!visibleMap) then {[] spawn life_fnc_medicMarkers;}};
            case civilian: {if (!visibleMap) then {[] spawn life_fnc_civMarkers;}};
        };
    };

    //Holster / recall weapon. (Shift + H)
    case 35: {
        if (_shift && !_ctrlKey && !(currentWeapon player isEqualTo "")) then {
            life_curWep_h = currentWeapon player;
            player action ["SwitchWeapon", player, player, 100];
            player switchCamera cameraView;
        };

        if (!_shift && _ctrlKey && !isNil "life_curWep_h" && {!(life_curWep_h isEqualTo "")}) then {
            if (life_curWep_h in [primaryWeapon player,secondaryWeapon player,handgunWeapon player]) then {
                player selectWeapon life_curWep_h;
            };
        };
		
		//Hitmarker toggle (STRG + Shift + H)
		if ((_shift) && (_ctrlKey)) then {
			if (license_civ_implantat_hitmarker || license_cop_hitmarker) then
			{
				if (life_hitmarker) then {life_hitmarker = false; hint "Hitmarker Deaktiviert";} else {life_hitmarker = true; hint "Hitmarker Aktiviert";};
			};           
        };
    };
	
	//Ü Nagelbänder
	case 26:
	{	
		if(vehicle player != player) exitWith {hintSilent "Du bist in einem Fahrzeug!"};
		if(playerSide == west) then {
			if(([false,"spikeStrip",1] call life_fnc_handleInv) && (!_ctrlKey)) then
			{
				[] spawn life_fnc_spikeStrip;
			};
		};
	};

	
    //Interaction key (default is Left Windows, can be mapped via Controls -> Custom -> User Action 10)
    case _interactionKey: {
        if (!life_action_inUse) then {
            [] spawn  {
                private "_handle";
                _handle = [] spawn life_fnc_actionKeyHandler;
                waitUntil {scriptDone _handle};
                life_action_inUse = false;
            };
        };
    };

    //Restraining (Shift + R)
    case 19: {
        if (_shift) then {_handled = true;};
        if (_shift && ((playerSide isEqualTo west) || (playerSide isEqualTo civilian)) && {!isNull cursorObject} && {cursorObject isKindOf "Man"} && {(isPlayer cursorObject)} && {(side cursorObject in [civilian,independent,west])} && {alive cursorObject} && {cursorObject distance player < 3.5} && {!(cursorObject getVariable "Escorting")} && {!(cursorObject getVariable "restrained")} && {speed cursorObject < 1}) then {
            if (!(license_civ_rebel) && (playerSide isEqualTo civilian)) exitWith { hintSilent "Du benötigst eine Rebellenlizenz!"; };
            if(life_inv_kabelbinder < 1) exitWith { hintSilent "Du hast keine Kabelbinder bei dir !"; };
			if ((playerSide isEqualTo west) && (Side cursorObject isEqualTo west)) exitWith {hint"Du kannst deinen Kollegen nicht festnehmen!";};
			[] call life_fnc_restrainAction;
        };
    };

    //Knock out, this is experimental and yeah... (Shift + V)
    case 47: {
        if (_shift) then {_handled = true;};
        if (_shift && playerSide isEqualTo civilian && !isNull cursorObject && cursorObject isKindOf "Man" && isPlayer cursorObject && alive cursorObject && cursorObject distance player < 4 && speed cursorObject < 1) then {
            if ((animationState cursorObject) != "Incapacitated" && (currentWeapon player == primaryWeapon player || currentWeapon player == handgunWeapon player) && currentWeapon player != "" && !life_knockout && !(player getVariable ["restrained",false]) && !life_istazed && !life_isknocked) then {
                [cursorObject] spawn life_fnc_knockoutAction;
            };
        };
    };
/*	
	//ATM Pin Anzeige (STRG + Shift + A)
    case 30: {
		if (_shift && _ctrlKey) then 
		{
			hint format ["Dein Aktueller ATM Pin Code lautet: %1", life_bankingpin];
		};
    };
*/	
    //T Key (Trunk)
    case 20: {
        if (!_alt && !_ctrlKey && !dialog && {!life_action_inUse}) then {
            if (vehicle player != player && alive vehicle player) then {
                if (((vehicle player) in life_vehicles) ||  (Side (vehicle player) isEqualTo west) ||  (FETCH_CONST(life_adminlevel) > 1)) then {
                    [vehicle player] spawn life_fnc_openInventory;
                };
            } else {
                private "_list";
                _list = ((ASLtoATL (getPosASL player)) nearEntities [["Box_IND_Grenades_F","B_supplyCrate_F"], 2.5]) select 0;
                if (!(isNil "_list")) then {
                    _house = nearestObject [(ASLtoATL (getPosASL _list)), "House"];
                    if (_house getVariable ["locked", false]) then {
                        hint localize "STR_House_ContainerDeny";
                    } else {
                        [_list] spawn life_fnc_openInventory;
                    };
                } else {
                    _list = ["landVehicle","Air","Ship"];
                    _list append (LIFE_SETTINGS(getArray,"life_container"));
                    if (KINDOF_ARRAY(cursorObject,_list) && {player distance cursorObject < 7} && {isNull objectParent player} && {alive cursorObject} && {!life_action_inUse}) then {
                        if ((cursorObject in life_vehicles) ||  (Side (vehicle player) isEqualTo west) || (FETCH_CONST(life_adminlevel) > 1)) then {
                            [cursorObject] spawn life_fnc_openInventory;
                        };
                    };
                };
            };
        };
    };

    //L Key?
	case 38: {
		private _veh = vehicle player;
			if (_ctrlKey && {!_shift} && {!isNull objectParent player} && {(driver _veh) isEqualTo player} && (playerSide in [west,independent])) then {
			call bf_fnc_lights;
			_handled = true;
			};
			if (_shift && {!_ctrlKey} && {!isNull objectParent player} && {(driver _veh) isEqualTo player} && (playerSide in [west,independent])) then {
                if (!isNull (_veh getVariable ["lightObj",objNull])) then {
                    if (_veh getVariable ["lights",false]) then {
                        _veh setVariable ["lights",false,true];
                    } else {
                        _veh setVariable ["lights",true,true];
                        [_veh] remoteExec ["bf_fnc_lightsOn",0];
                    };
                } else {
                    if (!isNil {_veh getVariable "lights"}) then {
                        if (playerSide isEqualTo west) then {
                            [_veh] call life_fnc_sirenLights;
                        } else {
                            [_veh] call life_fnc_medicSirenLights;
                        };
                            _handled = true;
                    };
                };
                _handled = true;
			};
			if(!_alt && !_ctrlKey) then { [] call life_fnc_radar; };
		};
	
    //Y Player Menu
    case 21: {
        if (!_alt && !_ctrlKey && !dialog && !(player getVariable ["restrained",false]) && {!life_action_inUse}) then {
            [] call life_fnc_p_openMenu;
        };
    };

    //F Key
    case 33: {
        if (playerSide in [west,independent] && {vehicle player != player} && {!life_siren_active} && {((driver vehicle player) == player)}) then {
            [] spawn {
                life_siren_active = true;
                sleep 4.7;
                life_siren_active = false;
            };

            _veh = vehicle player;
            if (isNil {_veh getVariable "siren"}) then {_veh setVariable ["siren",false,true];};
            if ((_veh getVariable "siren")) then {
                titleText [localize "STR_MISC_SirensOFF","PLAIN"];
                _veh setVariable ["siren",false,true];
                if !(isNil {(_veh getVariable "sirenJIP")}) then {
                    private _jip = _veh getVariable "sirenJIP";
                    _veh setVariable ["sirenJIP",nil,true];
                    remoteExec ["",_jip]; //remove from JIP queue
                };
            } else {
                titleText [localize "STR_MISC_SirensON","PLAIN"];
                _veh setVariable ["siren",true,true];
                private "_jip";
                if (playerSide isEqualTo west) then {
                    _jip = [_veh] remoteExec ["life_fnc_copSiren",RCLIENT,true];
                } else {
                    _jip = [_veh] remoteExec ["life_fnc_medicSiren",RCLIENT,true];
                };
                _veh setVariable ["sirenJIP",_jip,true];
            };
        };
    };
    
    #define IDC_LIFE_BAR_Speaker 3007

    disableSerialization;

    //Ohrstöpsel Key (Shift + Bild runter)
    case 209: {
        if (_shift) then {
            if (soundVolume != 1) then {
				life_fadeSound = false;
                1 fadeSound 1;
                hint composeText [ image "icons\sound_new.paa"," Normaler Sound"];
				LIFEctrl(IDC_LIFE_BAR_Speaker) ctrlSetText "icons\earplugsN.paa";
				
            } else {
				life_fadeSound = true;
                1 fadeSound 0.1;
                hint composeText [ image "icons\sound.paa"," 90% Leiser"];
				LIFEctrl(IDC_LIFE_BAR_Speaker) ctrlSetText "icons\earplugsY.paa";
            };
        };
    };

	//EMP Konsole - K
    case 37:
    {
        if (!_shift && !_alt && !_ctrlKey && (playerSide isEqualTo west) && (call life_coplevel > 2) && (vehicle player != player) && (typeOf vehicle player) in ["B_Heli_Light_01_F","I_Heli_light_03_unarmed_F","O_Heli_Light_02_unarmed_F","I_Heli_Transport_02_F","B_Heli_Transport_01_F","B_Heli_Transport_03_F","I_MRAP_03_F","B_MRAP_01_F","C_Offroad_01_F","C_Hatchback_01_F","C_Hatchback_01_sport_F","I_APC_Wheeled_03_cannon_F","C_SUV_01_F"]) then
        {
            [] call life_fnc_openEmpMenu; [_this] call life_fnc_isEmpOperator;
        };
    };	
/*	
	// Taste Q Boost
	case 16: {
		_chip = (vehicle player) getVariable ["Chipsatz",0];
		if (_chip isEqualTo 0) exitwith {};
		if (_vehicle getVariable["nano_empd",false]) exitwith {hint "Du kannst keinen Chip wärend eines EMPs benutzen!!";};
		if ((vehicle player != player) && ((driver vehicle player) isEqualTo player)) then {
            if ((vehicle player) getVariable ["speeder",false]) then
				{	
					[] spawn {
					hint "Chip wurde deaktiviert...";
					sleep 2;
					vehicle player setvariable ["speeder",false,true];	
					};
				} else
				{
					[(vehicle player)] spawn life_fnc_speedUp;
					sleep 2;
				};
		};	
	};
*/	
	// Emotes
	case 79: {
		player playAction "GestureCeaseFire";
		sleep 2;
	};
	
	case 156: {
		player playAction "GestureAdvance";
		sleep 2;
	};
	
	case 80: {
		player playAction "GestureAgonyCargo";
		sleep 2;
	};
	
	case 81: {
		player playAction "GestureCover";
		sleep 2;
	};
	
	case 75: {
		player playAction "GestureFollow";
		sleep 2;
	};
	
	case 76: {
		player playAction "GestureFreeze";
		sleep 2;
	};
	
	case 77: {
		player playAction "GestureHi";
		sleep 2;
	};
	
	case 71: {
		player playAction "GestureNo";
		sleep 2;
	};
	
	case 72: {
		player playAction "GestureYes";
		sleep 2;
	};
	
	case 73: {
		player playAction "GesturePoint";
		sleep 2;
	};
	
	case 82: {
		if ((_shift) && (license_cop_sound)) then {
			hint "Cop Sound";
			[player,"copsound"] remoteExec ["life_fnc_say3D",RANY];
			sleep 2;
		};
	};
	
	
	//Cop Skinrefresh
	case 41: 
	{ 
		if (playerside isEqualTo west) then
		{
			[] spawn 
			{
				[] call life_fnc_playerSkins;
				hint "Skin wurde aktualisiert";
				sleep 2;
			};
		};
	};
/*	
	//SmartPhone  Shift + 1
    case 2:
    {
        if(_shift) then {_handled = true;};
        if (_shift) then
        {
            if(!_alt && !_ctrlKey && !dialog) then
            {
                [] call life_fnc_callCellPhone;
            };
        };
    };
*/
    //Wanted List Shift + 2
    case 3:
    {
        if(playerSide in [independent,civilian]) exitWith {};
        if(_shift) then {_handled = true;};
        if (_shift) then
        {
            if(!_alt && !_ctrlKey && !dialog) then
            {
                [] call life_fnc_wantedMenu;
            };
        };
    };
/*
    //Wanted List Shift + 3
    case 4:
    {
        if(playerSide in [independent,civilian]) exitWith {};
        if(_shift) then {_handled = true;};
        if (_shift) then
        {
            if(!_alt && !_ctrlKey && !dialog) then
            {
                createDialog "life_wantedadd2";
            };
        };
    };
*/
    //Ö Key - Sirene
	case 39:
	{
		if(playerSide in [west] && vehicle player != player && !life_siren_active && ((driver vehicle player) == player)) then
		{
			[] spawn
			{
				life_siren_active = true;
				uiSleep 7;
				life_siren_active = false;
			};
			_veh = vehicle player;
			if(isNil {_veh getVariable "siren2"}) then {_veh setVariable["siren2",false,true];};
			if((_veh getVariable "siren2")) then
			{
				titleText ["Warnung AUS","PLAIN"];
				_veh setVariable["siren2",false,true];
			}
				else
			{
				titleText ["Warnung AN","PLAIN"];
				_veh setVariable["siren2",true,true];
				if(playerSide == west) then {
					//[[_veh],"life_fnc_copSiren2",nil,true] spawn life_fnc_MP;
					[_veh] remoteExec ["life_fnc_copSiren2"];
				} else {
					//[[_veh],"life_fnc_medicSiren",nil,true] spawn life_fnc_MP;
					[_veh] remoteExec ["life_fnc_medicSiren"];
				};
			};
		};
	};

    // O Schranken öffnen
    case 40:
    {
        if (!_shift && !_alt && !_ctrlKey && (playerSide in [west,independent])) then {
            [] call life_fnc_copOpener;
        };
    };
	
    //U Key
    case 22: {
        if (!_alt && !_ctrlKey) then {
            if (isNull objectParent player) then {
                _veh = cursorObject;
            } else {
                _veh = vehicle player;
            };

            if (_veh isKindOf "House_F" && {playerSide isEqualTo civilian}) then {
                if (_veh in life_vehicles && {player distance _veh < 20}) then {
                    _door = [_veh] call life_fnc_nearestDoor;
                    if (_door isEqualTo 0) exitWith {hint localize "STR_House_Door_NotNear"};
                    _locked = _veh getVariable [format ["bis_disabled_Door_%1",_door],0];

                    if (_locked isEqualTo 0) then {
                        _veh setVariable [format ["bis_disabled_Door_%1",_door],1,true];
                        _veh animateSource [format ["Door_%1_source", _door], 0];
                        systemChat localize "STR_House_Door_Lock";
                    } else {
                        _veh setVariable [format ["bis_disabled_Door_%1",_door],0,true];
                        _veh animateSource [format ["Door_%1_source", _door], 1];
                        systemChat localize "STR_House_Door_Unlock";
                    };
                };
            } else {
                _locked = locked _veh;
                if (_veh in life_vehicles && {player distance _veh < 20}) then {
                    if (_locked isEqualTo 2) then {
                        if (local _veh) then {
                            _veh lock 0;

                            // BI
                            _veh animateDoor ["door_back_R",1];
                            _veh animateDoor ["door_back_L",1];
                            _veh animateDoor ['door_R',1];
                            _veh animateDoor ['door_L',1];
                            _veh animateDoor ['Door_L_source',1];
                            _veh animateDoor ['Door_rear',1];
                            _veh animateDoor ['Door_rear_source',1];
                            _veh animateDoor ['Door_1_source',1];
                            _veh animateDoor ['Door_2_source',1];
                            _veh animateDoor ['Door_3_source',1];
                            _veh animateDoor ['Door_LM',1];
                            _veh animateDoor ['Door_RM',1];
                            _veh animateDoor ['Door_LF',1];
                            _veh animateDoor ['Door_RF',1];
                            _veh animateDoor ['Door_LB',1];
                            _veh animateDoor ['Door_RB',1];
                            _veh animateDoor ['DoorL_Front_Open',1];
                            _veh animateDoor ['DoorR_Front_Open',1];
                            _veh animateDoor ['DoorL_Back_Open',1];
                            _veh animateDoor ['DoorR_Back_Open ',1];
                        } else {
                            [_veh,0] remoteExecCall ["life_fnc_lockVehicle",_veh];

                            _veh animateDoor ["door_back_R",1];
                            _veh animateDoor ["door_back_L",1];
                            _veh animateDoor ['door_R',1];
                            _veh animateDoor ['door_L',1];
                            _veh animateDoor ['Door_L_source',1];
                            _veh animateDoor ['Door_rear',1];
                            _veh animateDoor ['Door_rear_source',1];
                            _veh animateDoor ['Door_1_source',1];
                            _veh animateDoor ['Door_2_source',1];
                            _veh animateDoor ['Door_3_source',1];
                            _veh animateDoor ['Door_LM',1];
                            _veh animateDoor ['Door_RM',1];
                            _veh animateDoor ['Door_LF',1];
                            _veh animateDoor ['Door_RF',1];
                            _veh animateDoor ['Door_LB',1];
                            _veh animateDoor ['Door_RB',1];
                            _veh animateDoor ['DoorL_Front_Open',1];
                            _veh animateDoor ['DoorR_Front_Open',1];
                            _veh animateDoor ['DoorL_Back_Open',1];
                            _veh animateDoor ['DoorR_Back_Open ',1];
                        };
                        systemChat localize "STR_MISC_VehUnlock";
                        [_veh,"unlockCarSound",50,1] remoteExec ["life_fnc_say3D",RANY];
                    } else {
                        if (local _veh) then {
                            _veh lock 2;

                            _veh animateDoor ["door_back_R",0];
                            _veh animateDoor ["door_back_L",0];
                            _veh animateDoor ['door_R',0];
                            _veh animateDoor ['door_L',0];
                            _veh animateDoor ['Door_L_source',0];
                            _veh animateDoor ['Door_rear',0];
                            _veh animateDoor ['Door_rear_source',0];
                            _veh animateDoor ['Door_1_source',0];
                            _veh animateDoor ['Door_2_source',0];
                            _veh animateDoor ['Door_3_source',0];
                            _veh animateDoor ['Door_LM',0];
                            _veh animateDoor ['Door_RM',0];
                            _veh animateDoor ['Door_LF',0];
                            _veh animateDoor ['Door_RF',0];
                            _veh animateDoor ['Door_LB',0];
                            _veh animateDoor ['Door_RB',0];
                            _veh animateDoor ['DoorL_Front_Open',0];
                            _veh animateDoor ['DoorR_Front_Open',0];
                            _veh animateDoor ['DoorL_Back_Open',0];
                            _veh animateDoor ['DoorR_Back_Open ',0];
                        } else {
                            [_veh,2] remoteExecCall ["life_fnc_lockVehicle",_veh];

                            _veh animateDoor ["door_back_R",0];
                            _veh animateDoor ["door_back_L",0];
                            _veh animateDoor ['door_R',0];
                            _veh animateDoor ['door_L',0];
                            _veh animateDoor ['Door_L_source',0];
                            _veh animateDoor ['Door_rear',0];
                            _veh animateDoor ['Door_rear_source',0];
                            _veh animateDoor ['Door_1_source',0];
                            _veh animateDoor ['Door_2_source',0];
                            _veh animateDoor ['Door_3_source',0];
                            _veh animateDoor ['Door_LM',0];
                            _veh animateDoor ['Door_RM',0];
                            _veh animateDoor ['Door_LF',0];
                            _veh animateDoor ['Door_RF',0];
                            _veh animateDoor ['Door_LB',0];
                            _veh animateDoor ['Door_RB',0];
                            _veh animateDoor ['DoorL_Front_Open',0];
                            _veh animateDoor ['DoorR_Front_Open',0];
                            _veh animateDoor ['DoorL_Back_Open',0];
                            _veh animateDoor ['DoorR_Back_Open ',0];
                        };
                        systemChat localize "STR_MISC_VehLock";
                        [_veh,"lockCarSound",50,1] remoteExec ["life_fnc_say3D",RANY];
                    };
                };
            };
        };
    };
};

_handled;
