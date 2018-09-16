class CfgGather {
    class Resources {
        class apple {
            amount =  (random(4)+1);
            zones[] = { "apple_1", "apple_2", "apple_3", "apple_4" };
            item = ""; 
            zoneSize = 30;
        };

        class peach {
            amount = (random(4)+1);
            zones[] = { "peaches_1", "peaches_2", "peaches_3", "peaches_4" };
            item = ""; 
            zoneSize = 30;
        };
		
		class ananas {
            amount = (random(4)+1);
            zones[] = { "ananas_1", "ananas_2", "ananas_3" };
            item = ""; 
            zoneSize = 30;
        };
		
		class kokosnuss {
            amount = (random(4)+1);
            zones[] = { "kokosnuss_1", "kokosnuss_2", "kokosnuss_3" };
            item = ""; 
            zoneSize = 30;
        };
		
		class bananen {
            amount = (random(4)+1);
            zones[] = { "bananen_1", "bananen_2", "bananen_3" };
            item = ""; 
            zoneSize = 30;
        };

		class bambus {
            amount = (random(5)+1);
            zones[] = { "bambus_1" };
            item = ""; 
            zoneSize = 30;
        };
		
		class tabak {
            amount = (random(3)+1);
            zones[] = { "tabak_1" };
            item = ""; 
            zoneSize = 30;
        };
		
		class schwarzpulver {
            amount = (random(3)+1);
            zones[] = { "schwarzpulver_1" };
            item = ""; 
            zoneSize = 30;
        };
		
		class methu {
            amount = (random(3)+1);
            zones[] = { "meth_1" };
            item = ""; 
            zoneSize = 30;
        };
		
		class korallen {
            amount = (random(2)+1);
            zones[] = { "korallenriff" };
            item = ""; 
            zoneSize = 30;
        };
		
        class heroinu {
            amount = (random(2)+1);
            zones[] = { "heroin_1" };
            item = ""; 
            zoneSize = 30;
        };

        class koksu {
            amount = (random(2)+1);
            zones[] = { "cocaine_1" };
            item = ""; 
            zoneSize = 30;
        };

        class weedu {
            amount = (random(3)+1);
            zones[] = { "weed_1" };
            item = ""; 
            zoneSize = 30;
        };
    };

/*
This block can be set using percent,if you want players to mine only one resource ,just leave it as it is.
Example:
        class copper_unrefined
    {
            amount = 2;
        zones[] = { "copper_mine" };
        item = "pickaxe";
        mined[] = { "copper_unrefined" };
This will make players mine only copper_unrefined
Now let's go deeper
Example 2:
        class copper_unrefined
    {
            amount = 2;
        zones[] = { "copper_mine" };
        item = "pickaxe";
        mined[] = { {"copper_unrefined",0,25},{"iron_unrefined",25,95},{"diamond_uncut",95,100} };
    };
    This will give :
    25(±1)% to copper_unrefined;
    70(±1)% to iron_unrefined;
    5%(±1)% to diamond_uncut;

                                                         ! Watch Out !
 If percents are used,you MUST put more than 1 resource in the mined parameter
 mined[] = { {"copper_unrefined",0,25} }; NOT OK (But the script will work)
 mined[] = { {"copper_unrefined",0,45 },{"iron_unrefined",45} };  NOT OK (The script won't work )
 mined[] = { {"copper_unrefined",0,45},{"copper_unrefined",80,100} }; NOT OK
 mined[] = { "copper_unrefined" }; OK
 mined[] = { {"copper_unrefined",0,35} , { "iron_unrefined" ,35,100 } }; OK
*/

    class Minerals {
         class kupfererz {
            amount = (random(2)+1);
            zones[] = { "copper_mine" };
            item = "pickaxe";
            mined[] = {"kupfererz"};
            zoneSize = 30;
        };

        class eisenerz {
            amount = (random(2)+1);
            zones[] = { "iron_mine" };
            item = "pickaxe";
            mined[] = { "eisenerz" };
            zoneSize = 30;
        };

        class salzu {
            amount = (random(5)+1);
            zones[] = { "salt_mine" };
            item = "pickaxe";
            mined[] = { "salzu" };
            zoneSize = 30;
        };

        class sand {
            amount = (random(5)+1);
            zones[] = { "sand_mine" };
            item = "pickaxe";
            mined[] = { "sand" };
            zoneSize = 30;
        };

        class diamantu {
            amount = (random(3)+1);
            zones[] = { "diamond_mine" };
            item = "pickaxe";
            mined[] = {{ "diamantu",0,85 }, {"lava",85,100}};
            zoneSize = 30;
        };

        class platinerz {
            amount = (random(2)+1);
            zones[] = { "platin_mine" };
            item = "pickaxe";
            mined[] = { "platinerz" };
            zoneSize = 30;
        };

        class oelu {
            amount = (random(2)+1);
            zones[] = { "oil_field_1", "oil_field_2" };
            item = "pickaxe";
            mined[] = { "oelu" };
            zoneSize = 30;
        };
		
		class aluerz {
            amount = (random(2)+1);
            zones[] = { "alu_mine" };
            item = "pickaxe";
            mined[] = { "aluerz" };
            zoneSize = 30;
        };
		
        class metallgrube {
            amount = (random(6)+1);
            zones[] = { "metallgrube" };
            item = "pickaxe";
            mined[] = {{ "eisenerz",0,30 },{ "kupfererz",30,60 },{ "aluerz",60,80 },{ "platinerz",80,99 },{"goldbar",99,100}};
            zoneSize = 30;
        };
        
		class marmorRoh {
            amount = (random(4)+1);
            zones[] = { "marmor_mine" };
            item = "pickaxe";
            mined[] = {{ "marmorRoh",0,80 }, {"lava",80,90}, { "schurfgut",90,100 }};
            zoneSize = 30;
        };
		
		class uranerz {
            amount = (random(2)+1);
            zones[] = { "uran_mine" };
            item = "pickaxe";
            mined[] = { "uranerz" };
            zoneSize = 30;
        };
    };
};