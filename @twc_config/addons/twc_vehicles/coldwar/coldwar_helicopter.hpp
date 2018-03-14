#undef CURRENT_VEHICLE
#define CURRENT_VEHICLE COLDWAR_PUMA_MOD
class TWC_Vehicle_ColdWar_Puma_RAF: CUP_B_SA330_Puma_HC1_BAF {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "Puma (RAF)";
	editorSubcategory = "TWC_ForceType_AirMobility";

	class TransportItems {
		ADD_ITEM(ACE_fieldDressing, ADD_QNTY(SECTION_FIELDDRESSING));
		ADD_ITEM(ACE_elasticBandage, ADD_QNTY(SECTION_ELASTICBANDAGE));
		ADD_ITEM(ACE_quikclot, ADD_QNTY(SECTION_QUIKCLOT));
		ADD_ITEM(ACE_packingBandage, ADD_QNTY(SECTION_PACKINGBANDAGE));
		ADD_ITEM(ACE_tourniquet, ADD_QNTY(SECTION_TOURNIQUET));
		ADD_ITEM(ACE_morphine, ADD_QNTY(SECTION_MORPHINE));
		ADD_ITEM(ACE_epinephrine, ADD_QNTY(SECTION_EPINEPHRINE));
	}; 
	
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_762_20Rnd, ADD_QNTY(COLDWAR_SECTION_RIFLE));
		ADD_MAGA(UK3CB_BAF_762_20Rnd_T, ADD_QNTY(COLDWAR_SECTION_RIFLE_T));
		
		ADD_MAGA(UK3CB_BAF_762_100Rnd, ADD_QNTY(COLDWAR_SECTION_MG));
		ADD_MAGA(UK3CB_BAF_762_100Rnd_T, ADD_QNTY(COLDWAR_SECTION_MG_T));
		
		ADD_MAGA(SmokeShell, ADD_QNTY(SECTION_SMOKE));
	};
	
	class TransportWeapons {
		ADD_WEAP(ukcw_L1A1_law, ADD_QNTY(COLDWAR_SECTION_LAW));
	};

	class TransportBackpacks { };
};

class TWC_Vehicle_ColdWar_Puma_RAF_COIN: CUP_B_SA330_Puma_HC1_BAF {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "Puma - COIN (RAF)";
	editorSubcategory = "TWC_ForceType_AirMobility";

	class TransportItems {
		ADD_ITEM(ACE_fieldDressing, ADD_QNTY(SECTION_FIELDDRESSING));
		ADD_ITEM(ACE_elasticBandage, ADD_QNTY(SECTION_ELASTICBANDAGE));
		ADD_ITEM(ACE_quikclot, ADD_QNTY(SECTION_QUIKCLOT));
		ADD_ITEM(ACE_packingBandage, ADD_QNTY(SECTION_PACKINGBANDAGE));
		ADD_ITEM(ACE_tourniquet, ADD_QNTY(SECTION_TOURNIQUET));
		ADD_ITEM(ACE_morphine, ADD_QNTY(SECTION_MORPHINE));
		ADD_ITEM(ACE_epinephrine, ADD_QNTY(SECTION_EPINEPHRINE));
	}; 
	
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_762_20Rnd, ADD_QNTY(COLDWAR_SECTION_RIFLE));
		ADD_MAGA(UK3CB_BAF_762_20Rnd_T, ADD_QNTY(COLDWAR_SECTION_RIFLE_T));
		
		ADD_MAGA(ukcw_30Rnd_762x51_STANAG, ADD_QNTY(COLDWAR_SECTION_COIN_MG));
		
		ADD_MAGA(SmokeShell, ADD_QNTY(SECTION_SMOKE));
	};
	
	class TransportWeapons {
		ADD_WEAP(ukcw_L1A1_law, ADD_QNTY(COLDWAR_SECTION_LAW));
	};

	class TransportBackpacks { };
};

#undef CURRENT_VEHICLE
#define CURRENT_VEHICLE COLDWAR_CHINOOK_MOD
class ukcw_chinook_hc1;
class TWC_Vehicle_ColdWar_Chinook_RAF: ukcw_chinook_hc1 {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "Chinook (RAF)";
	editorSubcategory = "TWC_ForceType_AirMobility";

	class TransportItems {
		ADD_ITEM(ACE_fieldDressing, ADD_QNTY(SECTION_FIELDDRESSING));
		ADD_ITEM(ACE_elasticBandage, ADD_QNTY(SECTION_ELASTICBANDAGE));
		ADD_ITEM(ACE_quikclot, ADD_QNTY(SECTION_QUIKCLOT));
		ADD_ITEM(ACE_packingBandage, ADD_QNTY(SECTION_PACKINGBANDAGE));
		ADD_ITEM(ACE_tourniquet, ADD_QNTY(SECTION_TOURNIQUET));
		ADD_ITEM(ACE_morphine, ADD_QNTY(SECTION_MORPHINE));
		ADD_ITEM(ACE_epinephrine, ADD_QNTY(SECTION_EPINEPHRINE));
	};
	
	class TransportMagazines { };
	class TransportWeapons { };
	class TransportBackpacks { };
};