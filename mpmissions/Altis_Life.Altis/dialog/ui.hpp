// Control types
#define CT_STATIC	0
// Static styles
#define ST_PICTURE	48

class playerHUD
{
    idd = -1;
    duration = 10e10;
    movingEnable = 0;
    fadein = 0;
    fadeout = 0;
    name = "playerHUD";
    onLoad = "uiNamespace setVariable ['playerHUD',_this select 0]";
    objects[] = {};
    controls[] = {
        BG2,
        ProgressBar_FOOD,
        ProgressBar_THIRST,
        Text_FOOD,
        Text_THIRST,
    };


    class BG2: Life_RscPicture
    {
        idc = 4466;
        shadow = 0;
        type = CT_STATIC;
        style = ST_PICTURE;
        text = "..\images\ui\ui_secbg_pfa.paa";
        x = 0.90504 * safezoneW + safezoneX;
        y = 0.881 * safezoneH + safezoneY;
        w = 0.10001 * safezoneW;
        //h = 0.396 * safezoneH;
    };


    class Text_FOOD : Life_RscStructuredText
    {
        idc = 4452;
        size = 0.019 * safeZoneH;
        text = "$STR_HUD_Food"; //--- ToDo: Localize;
        x = 0.906 * safezoneW + safezoneX;
        y = 0.899 * safezoneH + safezoneY;
        w = 0.0300029 * safezoneW;
        h = 0.022 * safezoneH;
    };

    class Text_THIRST: Life_RscStructuredText
    {
        idc = 4453;
        size = 0.019 * safeZoneH;
        text = "$STR_HUD_Water"; //--- ToDo: Localize;
        x = 0.906 * safezoneW + safezoneX;
        y = 0.925  * safezoneH + safezoneY;
        w = 0.0300029 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class ProgressBar_FOOD: Life_RscProgress
    {
        idc = 4459;
        colorFrame[] = {0, 0, 0, 0};
        x = 0.948 * safezoneW + safezoneX;
        y = 0.905 * safezoneH + safezoneY;
        w = 0.0534431 * safezoneW;
        h = 0.011 * safezoneH;
        colorBackground[] = {1,1,1,0};
    };

    class ProgressBar_THIRST: ProgressBar_FOOD
    {
        idc = 4460;
        x = 0.948 * safezoneW + safezoneX;
        y = 0.931 * safezoneH + safezoneY;
        w = 0.0534431 * safezoneW;
        h = 0.011 * safezoneH;
        colorBackground[] = {1,1,1,0};
    };

    class WATERMARK: Life_RscPicture
    {
        idc = 4467;
        text = ""; //leer ; Pfad für Wasserzeichen
        x = -4.90237e-005 * safezoneW + safezoneX;
        y = 0.752 * safezoneH + safezoneY;
        w = 0.110011 * safezoneW;
        h = 0.187 * safezoneH;
    };
};