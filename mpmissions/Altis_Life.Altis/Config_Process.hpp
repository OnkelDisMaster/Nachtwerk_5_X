/*
*   class:
*       MaterialsReq (Needed to process) = Array - Format -> {{"ITEM CLASS",HOWMANY}}
*       MaterialsGive (Returned items) = Array - Format -> {{"ITEM CLASS",HOWMANY}}
*       Text (Progess Bar Text) = Localised String
*       NoLicenseCost (Cost to process w/o license) = Scalar
*
*   Example for multiprocess:
*
*   class Example {
*       MaterialsReq[] = {{"cocaine_processed",1},{"heroin_processed",1}};
*       MaterialsGive[] = {{"diamond_cut",1}};
*       Text = "STR_Process_Example";
*       //ScrollText = "Process Example";
*       NoLicenseCost = 4000;
*   };
*/

class ProcessAction {
    class oel {
        MaterialsReq[] = {{"oelu",1}};
        MaterialsGive[] = {{"oel",1}};
        Text = "STR_Process_oel";
        //ScrollText = "Process Oil";
        NoLicenseCost = 8500;
    };

    class dia {
        MaterialsReq[] = {{"diamond_uncut",1}};
        MaterialsGive[] = {{"diamond_cut",1}};
        Text = "STR_Process_Dia";
        //ScrollText = "Cut Diamonds";
        NoLicenseCost = 14000;
    };

    class hero {
        MaterialsReq[] = {{"heroin_unprocessed",1}};
        MaterialsGive[] = {{"heroin_processed",1}};
        Text = "STR_Process_hero";
        //ScrollText = "Process Heroin";
        NoLicenseCost = 8800;
    };

    class kupfer {
        MaterialsReq[] = {{"kupfererz",1}};
        MaterialsGive[] = {{"kupfer",1}};
        Text = "STR_Process_Kupfererz";
        //ScrollText = "Refine Copper";
        NoLicenseCost = 1500;
    };

    class eisen {
        MaterialsReq[] = {{"eisenerz",1}};
        MaterialsGive[] = {{"eisen",1}};
        Text = "STR_Process_Eisenerz";
        //ScrollText = "Refine Iron";
        NoLicenseCost = 2500;
    };

	class platin {
        MaterialsReq[] = {{"platinerz",1}};
        MaterialsGive[] = {{"platin",1}};
        Text = "STR_Process_platin";
        //ScrollText = "Harvest Marijuana";
        NoLicenseCost = 5500;
    };
	
	class alu {
        MaterialsReq[] = {{"aluerz",1}};
        MaterialsGive[] = {{"alu",1}};
        Text = "STR_Process_alu";
        //ScrollText = "Harvest Marijuana";
        NoLicenseCost = 4500;
    };
	
    class glas {
        MaterialsReq[] = {{"sand",1}};
        MaterialsGive[] = {{"glass",1}};
        Text = "STR_Process_glas";
        //ScrollText = "Melt Sand into Glass";
        NoLicenseCost = 1800;
    };

    class salz {
        MaterialsReq[] = {{"salt_unrefined",1}};
        MaterialsGive[] = {{"salt_refined",1}};
        Text = "STR_Process_Salz";
        //ScrollText = "Refine Salt";
        NoLicenseCost = 2800;
    };

    class koks {
        MaterialsReq[] = {{"cocaine_unprocessed",1}};
        MaterialsGive[] = {{"cocaine_processed",1}};
        Text = "STR_Process_koks";
        //ScrollText = "Process Cocaine";
        NoLicenseCost = 21500;
    };

    class weed {
        MaterialsReq[] = {{"cannabis",1}};
        MaterialsGive[] = {{"marijuana",1}};
        Text = "STR_Process_weed";
        //ScrollText = "Harvest Marijuana";
        NoLicenseCost = 4800;
    };

	class marmor {
        MaterialsReq[] = {{"marmorRoh",1}};
        MaterialsGive[] = {{"marmor",1}};
        Text = "STR_Process_marmor";
        //ScrollText = "Harvest Marijuana";
        NoLicenseCost = 6500;
    };
	
	class obsidian {
        MaterialsReq[] = {{"lava",1}};
        MaterialsGive[] = {{"obsidian",1}};
        Text = "STR_Process_obsidian";
        //ScrollText = "Harvest Marijuana";
        NoLicenseCost = 7500;
	};
	
	class diesel {
        MaterialsReq[] = {{"oilProcessed",1}};
        MaterialsGive[] = {{"diesel",1}};
        Text = "STR_Process_diesel";
        //ScrollText = "Harvest Marijuana";
        NoLicenseCost = 12000;
	};
	
	class bambus {
        MaterialsReq[] = {{"bambus",1}};
        MaterialsGive[] = {{"bambusleitung",1}};
        Text = "STR_Process_bambus";
        //ScrollText = "Harvest Marijuana";
        NoLicenseCost = 3800;
	};
	
	class juwelen {
        MaterialsReq[] = {{"schurfgut",1}};
        MaterialsGive[] = {{"juwelen",1}};
        Text = "STR_Process_juwelen";
        //ScrollText = "Harvest Marijuana";
        NoLicenseCost = 18000;
	};
	
	class krone {
		MaterialsReq[] = {{"platin",1},{"diamondCut",1}};
		MaterialsGive[] = {{"krone",1}};
		Text = "STR_Process_kronen";
		NoLicenseCost = 28000;
	};
	
	class tabak {
        MaterialsReq[] = {{"tabak",1}};
        MaterialsGive[] = {{"zigaretten",1}};
        Text = "STR_Process_tabak";
        //ScrollText = "Harvest Marijuana";
        NoLicenseCost = 2800;
	};
	
	class polenboeller {
        MaterialsReq[] = {{"schwarzpulver",1}};
        MaterialsGive[] = {{"polenboeller",1}};
        Text = "STR_Process_boeller";
        //ScrollText = "Harvest Marijuana";
        NoLicenseCost = 5800;
	};
	
	class meth {
        MaterialsReq[] = {{"methUnprocessed",1}};
        MaterialsGive[] = {{"methProcessed",1}};
        Text = "STR_Process_meth";
        //ScrollText = "Harvest Marijuana";
        NoLicenseCost = 6800;
	};
	
	class korallen {
        MaterialsReq[] = {{"korallen",1}};
        MaterialsGive[] = {{"korallenketten",1}};
        Text = "STR_Process_korallen";
        //ScrollText = "Harvest Marijuana";
        NoLicenseCost = 15500;
	};
	
	class uranI {
        MaterialsReq[] = {{"uranerz",1}};
        MaterialsGive[] = {{"uranI",1}};
        Text = "STR_Process_uranerz";
        //ScrollText = "Harvest Marijuana";
        NoLicenseCost = 42000;
	};
	
	class uranII {
        MaterialsReq[] = {{"uranI",1}};
        MaterialsGive[] = {{"uranII",1}};
        Text = "STR_Process_uranI";
        //ScrollText = "Harvest Marijuana";
        NoLicenseCost = 42000;
	};
	
	class uranIII {
        MaterialsReq[] = {{"uranII",1}};
        MaterialsGive[] = {{"uranIII",1}};
        Text = "STR_Process_uranII";
        //ScrollText = "Harvest Marijuana";
        NoLicenseCost = 42000;
	};
	
	class uranIV {
        MaterialsReq[] = {{"uranIII",1}};
        MaterialsGive[] = {{"uranIV",1}};
        Text = "STR_Process_uranIII";
        //ScrollText = "Harvest Marijuana";
        NoLicenseCost = 42000;
	};
	
	class plutonium {
        MaterialsReq[] = {{"uranIV",1}};
        MaterialsGive[] = {{"plutonium",1}};
        Text = "STR_Process_plutonium";
        //ScrollText = "Harvest Marijuana";
        NoLicenseCost = 12000;
	};
	
	class brennstab {
        MaterialsReq[] = {{"plutonium",5}};
        MaterialsGive[] = {{"brennstab",1}};
        Text = "STR_Process_brennstab";
        //ScrollText = "Harvest Marijuana";
        NoLicenseCost = 20000;
	};
	
	class bombe {
        MaterialsReq[] = {{"aluBarren",8},{"ironRefined",8}};
        MaterialsGive[] = {{"bombenkopf",1}};
        Text = "STR_Process_bombe";
        //ScrollText = "Harvest Marijuana";
        NoLicenseCost = 26500;
	};
	
	class abombe {
        MaterialsReq[] = {{"bombenkopf",1},{"plutonium",20}};
        MaterialsGive[] = {{"atombombe",1}};
        Text = "STR_Process_abombe";
        //ScrollText = "Harvest Marijuana";
        NoLicenseCost = 127500;
	};
	
	class mikroprozessor {
		MaterialsReq[] = {{"platinBarren",1},{"aluBarren",1},{"kupfer",1}};
		MaterialsGive[] = {{"mikroProzessor",1}};
		Text = "STR_Process_Mikro_Prozessor";
		//ScrollText = "Harvest Marijuana";
		NoLicenseCost = 127500;
	};
	
	class implantat {
        MaterialsReq[] = {{"mikroProzessor",10}};
        MaterialsGive[] = {{"implantatNormal",1}};
        Text = "STR_Process_implantat";
        //ScrollText = "Harvest Marijuana";
        NoLicenseCost = 127500;
	};
	
	class asaft {
        MaterialsReq[] = {{"apple",1}};
        MaterialsGive[] = {{"apfelsaft",1}};
        Text = "STR_Item_Apfelsaft";
        //ScrollText = "Harvest Marijuana";
        NoLicenseCost = 0;
	};
	
	class psaft {
        MaterialsReq[] = {{"peach",1}};
        MaterialsGive[] = {{"pfirsichsaft",1}};
        Text = "STR_Item_Pfirsichsaft";
        //ScrollText = "Harvest Marijuana";
        NoLicenseCost = 0;
	};
	
	class ansaft {
        MaterialsReq[] = {{"ananas",1}};
        MaterialsGive[] = {{"ananassaft",1}};
        Text = "STR_Item_Ananassaft";
        //ScrollText = "Harvest Marijuana";
        NoLicenseCost = 0;
	};
	
	class bsaft {
        MaterialsReq[] = {{"bananen",1}};
        MaterialsGive[] = {{"bananensaft",1}};
        Text = "STR_Item_Bananensaft";
        //ScrollText = "Harvest Marijuana";
        NoLicenseCost = 0;
	};
	
	class kosaft {
        MaterialsReq[] = {{"kokosnuss",1}};
        MaterialsGive[] = {{"kokosnussMilch",1}};
        Text = "STR_Item_Kokosnussmilch";
        //ScrollText = "Harvest Marijuana";
        NoLicenseCost = 0;
	};
	
	class pcsaft {
        MaterialsReq[] = {{"ananassaft",1},{"kokosnussMilch",1}};
        MaterialsGive[] = {{"pina_colada",1}};
        Text = "STR_Process_pina";
        //ScrollText = "Harvest Marijuana";
        NoLicenseCost = 200;
	};
};
 