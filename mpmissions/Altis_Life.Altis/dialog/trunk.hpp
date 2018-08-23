/* ----------------------------
    Snipes Murphys Trunk Script
---------------------------- */

class TrunkMenu
{
    idd = 3500;
    name = "TrunkMenu";
    movingEnable = 0;
    enableSimulation = 1;
    
    class controlsBackground{
        class HG: life_RscPicture
        {
            idc = -1;
            text = "images\ui\tablet.paa";
            x = 0.258501 * safezoneW + safezoneX;
            y = 0.0716 * safezoneH + safezoneY;
            w = 0.485625 * safezoneW;
            h = 0.854 * safezoneH;
        };

        class RscTrunkText: Life_RscText
        {
            idc = -1;
            text = "$STR_Trunk_TInventory";
            sizeEx = 0.04;

            x = 0.342187 * safezoneW + safezoneX;
            y = 0.267 * safezoneH + safezoneY;
            w = 0.132031 * safezoneW;
            h = 0.033 * safezoneH;
            colorBackground[] = {-1,-1,-1,0.7};
        };

        class RscPlayerText: Life_RscText
        {
            idc = -1;
            text = "$STR_Trunk_PInventory";
            sizeEx = 0.04;
            x = 0.515469 * safezoneW + safezoneX;
            y = 0.267 * safezoneH + safezoneY;
            w = 0.132031 * safezoneW;
            h = 0.033 * safezoneH;
            colorBackground[] = {-1,-1,-1,0.7};
        };

        class RscTitleText: Life_RscTitle
        {
            idc = -1;
            text = "";
            x = 0.287586 * safezoneW + safezoneX;
            y = 0.24 * safezoneH + safezoneY;
            w = 0.0979687 * safezoneW;
            h = 0.0276 * safezoneH;
        };

        class VehicleWeight: RscTitleText
        {
            idc = 3504;
            style = 1;
            text = "";
        };
    };
    class Controls
    {

        class TakeItem: Life_RscButtonMenu
        {
            idc = -1;
            text = "Take";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] call Life_fnc_vehTakeItem;";

            x = 0.341187 * safezoneW + safezoneX;
            y = 0.680 * safezoneH + safezoneY;
            w = 0.0660155 * safezoneW;
            h = 0.033 * safezoneH;
        };

        class StoreItem: Life_RscButtonMenu
        {
            idc = -1;
            text = "Store";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] call Life_fnc_vehStoreItem;";

            x = 0.514469 * safezoneW + safezoneX;
            y = 0.680 * safezoneH + safezoneY;
            w = 0.0660155 * safezoneW;
            h = 0.033 * safezoneH;
        };
        
        //Killerknight's Script Start
        
        class TakeAllItem: Life_RscButtonMenu //Take All Items Button
        {
            idc = -1;
            text = "Take All Selected";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] call Life_fnc_vehTakeAllItem;";

            x = 0.342187 * safezoneW + safezoneX;
            y = 0.720 * safezoneH + safezoneY;
            w = 0.132031 * safezoneW;
            h = 0.033 * safezoneH;
        };
        
        class StoreAllItem: Life_RscButtonMenu //Store All Items Button
        {
            idc = -1;
            text = "Store All Selected";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] call Life_fnc_vehStoreAllItem;";

            x = 0.515469 * safezoneW + safezoneX;
            y = 0.720 * safezoneH + safezoneY;
            w = 0.132031 * safezoneW;
            h = 0.033 * safezoneH;
        };
        
        //Killerknight's Script End
        
        class TrunkGear: Life_RscListbox //Vehicle Virtual Content
        {
            idc = 3502;
            text = "";
            sizeEx = 0.030;

            x = 0.342187 * safezoneW + safezoneX;
            y = 0.3 * safezoneH + safezoneY;
            w = 0.132031 * safezoneW;
            h = 0.363 * safezoneH;
        };

        class PlayerGear: Life_RscListbox //Player Virtual Content
        {
            idc = 3503;
            text = "";
            sizeEx = 0.030;

            x = 0.515469 * safezoneW + safezoneX;
            y = 0.3     * safezoneH + safezoneY;
            w = 0.132031 * safezoneW;
            h = 0.363 * safezoneH;
        };

        class TrunkEdit: Life_RscEdit //Vehicle Text Box
        {
            idc = 3505;
            text = "1";
            sizeEx = 0.030;

            x = 0.4082025 * safezoneW + safezoneX;
            y = 0.680 * safezoneH + safezoneY;
            w = 0.0660155 * safezoneW;
            h = 0.033 * safezoneH;
        };

        class PlayerEdit: Life_RscEdit //Player Text Box
        {
            idc = 3506;
            text = "1";
            sizeEx = 0.030;
            x = 0.5814845 * safezoneW + safezoneX;
            y = 0.680 * safezoneH + safezoneY;
            w = 0.0660155 * safezoneW;
            h = 0.033 * safezoneH;
        };
    };
};