class life_wanted_menu {
	idd = 2400;
	name= "life_wanted_menu";
	movingEnable = false;
	enableSimulation = true;

	class controlsBackground {
		class Life_RscTitleBackground:Life_RscText {
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
			idc = -1;
			x = 0.1;
			y = 0.2;
			w = 0.9;
			h = (1 / 25);
		};

		class MainBackground:Life_RscText {
			colorBackground[] = {0, 0, 0, 0.7};
			idc = -1;
			x = 0.1;
			y = 0.2 + (11 / 250);
			w = 0.9;
			h = 0.9 - (22 / 250);
		};
	};

	class controls {


		class Title : Life_RscTitle {
			colorBackground[] = {0, 0, 0, 0};
			idc = -1;
			text = "$STR_Wanted_Title";
			x = 0.1;
			y = 0.2;
			w = 0.9;
			h = (1 / 25);
		};

		class WantedConnection : Title {
			idc = 2404;
			style = 1;
			text = "";
		};

		class WantedList : Life_RscListNBox
		{
			idc = 2401;
			text = "";
			//columns[] = {0,0.3};
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			onLBSelChanged = "[] call life_fnc_wantedInfo";
			//onLBSelChanged = "[_this] spawn life_fnc_adminQuery";
            rowHeight = 0.050;
            drawSideArrows = 0;
            idcLeft = -1;
            idcRight = -1;
            colorBackground[] = {0, 0, 0, 0};
            colorSelectBackground[] = {0.8,0.8,0.8,1};
            colorSelectBackground2[] = {1,1,1,0.5};
			x = 0.12;
			y = 0.26;
			w = 0.2;
			h = 0.7;
		};

		class WantedDetails : Life_RscListBox
		{
			idc = 2402;
			text = "";
			sizeEx = 0.035;
			colorBackground[] = {0, 0, 0, 0};
            colorSelectBackground[] = {0.95, 0.95, 0.95, 0.5};
            colorSelectBackground2[] = {1, 1, 1, 0.5};
			x = 0.34;
			y = 0.35;
			w = 0.65;
			h = 0.55;
		};

		class BountyPrice : Life_RscText
		{
			idc = 2403;
			text = "";
			x = 0.34;
			y = 0.03;
			w = 0.8;
			h = 0.6;
		};

		/*class PlayerList: Life_RscListBox {
            idc = 2406;
            text = "";
            sizeEx = 0.035;
            //colorBackground[] = {0,0,0,0};
            onLBSelChanged = "";
            x = 0.34;
            y = 0.28;
            w = 0.2;
            h = 0.3;
        };*/

		class CloseButtonKey : Life_RscButtonMenu {
			idc = -1;
			text = "$STR_Global_Close";
			onButtonClick = "closeDialog 0;";
			x = -0.06 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 1.1 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};

		class PardonButtonKey : Life_RscButtonMenu {
			idc = 2405;
			text = "$STR_Wanted_Pardon";
			onButtonClick = "[] call life_fnc_pardon; closeDialog 0;";
			x = 0.1 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 1.1 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};
	};
};