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
*       MaterialsReq[] = {{"koks",1},{"heroin",1}};
*       MaterialsGive[] = {{"diamant",1}};
*       Text = "STR_Process_Example";
*       //ScrollText = "Process Example";
*       NoLicenseCost = 4000;
*   };
*/

class ProcessAction {
	class rabbit {
        MaterialsReq[] = {{"rabbit_raw",1}};
        MaterialsGive[] = {{"rabbit",1}};
        Text = "STR_Process_Rabbit";
        //ScrollText = "Process Oil";
        NoLicenseCost = 0;
    };
	
	class hen {
        MaterialsReq[] = {{"hen_raw",1}};
        MaterialsGive[] = {{"hen",1}};
        Text = "STR_Process_Hen";
        //ScrollText = "Process Oil";
        NoLicenseCost = 0;
    };
	
	class rooster {
        MaterialsReq[] = {{"rooster_raw",1}};
        MaterialsGive[] = {{"rooster",1}};
        Text = "STR_Process_Rooster";
        //ScrollText = "Process Oil";
        NoLicenseCost = 0;
    };
	
	class sheep {
        MaterialsReq[] = {{"sheep_raw",1}};
        MaterialsGive[] = {{"sheep",1}};
        Text = "STR_Process_Sheep";
        //ScrollText = "Process Oil";
        NoLicenseCost = 0;
    };
	
	class goat {
        MaterialsReq[] = {{"goat_raw",1}};
        MaterialsGive[] = {{"goat",1}};
        Text = "STR_Process_Goat";
        //ScrollText = "Process Oil";
        NoLicenseCost = 0;
    };
	
    class oel {
        MaterialsReq[] = {{"oelu",1}};
        MaterialsGive[] = {{"oel",1}};
        Text = "STR_Process_oel";
        //ScrollText = "Process Oil";
        NoLicenseCost = 8500;
    };

    class dia {
        MaterialsReq[] = {{"diamantu",1}};
        MaterialsGive[] = {{"diamant",1}};
        Text = "STR_Process_Dia";
        //ScrollText = "Cut Diamonds";
        NoLicenseCost = 14000;
    };

    class hero {
        MaterialsReq[] = {{"heroinu",1}};
        MaterialsGive[] = {{"heroin",1}};
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
        //ScrollText = "Harvest weed";
        NoLicenseCost = 5500;
    };
	
	class alu {
        MaterialsReq[] = {{"aluerz",1}};
        MaterialsGive[] = {{"alu",1}};
        Text = "STR_Process_alu";
        //ScrollText = "Harvest weed";
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
        MaterialsReq[] = {{"salzu",1}};
        MaterialsGive[] = {{"salz",1}};
        Text = "STR_Process_Salz";
        //ScrollText = "Refine Salt";
        NoLicenseCost = 2800;
    };

    class koks {
        MaterialsReq[] = {{"koksu",1}};
        MaterialsGive[] = {{"koks",1}};
        Text = "STR_Process_koks";
        //ScrollText = "Process Cocaine";
        NoLicenseCost = 21500;
    };

    class weed {
        MaterialsReq[] = {{"weedu",1}};
        MaterialsGive[] = {{"weed",1}};
        Text = "STR_Process_weed";
        //ScrollText = "Harvest weed";
        NoLicenseCost = 4800;
    };

	class marmor {
        MaterialsReq[] = {{"marmorRoh",1}};
        MaterialsGive[] = {{"marmor",1}};
        Text = "STR_Process_marmor";
        //ScrollText = "Harvest weed";
        NoLicenseCost = 6500;
    };
	
	class obsidian {
        MaterialsReq[] = {{"lava",1}};
        MaterialsGive[] = {{"obsidian",1}};
        Text = "STR_Process_obsidian";
        //ScrollText = "Harvest weed";
        NoLicenseCost = 7500;
	};
	
	class diesel {
        MaterialsReq[] = {{"oel",2}};
        MaterialsGive[] = {{"diesel",1}};
        Text = "STR_Process_diesel";
        //ScrollText = "Harvest weed";
        NoLicenseCost = 12000;
	};
	
	class bambus {
        MaterialsReq[] = {{"bambus",1}};
        MaterialsGive[] = {{"bambusleitung",1}};
        Text = "STR_Process_bambus";
        //ScrollText = "Harvest weed";
        NoLicenseCost = 3800;
	};
	
	class juwelen {
        MaterialsReq[] = {{"schurfgut",1}};
        MaterialsGive[] = {{"juwelen",1}};
        Text = "STR_Process_juwelen";
        //ScrollText = "Harvest weed";
        NoLicenseCost = 18000;
	};
	
	class tabak {
        MaterialsReq[] = {{"tabak",1}};
        MaterialsGive[] = {{"zigaretten",1}};
        Text = "STR_Process_tabak";
        //ScrollText = "Harvest weed";
        NoLicenseCost = 2800;
	};
	
	class polenboeller {
        MaterialsReq[] = {{"schwarzpulver",1}};
        MaterialsGive[] = {{"polenboeller",1}};
        Text = "STR_Process_boeller";
        //ScrollText = "Harvest weed";
        NoLicenseCost = 5800;
	};
	
	class meth {
        MaterialsReq[] = {{"methu",1}};
        MaterialsGive[] = {{"meth",1}};
        Text = "STR_Process_meth";
        //ScrollText = "Harvest weed";
        NoLicenseCost = 6800;
	};
	
	class korallen {
        MaterialsReq[] = {{"korallen",1}};
        MaterialsGive[] = {{"korallenketten",1}};
        Text = "STR_Process_korallen";
        //ScrollText = "Harvest weed";
        NoLicenseCost = 15500;
	};
	
	class uranI {
        MaterialsReq[] = {{"uranerz",1}};
        MaterialsGive[] = {{"uranI",1}};
        Text = "STR_Process_uranerz";
        //ScrollText = "Harvest weed";
        NoLicenseCost = 42000;
	};
	
	class uranII {
        MaterialsReq[] = {{"uranI",1}};
        MaterialsGive[] = {{"uranII",1}};
        Text = "STR_Process_uranI";
        //ScrollText = "Harvest weed";
        NoLicenseCost = 42000;
	};
	
	class uranIII {
        MaterialsReq[] = {{"uranII",1}};
        MaterialsGive[] = {{"uranIII",1}};
        Text = "STR_Process_uranII";
        //ScrollText = "Harvest weed";
        NoLicenseCost = 0;
	};
	
	class uranIV {
        MaterialsReq[] = {{"uranIII",1}};
        MaterialsGive[] = {{"uranIV",1}};
        Text = "STR_Process_uranIII";
        //ScrollText = "Harvest weed";
        NoLicenseCost = 0;
	};
	
	class plutonium {
        MaterialsReq[] = {{"uranIV",1}};
        MaterialsGive[] = {{"plutonium",1}};
        Text = "STR_Process_plutonium";
        //ScrollText = "Harvest weed";
        NoLicenseCost = 12000;
	};
	
	class brennstab {
        MaterialsReq[] = {{"plutonium",1}};
        MaterialsGive[] = {{"brennstab",1}};
        Text = "STR_Process_brennstab";
        //ScrollText = "Harvest weed";
        NoLicenseCost = 20000;
	};
	
	class implantat {
        MaterialsReq[] = {{"mikroProzessor",10}};
        MaterialsGive[] = {{"implantatNormal",1}};
        Text = "STR_Process_implantat";
        //ScrollText = "Harvest weed";
        NoLicenseCost = 127500;
	};
	
	class asaft {
        MaterialsReq[] = {{"apple",1}};
        MaterialsGive[] = {{"apfelsaft",1}};
        Text = "STR_Item_Apfelsaft";
        //ScrollText = "Harvest weed";
        NoLicenseCost = 0;
	};
	
	class psaft {
        MaterialsReq[] = {{"peach",1}};
        MaterialsGive[] = {{"pfirsichsaft",1}};
        Text = "STR_Item_Pfirsichsaft";
        //ScrollText = "Harvest weed";
        NoLicenseCost = 0;
	};
	
	class ansaft {
        MaterialsReq[] = {{"ananas",1}};
        MaterialsGive[] = {{"ananassaft",1}};
        Text = "STR_Item_Ananassaft";
        //ScrollText = "Harvest weed";
        NoLicenseCost = 0;
	};
	
	class bsaft {
        MaterialsReq[] = {{"bananen",1}};
        MaterialsGive[] = {{"bananensaft",1}};
        Text = "STR_Item_Bananensaft";
        //ScrollText = "Harvest weed";
        NoLicenseCost = 0;
	};
	
	class kosaft {
        MaterialsReq[] = {{"kokosnuss",1}};
        MaterialsGive[] = {{"kokosnussMilch",1}};
        Text = "STR_Item_Kokosnussmilch";
        //ScrollText = "Harvest weed";
        NoLicenseCost = 0;
	};
	
	class pcsaft {
        MaterialsReq[] = {{"ananassaft",1},{"kokosnussMilch",1}};
        MaterialsGive[] = {{"pina_colada",1}};
        Text = "STR_Process_pina";
        //ScrollText = "Harvest weed";
        NoLicenseCost = 200;
	};
};
 