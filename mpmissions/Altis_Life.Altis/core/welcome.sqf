private ["_admins","_serververwaltung","_supporter","_scripter","_designer"];
_admins = "ElekDrix, Valle, Darius, Daniel, Sascha,";
_supporter = "Kente, Gideon, Melvin";
_serververwaltung = "Nachtwerk-Community";
_scripter = "Valle, Daniel";
_designer = "Salvatore Martinez";

[
	format["<t color='#c18c48' size='1.0'>%1 willkommen</t><br/><t size='0.7'> auf dem Nachtwerk-Server</t>",name player],
	[safezoneX + safezoneW - 2.3,0.50],
	[safezoneY + safezoneH - 0.7,0.7],
	3,
	0.5
] spawn BIS_fnc_dynamicText;
sleep 5;

[
	format["<t color='#c18c48' size='1.0'>Admins</t><br/><t size='0.7'> %1</t>",_admins],
	[safezoneX + safezoneW - 0.7,0.50],
	[safezoneY + safezoneH - 1,0.7],
	3,
	0.5
] spawn BIS_fnc_dynamicText;
sleep 5;

[ 
	format["<t color='#c18c48' size='1.0' >Nachtwerk-Supporter</t><br/><t size='0.7'> %1</t>",_supporter], 
	[safezoneX + safezoneW - 2.3,.7], 
	[safezoneY + safezoneH - 0.6,0.7], 
	8, 
	0.5 
] spawn BIS_fnc_dynamicText;
sleep 10;

[
	format["<t color='#c18c48' size='1.0'>Server hosted By</t><br/><t size='0.7'> %1</t>",_serververwaltung],
	[safezoneX + safezoneW - 0.7,0.50],
	[safezoneY + safezoneH - 1,0.7],
	3,
	0.5
] spawn BIS_fnc_dynamicText;
sleep 5;
[
	format["<t color='#c18c48'  size='1.0'>Scripter</t><br/><t size='0.7'> %1</t>",_scripter],
	[safezoneX + safezoneW - 2.3,0.50],
	[safezoneY + safezoneH - 0.7,0.7],
	3,
	0.5
] spawn BIS_fnc_dynamicText;
sleep 5;

[
	format["<t color='#c18c48' size='1.0'>Designer</t><br/><t size='0.7'> %1</t>",_designer],
	[safezoneX + safezoneW - 0.7,0.50],
	[safezoneY + safezoneH - 1,0.7],
	3,
	0.5
] spawn BIS_fnc_dynamicText;
sleep 5;

[ 
	format["<t color='#c18c48' size='1.5'>Das Nachtwerk-Team</t><br/><t size='0.7'> wünscht Dir viel Spaß</t>"], 
	[safezoneX + 0.2 * safezoneW,1.50], 
	[safezoneY + 0.1 * safezoneH,1.7], 
	3, 
	0.5 
] spawn BIS_fnc_dynamicText; 
