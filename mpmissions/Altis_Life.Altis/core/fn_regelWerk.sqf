/*

	Author Shinji
	Tutorial intro beim ersten joinen des servers

*/

this_is_my_regelwerk_from_shinji = profileNamespace getVariable "this_is_my_regelwerk_from_shinji";

if !(isNil "this_is_my_regelwerk_from_shinji") exitwith {}; // hat bereits sein Tut durch :)

accept = false;
regel1 = false;
regel2 = false;
regel3 = false;
regel4 = false;
regel5 = false;

player setpos [3469.37,13633.5,7.2];
player setdir 275.83;

cutText ["","BLACK IN"];

while {true} do { // erst weiter führen wenn 
	if (regel1 && regel2 && regel3 && regel4 && regel5) exitwith {hint "Unsere aktuellsten Regeln findest du im Forum!";};
	sleep 0.2;
};

waituntil{accept};

profileNamespace setVariable ["this_is_my_regelwerk_from_shinji", [1]]; 
saveProfileNamespace;

0 cutText["","BLACK FADED"];