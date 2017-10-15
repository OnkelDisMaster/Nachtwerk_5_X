#define F(NAME,TARGET) class NAME { \
    allowedTargets = TARGET; \
};

#define ANYONE 0
#define CLIENT 1
#define SERVER 2
#define HC HC_Life

class CfgRemoteExec {
    class Functions {
        mode = 1;
        jip = 0;

        #include "core\cation\cation_remoteExec.cpp"

        /* Client only functions */
        F(life_fnc_addVehicle2Chain,CLIENT)
        F(life_fnc_adminid,CLIENT)
        F(life_fnc_admininfo,CLIENT)
        F(life_fnc_bountyReceive,CLIENT)
        F(life_fnc_copLights,CLIENT)
        F(life_fnc_copSearch,CLIENT)
        F(life_fnc_copSiren,CLIENT)
        F(life_fnc_freezePlayer,CLIENT)
        F(life_fnc_gangCreated,CLIENT)
        F(life_fnc_gangDisbanded,CLIENT)
        F(life_fnc_gangInvite,CLIENT)
        F(life_fnc_garageRefund,CLIENT)
        F(life_fnc_giveDiff,CLIENT)
        F(life_fnc_hideObj,CLIENT)
        F(life_fnc_impoundMenu,CLIENT)
        F(life_fnc_jail,CLIENT)
        F(life_fnc_jailMe,CLIENT)
        F(life_fnc_knockedOut,CLIENT)
        F(life_fnc_licenseCheck,CLIENT)
        F(life_fnc_licensesRead,CLIENT)
        F(life_fnc_lightHouse,CLIENT)
        F(life_fnc_mediclights,CLIENT)
        F(life_fnc_medicRequest,CLIENT)
        F(life_fnc_medicSiren,CLIENT)
        F(life_fnc_moveIn,CLIENT)
        F(life_fnc_pickupItem,CLIENT)
        F(life_fnc_pickupMoney,CLIENT)
        F(life_fnc_receiveItem,CLIENT)
        F(life_fnc_receiveMoney,CLIENT)
        F(life_fnc_removeLicenses,CLIENT)
        F(life_fnc_restrain,CLIENT)
        F(life_fnc_revived,CLIENT)
        F(life_fnc_robPerson,CLIENT)
        F(life_fnc_robReceive,CLIENT)
        F(life_fnc_searchClient,CLIENT)
        F(life_fnc_seizeClient,CLIENT)
        F(life_fnc_soundDevice,CLIENT)
        F(life_fnc_spikeStripEffect,CLIENT)
        F(life_fnc_tazeSound,CLIENT)
        F(life_fnc_ticketPaid,CLIENT)
        F(life_fnc_ticketPrompt,CLIENT)
        F(life_fnc_vehicleAnimate,CLIENT)
        F(life_fnc_wantedList,CLIENT)
        F(life_fnc_wantedGrab,CLIENT)
        F(life_fnc_wireTransfer,CLIENT)
        F(SOCK_fnc_dataQuery,CLIENT)
        F(SOCK_fnc_insertPlayerInfo,CLIENT)
        F(SOCK_fnc_requestReceived,CLIENT)
        F(SOCK_fnc_updateRequest,CLIENT)
        F(TON_fnc_clientGangKick,CLIENT)
        F(TON_fnc_clientGangLeader,CLIENT)
        F(TON_fnc_clientGangLeft,CLIENT)
        F(TON_fnc_clientGetKey,CLIENT)
        F(TON_fnc_clientMessage,CLIENT)
        F(TON_fnc_player_query,CLIENT)
		F(life_fnc_vehicleEmpd,CLIENT)
		F(life_fnc_copSiren2,CLIENT)
		F(life_fnc_vehicleWarned,CLIENT)
		F(life_fnc_AAN,CLIENT)
		F(life_fnc_execJailTimer,CLIENT)
		F(life_fnc_Lizenzsehen,CLIENT)
		F(life_fnc_alkoholdrugtester,CLIENT)
		F(life_fnc_playerSkins,CLIENT)
		F(life_fnc_hitMarker,CLIENT)
		F(life_fnc_bountyHunterReceive,CLIENT)//Bountyhunter
		F(life_fnc_bountyList,CLIENT)//Bountyhunter
		F(life_fnc_markers,CLIENT)//Bountyhunter
		F(life_fnc_bountyBonus,CLIENT)//Bountyhunter



        /* Server only functions */
        F(BIS_fnc_execVM,SERVER)
        F(DB_fnc_insertRequest,SERVER)
        F(DB_fnc_queryRequest,SERVER)
        F(DB_fnc_updatePartial,SERVER)
        F(DB_fnc_updateRequest,SERVER)
        F(life_fnc_jailSys,SERVER)
        F(life_fnc_wantedAdd,SERVER)
        F(life_fnc_wantedBounty,SERVER)
        F(life_fnc_wantedCrimes,SERVER)
        F(life_fnc_wantedFetch,SERVER)
        F(life_fnc_wantedProfUpdate,SERVER)
        F(life_fnc_wantedRemove,SERVER)
        F(TON_fnc_addContainer,SERVER)
        F(TON_fnc_addHouse,SERVER)
        F(TON_fnc_chopShopSell,SERVER)
        F(TON_fnc_cleanupRequest,SERVER)
        F(TON_fnc_deleteDBContainer,SERVER)
        F(TON_fnc_getID,SERVER)
        F(TON_fnc_getVehicles,SERVER)
        F(TON_fnc_insertGang,SERVER)
        F(TON_fnc_keyManagement,SERVER)
        F(TON_fnc_managesc,SERVER)
        F(TON_fnc_pickupAction,SERVER)
        F(TON_fnc_removeGang,SERVER)
        F(TON_fnc_sellHouse,SERVER)
        F(TON_fnc_sellHouseContainer,SERVER)
        F(TON_fnc_setObjVar,SERVER)
        F(TON_fnc_spawnVehicle,SERVER)
        F(TON_fnc_spikeStrip,SERVER)
        F(TON_fnc_updateGang,SERVER)
        F(TON_fnc_updateHouseContainers,SERVER)
        F(TON_fnc_updateHouseTrunk,SERVER)
        F(TON_fnc_vehicleCreate,SERVER)
        F(TON_fnc_vehicleDelete,SERVER)
        F(TON_fnc_vehicleStore,SERVER)
        F(TON_fnc_vehicleUpdate,SERVER)
		F(TON_fnc_playerLogged,SERVER) //DynMarket
		F(TON_fnc_getUpdate,SERVER) //DynMarket
		F(TON_fnc_changePrice, SERVER) //DynMarket
		F(life_fnc_update,CLIENT) //DynMarket
		//F(TON_fnc_clientMessage,SERVER) //SMARTPHONE
		F(life_fnc_smartphone,CLIENT) // SMARTPHONE
		F(TON_fnc_msgRequest,SERVER) // SMARTPHONE
		F(TON_fnc_cleanupMessages,SERVER) // SMARTPHONE
		F(TON_fnc_handleMessages,SERVER) // SMARTPHONE
		F(life_fnc_bountyAdd,SERVER)//Bountyhunter
		F(life_fnc_amountBounty,SERVER)//Bountyhunter
		F(life_fnc_bountyFetch,SERVER)//Bountyhunter
		F(life_fnc_bountyPerson,SERVER)//Bountyhunter
		F(life_fnc_bountyProfUpdate,SERVER)//Bountyhunter
		F(life_fnc_bountyRemove,SERVER)//Bountyhunter
		F(life_fnc_bountyAlter,SERVER)//Bountyhunter
		F(life_fnc_bountyCrimes,SERVER)//Bountyhunter
		F(life_fnc_bountyAmountGather,SERVER)//Bountyhunter


        /* HeadlessClient only functions */
        F(HC_fnc_addContainer,HC)
        F(HC_fnc_addHouse,HC)
        F(HC_fnc_chopShopSell,HC)
        F(HC_fnc_deleteDBContainer,HC)
        F(HC_fnc_getVehicles,HC)
        F(HC_fnc_insertGang,HC)
        F(HC_fnc_insertRequest,HC)
        F(HC_fnc_insertVehicle,HC)
        F(HC_fnc_jailSys,HC)
        F(HC_fnc_keyManagement,HC)
        F(HC_fnc_queryRequest,HC)
        F(HC_fnc_removeGang,HC)
        F(HC_fnc_sellHouse,HC)
        F(HC_fnc_sellHouseContainer,HC)
        F(HC_fnc_spawnVehicle,HC)
        F(HC_fnc_spikeStrip,HC)
        F(HC_fnc_updateGang,HC)
        F(HC_fnc_updateHouseContainers,HC)
        F(HC_fnc_updateHouseTrunk,HC)
        F(HC_fnc_updatePartial,HC)
        F(HC_fnc_updateRequest,HC)
        F(HC_fnc_vehicleCreate,HC)
        F(HC_fnc_vehicleDelete,HC)
        F(HC_fnc_vehicleStore,HC)
        F(HC_fnc_vehicleUpdate,HC)
        F(HC_fnc_wantedAdd,HC)
        F(HC_fnc_wantedBounty,HC)
        F(HC_fnc_wantedCrimes,HC)
        F(HC_fnc_wantedFetch,HC)
        F(HC_fnc_wantedProfUpdate,HC)
        F(HC_fnc_wantedRemove,HC)

        /* Functions for everyone */
        F(BIS_fnc_effectKilledAirDestruction,ANYONE)
        F(BIS_fnc_effectKilledSecondaries,ANYONE)
        F(life_fnc_animSync,ANYONE)
        F(life_fnc_broadcast,ANYONE)
        F(life_fnc_colorVehicle,ANYONE)
        F(life_fnc_corpse,ANYONE)
        F(life_fnc_demoChargeTimer,ANYONE)
        F(life_fnc_flashbang,ANYONE)
        F(life_fnc_jumpFnc,ANYONE)
        F(life_fnc_lockVehicle,ANYONE)
        F(life_fnc_pulloutVeh,ANYONE)
        F(life_fnc_say3D,ANYONE)
        F(life_fnc_setFuel,ANYONE)
        F(life_fnc_simDisable,ANYONE)
		F(bf_fnc_lightsOn,ANYONE)
		F(stig_sz_msg_add,ANYONE)
		F(stig_sz_msg_del,ANYONE)	
    };

    class Commands {
        mode = 1;
        jip = 0;

        F(addHandgunItem,ANYONE)
        F(addMagazine,ANYONE)
        F(addPrimaryWeaponItem,ANYONE)
        F(addWeapon,ANYONE)
        F(setFuel,ANYONE)
    };
};
