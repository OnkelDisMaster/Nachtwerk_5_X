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
_listitems = ["Steuerung","Links","Lizenzen","legale Farmrouten","illegale Farmrouten","Implantate"]; //<- TEXT1 = CASE 0 , TEXT2 = CASE 1, ...
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
		Für Zivilisten:<br/>
		-Abbauen: Windowstaste <br/>-Holstern: Shift+H <br/>
		-Hände hoch: Shift+B <br/>
		-Niederschlagen: Shift + V <br/>
		<br/><br/>
		Für Polizisten:<br/>
		-Nagelbänder: Ü <br/>
		-Yell Sirene: Ö <br/>-EMP Konsole: K <br/>
		-Schranken öffnen: O <br/>
		-Spielerskin aktualisieren: ^ <br/>
		-Wanted Liste: Shift + 2/3 <br/>
		<br/><br/>
		Für alle Spieler:<br/>
		-Hitmarker Implantat de/-aktivieren: STRG + Shift + H <br/>
		-ATM Pin anzeigen: STRG + Shift + A <br/>
		-Kofferraum: T <br/>-Sirene: F <br/>
		-Festnehmen: Shift+R <br/>
		-Emotes: Numpad Tasten <br/>
		-Schlüssel benutzen: U <br/>
		-Tuningchip de/-aktivieren <br/>
		-Ohrstöpsel: Shift+Bild down <br/>
		-Interagieren: Windowstaste <br/>";
	};
	case 1: {
		_desctext = "Diese Links werden euch helfen: <br/>
		<br/>
		-Forum: http://nachtwerk-community.de/arma/wcf/ <br/>
		<br/>
		-TS3 Ip: 144.76.83.227 <br/>
		<br/>
		-Regelwerk:  http://nachtwerk-community.de/arma/wcf/index.php?thread/2-altis-life-regeln/ <br/>";
	};
	case 2: {
		_desctext = "Allgemeine Lizenzen: <br/>
		Führerschein:		1000<br/>
		LKW Schein:			25k<br/>		
        Bootsschein:		25k<br/>
		Pilotenschein:		250k<br/>
		Waffenschein:		80k<br/>
		Jagdschein:			2,2 Mio<br/>
		Taucherschein:		28k<br/>
		Eigentümerlizenz:	3,5 Mio<br/>
		Transporteurlizenz:	2,5 Mio<br/>
		Logistikpilot:		8,5 Mio<br/>
		Logistikpilot+:		18,5 Mio<br/>
		Ganglizenz:			100k<br/>
		Rebellenlizenz:		2,75 Mio<br/>
		Pro Rebellen:		5,75 Mio<br/>
		Elite Rebellen:		20 Mio<br/>
		<br/>
		Legale Farmlizenzen:<br/>
		Pina Colada:		10k<br/>
		Eisen:				15k<br/>
		Kupfer:				25k<br/>
		Platin:				85k<br/>
		Aluminium:			75k<br/>
		Marmor:				65k<br/>
		Obsidian:			75k<br/>
		Öl:					115k<br/>
		Diesel:				160k<br/>
		Glas:				28k<br/>
		Salz:				38k<br/>
		Bambusleitung:		68k<br/>
		Diamant:			140k<br/>
		Juwelen:			280k<br/>
		Platinkronen:		320k<br/>
		<br/>
		Illegale Farmlizenzen:<br/>
		Zigaretten:			28k<br/>
		Polenböller:		78k<br/>
		Marijuana:			168k<br/>
		Meth:				240k<br/>
		Heroin:				298k<br/>
		Kokain:				415k<br/>
		Korallenketten:		155k<br/>
		Uran:				2 Mio<br/>
		Plutonium:			220k<br/>
		Brennstab:			180k<br/>
		Bombenkopf:			265k<br/>
		Atombombe:			1,275 Mio<br/>
		Implantat/Mikroprozessor: 1,275 Mio<br/>
		Goldbauteil:		2 Mio<br/>";
	};
	case 3: {
		_desctext = "legale Farmrouten: <br/>
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
		Diesel: Ölfelder -> Ölrafinerie -> Kraftstoffrafinerie -> Ölhändler <br/>
		Glas: Sandgrube -> Sandverarbeitung -> Glasbläserei <br/>
		Salz: Salzgrube -> Salzverarbeitung -> Salzhändler <br/>
		Bambusleitungen: Bambusfeld -> Bambusleitungenherstellung -> Altiskom <br/>
		Diamanten: Diamantenmine -> Edelsteinschleifer -> Juwelier <br/>
		Juwelen: Schürfstelle -> Edelsteinschleifer -> Juwelier <br/>
		Kronen: 4 Platin + 4 Diamanten + 4 Glas -> Kronenherstellung -> Juwelier <br/>";
	};
	case 4: {
		_desctext = "illegale Farmrouten: <br/>
		Zigaretten: Tabakfeld -> Tabakwarenindustrie -> Tabakwarenhändler <br/>
		Polenböller: Schwarzpulver -> Bernds Böller Bunker -> Dealer <br/>
		Marijuana: Marijuanaplantage -> Marijuanaküche -> Dealer <br/>
		Meth: Methplantage -> Methküche -> Dealer <br/>
		Heroin: Heroinplantage -> Heroinküche -> Dealer <br/>
		Kokain: Kokainplantage -> Koikainküche -> Dealer <br/>
		Schildkröten: Naturschutzgebiet -> Schildkrötenhändler <br/>
		Korallen: Korallenriff -> Korallenketten -> Dealer <br/>
		Uran: Urangrube -> Uranproduktion 1 -> Uranproduktion 2 -> Uranproduktion 3 -> Uranproduktion 4 -> Uranhändler <br/>	
		<br/>
		Plutonium: Uran 4 -> Plutoniumproduktion <br/>
		Brennstäbe: Plutonium -> Kraftwerk Athira -> Kraftwerk Kavala <br/>
		Bombenköpfe: 8 Eisenbarren + 8 Aluminiumbarren -> Schwarzmarkt <br/>
		Atombomben: 20 Plutonium + Bombenkopf -> Bombenherstellung -> Schwarzmarkt <br/>
		Mikroprozessoren: 4 Platinbarren + 5 Aluminiumbarren + 6 Kupferbarren -> Mikroprozessorenherstellung -> Schwarzmarkt <br/>
		Standard Implantate: 10 Mikroprozessoren -> Nano Fabrik -> Schwarzmarkt <br/>
		Spezielle Implantate: Standard Implantat + Extras -> Nano Fabrik -> Eigenkonsum/Spielerhandel <br/>";
	};
	case 5: {
		_desctext = "Fertigung der Implantate + Nutzen:<br/>";
	};
};
_textbox ctrlSetStructuredText parseText format["%1",_desctext];
_textbox ctrlSetPosition [0,0,0.318655 * safezoneW,ctrlTextHeight _textbox];
_textbox ctrlCommit 0;