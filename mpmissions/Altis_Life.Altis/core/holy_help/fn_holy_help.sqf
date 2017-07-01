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
_listitems = ["Steuerung","Links","legale Farmrouten","illegale Farmrouten"]; //<- TEXT1 = CASE 0 , TEXT2 = CASE 1, ...
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
		_desctext = "
		Folgende Steuerung gibt es: <br/>
		-Abbauen: Windowstaste <br/>
		-Holstern: Shift+H <br/>
		-Hände hoch: Shift+G <br/>
		-Interagieren: Windowstaste <br/>
		-Ohrstöpsel: Shift+Bild down <br/>
		-Festnehmen: Shift+R <br/>
		";
	};
	case 1: {
		_desctext = "
		Diese Links werden euch helfen: <br/>
		-Forum: http://nachtwerk-community.de/arma/wcf/ <br/>
		-TS-Ip: 144.76.83.227 <br/>
		-Regeln:  http://nachtwerk-community.de/arma/wcf/index.php?thread/2-altis-life-regeln/ <br/>
		"
		;
	};
	case 2: {
		_desctext = "
		legale Farmrouten: <br/>
			Äpfel: Apfelplantage -> Markt <br/>
			Pfirsiche: Pfirsichplantage -> Markt <br/> 
			Bananen: Bananenplantage -> Markt <br/>
			Kokosnuss: Kokosnussplantage -> Markt <br/>
			Ananas: Ananasplantage -> Markt <br/>
			Apfelsaft: Apfelplantage -> Saftpresse -> Markt <br/>
			Pfirsichsaft: Pfirsichplantage -> Saftpresse -> Markt <br/>
			Bananensaft: Bananenplantage -> Saftpresse -> Markt <br/>
			Kokosnusssaft: Kokosnussplantage -> Saftpresse -> Markt <br/>
			Ananassaft: Ananasplantage -> Saftpresse -> Markt <br/>
			Pinacolada: Ananasplantage + Kokosnussplantage -> Saftpresse -> Markt <br/>
			Kupferbarren: Kupfermine -> Kupferschmelze -> Metallhändler <br/>
			Eisenbarren: Eisenmine -> Eisenschmeltze -> Metallhändler <br/>
			Platinbarren: Platingrube -> Platinveredler -> Metallhändler <br/>
			Aluminiumbarren: Aluminiumgrube -> Aluminiumveredler -> Metallhändler <br/>
			Marmor: Marmorsteinbruch -> Steinmetz -> Baustoffhändler <br/>
			Obsidian: Lavagestein -> Steinmetz -> Baustoffhändler <br/>
			Öl: Ölfelder -> Ölrafinerie -> Ölhändler <br/>
			Kraftstoff: Ölfelder -> Ölrafinerie -> Kraftstoffrafinerie -> Ölhändler <br/>
			Glas: Sandgrube -> Sandverarbeitung -> Glasbläserei <br/>
			Salz: Salzgrube -> Salzverarbeitung -> Salzhändler <br/>
			Bambusleitungen: Bambusfeld -> Bambusleitungenherstellung -> Altiscom <br/>
			Diamanten: Diamantenmine -> Edelsteinschleifer -> Juwelier <br/>
			Juwelen: Schürfstelle -> Edelsteinschleifer -> Juwelier <br/>
			Kronen: Platin + Diamanten + Glas -> Kronenherstellung -> Juwelier <br/> 
		";
	};
	case 3: {
		_desctext = "
		illegale Farmrouten: <br/>
			Zigaretten: Tabakfeld -> Tabakwarenindustrie -> Tabakwarenhändler <br/> 
			Polenböller: Schwarzpulver -> Bernds Böller Bunker -> Dealer <br/> 
			Marijuana: Marijuanaplantage -> Marijuanaküche -> Dealer <br/> 
			Meth: Methplantage -> Methküche -> Dealer <br/> 
			Heroin: Heroinplantage -> Heroinküche -> Dealer <br/> 
			Kokain: Kokainplantage -> Koikainküche -> Dealer <br/> 
			Schildkröten: Naturschutzgebiet -> Schildkrötenhändler <br/> 
			Korallen: Korallenrif -> Korallenketten -> Dealer <br/> 
			Uran: Urangrube -> Uranproduktion 1 -> Uranproduktion 2 -> Uranproduktion 3 -> Uranproduktion 4 -> Uranhändler <br/> 
			Plutonium: Uran 4 -> Plutoniumproduktion <br/> 
			Brennstäbe: Plutonium -> Kraftwerk Athira -> Kraftwerk Kavala <br/> 
			Bombenköpfe: 8 Eisenbarren + 8 Aluminiumbarren -> Terrorkeller <br/> 
			Atombomben: 20 Plutonium + Bombenkopf -> Bombenherstellung -> Terrorkeller <br/> 
			Mikroprozessoren: Kupferbarren + Aluminiumbarren + Platinbarren -> Mikroprozessorenherstellung -> Chris der Cyborg <br/> 
			Implantate: Mikroprozessoren -> Nano Fabrik -> Chris der Cyborg <br/> 
			(Implantate können momentan hergestellt und verkauft werden später bekommen sie weitere Funktionen) <br/> 
		";
	};	
_textbox ctrlSetStructuredText parseText format["%1",_desctext];
_textbox ctrlSetPosition [0,0,0.318655 * safezoneW,ctrlTextHeight _textbox];
_textbox ctrlCommit 0;