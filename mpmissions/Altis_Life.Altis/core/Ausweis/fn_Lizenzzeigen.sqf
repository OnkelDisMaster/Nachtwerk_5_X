if(isServer)exitWith{};
private["_ziel", "_rang", "_marke", "_org", "_message"];
if(vehicle player != player )exitWith{};
_ziel = cursorTarget;
if(isNull _ziel) then {_ziel = player;};    
if(!(_ziel isKindOf "Man")) then {_ziel = player;};  
if(!(alive _ziel)) then {_ziel = player;};     
switch(playerSide)do{
 case west:{
  switch (call life_coplevel) do{
   case 1: { _rang = "Polizeianwaerter"; };
   case 2: { _rang = "Polizeimeister"; };
   case 3: { _rang = "Polizeiobermeister"; };
   case 4: { _rang = "Polizeihauptmeister"; };
   case 5: { _rang = "Polizeikommissaranwaerter"; };
   case 6: { _rang = "Polizeikommissar"; };
   case 7: { _rang = "Polizeioberkommissar"; };
   case 8: { _rang = "Polizeioberkommissar mit Zulage"; };
   case 9: { _rang = "Polizeihauptkommissar"; };
   case 10: { _rang = "Polizeihauptkommissar mit Zulage"; };
   case 11: { _rang = "Erster Polizeihauptkommissar"; };
   case 12: { _rang = "Polizeidirektor"; };
   case 13: { _rang = "Leitender Polizeidirektor"; };
   default { _rank =  "Error";};
  };
  _marke = "marke_cop";
  _org = "Polizei Altis";
 };

 case independent:{
  switch (call life_mediclevel) do{
   case 1: { _rang = "Assistirender Feuerwehrmann"; };
   case 2: { _rang = "Feuerwehrmann"; };
   case 3: { _rang = "Kommandirender Feuerwehrmann"; };
   case 4: { _rang = "Einsatzleiter"; };
   case 5: { _rang = "Ausbilder"; };
   case 6: { _rang = "Leitstelle"; };
   case 7: { _rang = "Stellvertretender Wachleiter"; };
   case 8: { _rang = "Wachleiter"; };
   default { _rank =  "Error";};
  };
  _marke = "marke_sani";
  _org = "Feuerwehr Altis";
 };
 case civilian:{
  if(playerSide == civilian)then{
   _rang = "Zivilist";
   _marke = "marke_ziv";
   _org = "Republik Altis";
  };
	
 };
};
_message = format["<img size='10' color='#FFFFFF' image='icons\%1.paa'/><br/><br/><t size='2.5'>%2</t><br/><t size='1.8'>%3</t><br/><t size='1'>%4</t>",_marke, name player, _rang, _org];
[[player, _message],"life_fnc_Lizenzsehen",_ziel,false] spawn life_fnc_MP;