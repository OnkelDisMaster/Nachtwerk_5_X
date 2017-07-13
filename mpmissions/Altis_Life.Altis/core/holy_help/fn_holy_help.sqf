/*
 *
 *	Filename:		fn_holy_help.sqf
 *	Description:	Script of the holy_help dialog.
 *
 *	Author: 		AustrianNoob
 *	Date:			02.12.2016
 *
 */
private ["_dialogID","_dialog","_desctext","_listbox","_textbox","_listitems","_lbindex"];
disableSerialization;
_dialogID = 198888; //IDD
_dialog = (findDisplay _dialogID);
_listbox = _dialog displayCtrl 198890;
_textbox = _dialog displayCtrl 198889;
_listitems = ["Steuerung","Links","legale Farmrouten","illegale Farmrouten","Implantate"]; //<- TEXT1 = CASE 0 , TEXT2 = CASE 1, ...
_lbauswahl = lbCurSel 198890;

if(!dialog) then {createDialog "holy_helpmenu"}; //Thefuck?
waitUntil {!isNull (_dialog)};

switch(_lbauswahl) do {
	default {
		_lbindex = 0;
		lbClear 198890;
		{
		lbAdd[198890, _x];
		lbSetData[198890, _lbindex, _lbindex];
		_lbindex = _lbindex +1;		
		} forEach _listitems;
		lbSetCurSel[198890, 0];
	};
	case 0: {
		_desctext = "Folgende Steuerung gibt es: <br/>
		-Interagieren: Windowstaste <br/>";
	};
	case 1: {
		_desctext = "Diese Links werden euch helfen: <br/>
		-Forum: http://nachtwerk-community.de/arma/wcf/ <br/>
		-TS3 Ip: 144.76.83.227 <br/>
		-Regelwerk:  http://nachtwerk-community.de/arma/wcf/index.php?thread/2-altis-life-regeln/ <br/>";
	};
	case 2: {
		_desctext = "legale Farmrouten: <br/>
		Kronen: 4 Platin + 4 Diamanten + 4 Glas -> Kronenherstellung -> Juwelier <br/>";
	};
	case 3: {
		_desctext = "illegale Farmrouten: <br/>
		Spezielle Implantate: Standard Implantat + Extras -> Nano Fabrik -> Eigenkonsum/Spielerhandel <br/>";
	};
	case 4: {
		_desctext = "Fertigung der Implantate + Nutzen:<br/>";
	};
};
_textbox ctrlSetStructuredText parseText format["%1",_desctext];
_textbox ctrlSetPosition [0,0,0.318655 * safezoneW,ctrlTextHeight _textbox];
_textbox ctrlCommit 0;