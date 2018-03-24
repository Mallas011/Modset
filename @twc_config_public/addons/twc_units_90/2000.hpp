	class 2000_British_Base: B_Soldier_base_F
	{
		scope=1;
		displayName="Base (00's Woodland)";
		faction="twc_public_baf";
		editorSubcategory = "Men_2000W";
		vehicleClass="Men_2000W";
		icon="iconMan";
		nakedUniform="U_BasicBody";
		uniformClass="UK3CB_BAF_U_CombatUniform_DPMW";
		linkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_DPMW2",
			"UK3CB_BAF_H_Mk6_DPMW_C",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_DPMW2",
			"UK3CB_BAF_H_Mk6_DPMW_C",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		Items[]=
		{
			"ACE_EarPlugs",
			"ACE_fieldDressing",
			"ACRE_PRC343",	
			"rhsusf_ANPVS_14",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_morphine",
			"ACE_epinephrine",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_MapTools"
		};
		respawnitems[]=
		{
			"ACE_EarPlugs",
			"ACE_fieldDressing",
			"ACRE_PRC343",	
			"rhsusf_ANPVS_14",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_morphine",
			"ACE_epinephrine",
			"ACE_tourniquet",
			"ACE_tourniquet"
		};		
	};
	class 2000_British_SectionCommander: 2000_British_Base
	{
		scope=2;
		displayName="Section Leader (00's Woodland)";
		icon="iconManLeader";
		backpack="TWC_Backpack_2000_Sectionlead";
		weapons[]=
		{
			"Throw",
			"Put",
			"Binocular",
			"UK3CB_BAF_L85A2_SUSAT",
			"twc_browning_hp"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"Binocular",
			"UK3CB_BAF_L85A2_SUSAT",
			"twc_browning_hp"
		};
		magazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell"
		};
	};
	class 2000_British_Rifleman: 2000_British_Base
	{
		scope=2;
		displayName="RifleMan(00's Woodland)";
		backpack="TWC_Backpack_2000_Rifleman";
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A2_SUSAT"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A2_SUSAT"
		};
		magazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell"
		};	
	};
	class 2000_British_Grenadier: 2000_British_Base
	{
		scope=2;
		displayName="Grenadier (00's Woodland)";
		backpack="";
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A2_UGL_SUSAT"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A2_UGL_SUSAT"
		};
		magazines[]=
		{
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell"
		};	
	};
	class 2000_British_Gunner: 2000_British_Base
	{
		scope=2;
		displayName="Autorifleman (00's Woodland)";
		icon="iconManMG";
		backpack="TWC_Backpack_1990_Minimi";
		weapons[]=
		{
		"Throw",
		"Put",
		"UK3CB_BAF_L110A1"
		};
		respawnweapons[]=
		{
		"Throw",
		"Put",
		"UK3CB_BAF_L110A1"
		};
						magazines[]=
		{
		"UK3CB_BAF_556_200Rnd_T",
		"UK3CB_BAF_556_200Rnd_T",
		"SmokeShell",
		"CUP_HandGrenade_L109A2_HE"
		};
		Respawnmagazines[]=
		{
		"UK3CB_BAF_556_200Rnd_T",
		"UK3CB_BAF_556_200Rnd_T",
		"SmokeShell",
		"CUP_HandGrenade_L109A2_HE"
		};
	};
	class 2000_British_2IC: 2000_British_Rifleman
	{
		displayName="2IC (00's Woodland)";
		backpack="TWC_Backpack_2000_2IC";
	};
	
			class 2000_British_MachineGunner: 2000_British_Gunner
	{
		displayName="GPMG Gunner (00's Woodland)";
		backpack="TWC_Backpack_2000_machineGunner";
				weapons[]=
		{
		"Throw",
		"Put",
		"UK3CB_BAF_L7A2"
		};
		respawnweapons[]=
		{
		"Throw",
		"Put",
		"UK3CB_BAF_L7A2"
		};
				magazines[]=
		{
		"UK3CB_BAF_762_200Rnd",
		"UK3CB_BAF_762_200Rnd",
		"SmokeShell"
		};
		Respawnmagazines[]=
		{
		"UK3CB_BAF_762_200Rnd",
		"UK3CB_BAF_762_200Rnd",
		"SmokeShell"
		};
	};
	
		class 2000_British_mg_assistant: 2000_British_Rifleman
	{
		displayName="GPMG Assistant (00's Woodland)";
		backpack="TWC_Backpack_2000_machineGunner";
	};
	

	class 2000_British_Medic: 2000_British_Base
	{
		scope=2;
		displayName="Medic (00's Woodland)";
		backpack="TWC_Backpack_2000_Medic";
		attendant = 1;
		weapons[]=
		{
			"Throw",
			"Put",
			"UK3CB_BAF_L85A2_SUSAT",
			"twc_browning_hp"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"UK3CB_BAF_L85A2_SUSAT",
			"twc_browning_hp"
		};
		magazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"SmokeShell",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
		class EventHandlers: EventHandlers
		{
			init = "init = if(local (_this select 0))then{(_this select 0) setVariable [""ace_medical_medicClass"",1]};";
		};
	};
	class 2000_British_HeliPilot: 2000_British_Base
	{
		scope=2;
		displayName="Helicopter Pilot (00's Woodland)";
		backpack="TWC_Backpack_USMC_vehiclecommander";
		linkedItems[]=
		{
			"UK3CB_BAF_H_PilotHelmetHeli_A",
			"UK3CB_BAF_V_Pilot_DPMT",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_H_PilotHelmetHeli_A",
			"UK3CB_BAF_V_Pilot_DPMT",
			"ItemMap",		
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"twc_browning_hp"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"twc_browning_hp"
		};
		magazines[]=
		{
			"SmokeShell",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"SmokeShell",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"SmokeShell"

		};
	};
	class 2000_British_JetPilot: 2000_British_HeliPilot
	{
		displayName="Jet Pilot (00's Woodland)";
		uniformClass="UK3CB_BAF_U_HeliPilotCoveralls_RAF";
		backpack="B_AssaultPack_blk";
		linkedItems[]=
		{
			"UK3CB_BAF_H_PilotHelmetHeli_A",
			"CUP_V_B_PilotVest",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_H_PilotHelmetHeli_A",
			"CUP_V_B_PilotVest",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};	
		weapons[]=
		{
			"Throw",
			"Put",
			"twc_browning_hp"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"twc_browning_hp"
		};
		magazines[]=
		{
			"SmokeShell",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"SmokeShell",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"SmokeShell"
		};
	};
		class 2000_British_FSTCommander: 2000_British_Base 
	{
		scope=2;
		displayName="FST Commander (00's Woodland)@Fire Support Team";
		icon="iconManLeader";
		uniformClass="UK3CB_BAF_U_CombatUniform_DPMW";
		backpack="TWC_Backpack_2000_Sectionlead";
		linkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_DPMW3",
			"UK3CB_BAF_H_Mk6_DPMW_C",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_DPMW3",
			"UK3CB_BAF_H_Mk6_DPMW_C",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"Binocular",
			"UK3CB_BAF_L85A2_SUSAT",
			"twc_browning_hp"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"Binocular",
			"UK3CB_BAF_L85A2_SUSAT",
			"twc_browning_hp"
		};
		magazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"B_IR_Grenade"
		};
	};

	class 2000_British_FSTForwardObserver: 2000_British_Base
	{
		scope=2;
		displayName="FST Forward Observer (00's Woodland)";
		icon="iconManExplosive";
		uniformClass="UK3CB_BAF_U_CombatUniform_DPMW";
		backpack="UK3CB_BAF_B_Bergen_DPMW_Rifleman_B";
		linkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_DPMW2",
			"UK3CB_BAF_H_Mk6_DPMW_C",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_DPMW2",
			"UK3CB_BAF_H_Mk6_DPMW_C",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"CUP_SOFLAM",
			"UK3CB_BAF_L85A2_SUSAT"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"CUP_SOFLAM",
			"UK3CB_BAF_L85A2_SUSAT"
		};
		magazines[]=
		{
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell",
			"Laserbatteries"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell",
			"Laserbatteries"
		};
	};

	class 2000_British_FSTAssistant: 2000_British_Base 
	{
		scope=2;
		displayName="FST Assistant (00's Woodland)";
		uniformClass="UK3CB_BAF_U_CombatUniform_DPMW";
		backpack="UK3CB_BAF_B_Carryall_DPMW";
		
		linkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_DPMW2",
			"UK3CB_BAF_H_Mk6_DPMW_C",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_DPMW2",
			"UK3CB_BAF_H_Mk6_DPMW_C",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"UK3CB_BAF_L85A2_SUSAT"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A2_SUSAT"
		};
		magazines[]=
		{
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell"
		};
	};
		
//////////////////////////////  Mounted  //////////////////////////////
	class 2000_British_Vehicle_Commander: 2000_British_Base
	{
		displayName="Vehicle Commander (00's Woodland)";
		scope=2;
		uniformClass="CUP_U_B_USArmy_Soft";
		backpack="TWC_Backpack_2000_vehicle";
		linkedItems[]=
		{
			"rhsusf_iotv_ucp_Repair",
			"UK3CB_BAF_H_CrewHelmet_B",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"rhsusf_iotv_ucp_Repair",
			"UK3CB_BAF_H_CrewHelmet_B",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"rhs_weap_m4",
			"Put"
		};
		respawnweapons[]=
		{
			"Throw",
			"rhs_weap_m4",
			"Put"
		};
		magazines[]=
		{
			"SmokeShell",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"SmokeShell",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"SmokeShell"
		};
	};
    class 2000_British_Vehicle_Crew: 2000_British_Vehicle_Commander
	{
		displayName="Vehicle Crew (00's Woodland)";
		backpack="";
	};
//////////////////////////////////////////////////////////////////
//                                                              //
//                    2000 Desert British                       //
//                                                              //
//////////////////////////////////////////////////////////////////

	class 2000_British_SectionCommander_Desert: 2000_British_SectionCommander
	{
		displayName="Section Leader (00's Desert)";
		editorSubcategory = "Men_2000D";
		vehicleClass="Men_2000D";
		uniformClass="UK3CB_BAF_U_CombatUniform_DDPM_ShortSleeve";
		backpack="TWC_Backpack_1990_Sectionlead_Desert";
		linkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_DDPM2",
			"UK3CB_BAF_H_Mk6_DDPM_C",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_DDPM2",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
				weapons[]=
		{
			"Throw",
			"Put",
			"Binocular",
			"UK3CB_BAF_L85A2_SUSAT",
			"twc_browning_hp"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"Binocular",
			"UK3CB_BAF_L85A2_SUSAT",
			"twc_browning_hp"
		};
		magazines[]=
		{
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"CUP_15Rnd_9x19_M9",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell"
		};		
	};
	class 2000_British_Rifleman_Desert: 2000_British_Rifleman
	{
		displayName="RifleMan (00's Desert)";
		editorSubcategory = "Men_2000D";
		vehicleClass="Men_2000D";
		uniformClass="UK3CB_BAF_U_CombatUniform_DDPM_ShortSleeve";
		backpack="";
		linkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_DDPM2",
			"UK3CB_BAF_H_Mk6_DDPM_C",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_DDPM2",
			"UK3CB_BAF_H_Mk6_DDPM_C",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 2000_British_Grenadier_Desert: 2000_British_Grenadier
	{
		displayName="Grenadier (00's Desert)";
		editorSubcategory = "Men_2000D";
		vehicleClass="Men_2000D";
		uniformClass="UK3CB_BAF_U_CombatUniform_DDPM_ShortSleeve";
		backpack="";
						weapons[]=
		{
		"Throw",
		"UK3CB_BAF_L85A2_UGL_SUSAT",
		"Put"
		};
				respawnweapons[]=
		{
		"Throw",
		"UK3CB_BAF_L85A2_UGL_SUSAT",
		"Put"
		};
		linkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_DDPM3",
			"UK3CB_BAF_H_Mk6_DDPM_C",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_DDPM3",
			"UK3CB_BAF_H_Mk6_DDPM_C",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 2000_British_Gunner_Desert: 2000_British_Gunner
	{
		displayName="Autorifleman (00's Desert)";
		editorSubcategory = "Men_2000D";
		vehicleClass="Men_2000D";
		uniformClass="UK3CB_BAF_U_CombatUniform_DDPM_ShortSleeve";
		backpack="TWC_Backpack_2000_Minimi_D";
		linkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_DDPM2",
			"UK3CB_BAF_H_Mk6_DDPM_C",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_DDPM2",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 2000_British_2IC_Desert: 2000_British_2IC
	{
		displayName="2IC (00's Desert)";
		editorSubcategory = "Men_2000D";
		vehicleClass="Men_2000D";
		uniformClass="UK3CB_BAF_U_CombatUniform_DDPM_ShortSleeve";
		backpack="TWC_Backpack_2000_2IC_Desert";
		linkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_DDPM2",
			"UK3CB_BAF_H_Mk6_DDPM_C",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_DDPM2",
			"UK3CB_BAF_H_Mk6_DDPM_C",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 2000_British_Medic_Desert: 2000_British_Medic
	{
		displayName="Medic (00's Desert)";
		editorSubcategory = "Men_2000D";
		vehicleClass="Men_2000D";
		uniformClass="UK3CB_BAF_U_CombatUniform_DDPM_ShortSleeve";
		attendant = 1;
		backpack="TWC_Backpack_1990_Medic_Desert";
				weapons[]=
		{
		"Throw",
		"UK3CB_BAF_L85A2_SUSAT",
		"Put"
		};
				respawnweapons[]=
		{
		"Throw",
		"UK3CB_BAF_L85A2_SUSAT",
		"Put"
		};
		linkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_DDPM2",
			"UK3CB_BAF_H_Mk6_DDPM_C",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_DDPM2",
			"UK3CB_BAF_H_Mk6_DDPM_C",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
				magazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"SmokeShell",
			"SmokeShell"
		};
		class EventHandlers: EventHandlers
		{
			init = "init = if(local (_this select 0))then{(_this select 0) setVariable [""ace_medical_medicClass"",1]};";
		};
	};
    class 2000_British_HeliPilot_Desert: 2000_British_HeliPilot
	{
		displayName="Helicopter Pilot (00's Desert)";
		editorSubcategory = "Men_2000D";
		vehicleClass="Men_2000D";
		uniformClass="UK3CB_BAF_U_CombatUniform_DDPM_ShortSleeve";
		linkedItems[]=
		{
			"UK3CB_BAF_H_PilotHelmetHeli_A",
			"UK3CB_BAF_V_Pilot_DDPM",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_H_PilotHelmetHeli_A",
			"UK3CB_BAF_V_Pilot_DDPM",
			"ItemMap",		
			"ItemCompass",
			"ItemWatch"
		};
	};
	
	class 2000_British_FSTCommander_Desert: 2000_British_FSTCommander
	{
		scope=2;
		displayName="FST Commander (00's Desert)@Fire Support Team";
		icon="iconManLeader";
		editorSubcategory = "Men_2000D";
		vehicleClass= "Men_2000D";
		uniformClass="UK3CB_BAF_U_Smock_DDPM";
		backpack="TWC_Backpack_2000_Sectionlead_Desert";
		linkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_DDPM2",
			"UK3CB_BAF_H_Mk6_DDPM_C",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_DDPM2",
			"UK3CB_BAF_H_Mk6_DDPM_C",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};	
	class 2000_British_FSTForwardObserver_Desert: 2000_British_FSTForwardObserver
	{
		scope=2;
		displayName="FST Forward Observer (00's Desert)";
		editorSubcategory = "Men_2000D";
		vehicleClass="Men_2000D";
		uniformClass="UK3CB_BAF_U_Smock_DDPM";
		backpack="UK3CB_BAF_B_Bergen_DDPM_Rifleman_B";
		linkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_DDPM2",
			"UK3CB_BAF_H_Mk6_DDPM_C",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_DDPM2",
			"UK3CB_BAF_H_Mk6_DDPM_C",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 2000_British_FSTAssistant_Desert: 2000_British_FSTAssistant
	{
		scope=2;
		displayName="FST Assistant (00's Desert)";
		editorSubcategory = "Men_2000D";
		vehicleClass="Men_2000D";
		uniformClass="UK3CB_BAF_U_Smock_DDPM";
		backpack="UK3CB_BAF_B_Carryall_DDPM";
		linkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_DDPM2",
			"UK3CB_BAF_H_Mk6_DDPM_C",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_DPMW2",
			"UK3CB_BAF_H_Mk6_DPMW_C",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};


	    class 2000_British_Sniper_desert: B_Soldier_base_F
	{
		_generalMacro="2000_Desert_Sniper";
		scope=2;
		displayName="Sniper (00's Desert)";
		faction="twc_public_baf";
		editorSubcategory = "Men_2000D";
		vehicleClass="Men_2000D";
		icon="iconMan";
		nakedUniform="U_BasicBody";
		uniformClass="UK3CB_BAF_U_CombatUniform_DDPM_ShortSleeve";
		linkedItems[]=
		{
        "UK3CB_BAF_V_Osprey_DDPM2",
		"UK3CB_BAF_H_Mk6_DDPM_C",
		"ItemMap",
		"ItemCompass",
		"ItemWatch"
		};
		respawnLinkedItems[]=
		{
        "UK3CB_BAF_V_Osprey_DDPM2",
		"UK3CB_BAF_H_Mk6_DDPM_C",
		"ItemMap",
		"ItemCompass",
		"ItemWatch"
		};
		weapons[]=
		{
		"Throw",
		"Put",
		"Binocular",
		"twc_l96_d",
		"twc_browning_hp"
		};
		respawnweapons[]=
		{
		"Throw",
		"Put",
		"Binocular",
		"twc_l96_d",
		"twc_browning_hp"
		};
		magazines[]=
		{
		"UK3CB_BAF_762_L42A1_10Rnd",
		"UK3CB_BAF_762_L42A1_10Rnd",
		"CUP_15Rnd_9x19_M9",
		"CUP_15Rnd_9x19_M9",
		"CUP_15Rnd_9x19_M9",
		"UK3CB_BAF_762_L42A1_10Rnd",
		"UK3CB_BAF_762_L42A1_10Rnd",
		"UK3CB_BAF_762_L42A1_10Rnd",
		"SmokeShell",
		"SmokeShell"
		};
		Respawnmagazines[]=
		{
		"UK3CB_BAF_762_L42A1_10Rnd",
		"UK3CB_BAF_762_L42A1_10Rnd",
		"CUP_15Rnd_9x19_M9",
		"CUP_15Rnd_9x19_M9",
		"CUP_15Rnd_9x19_M9",
		"UK3CB_BAF_762_L42A1_10Rnd",
		"UK3CB_BAF_762_L42A1_10Rnd",
		"UK3CB_BAF_762_L42A1_10Rnd",
		"SmokeShell",
		"SmokeShell"
		};
		Items[]=
		{
		"ACE_fieldDressing",
		"ACRE_PRC343",	
		"ACE_RangeCard",
		"rhsusf_ANPVS_14",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_morphine",
		"ACE_morphine",
		"ACE_EarPlugs"	
		};
		respawnitems[]=
		{
		"ACE_fieldDressing",
		"ACRE_PRC343",	
		"ACE_RangeCard",
		"rhsusf_ANPVS_14",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_morphine",
		"ACE_morphine",
		"ACE_EarPlugs"		
		};
	};
	
		    class 2000_British_Spotter_desert: B_Soldier_base_F
	{
		_generalMacro="2000_Desert_spotter";
		scope=2;
		displayName="Spotter (00's Desert)";
		faction="twc_public_baf";
		editorSubcategory = "Men_2000D";
		vehicleClass="Men_2000D";
		icon="iconMan";
		nakedUniform="U_BasicBody";
		uniformClass="UK3CB_BAF_U_CombatUniform_DDPM_ShortSleeve";
		backpack="TWC_Backpack_2000_Sectionlead_Desert";
		linkedItems[]=
		{
        "UK3CB_BAF_V_Osprey_DDPM2",
		"UK3CB_BAF_H_Mk6_DDPM_C",
		"ItemMap",
		"ItemCompass",
		"ItemWatch"
		};
		respawnLinkedItems[]=
		{
        "UK3CB_BAF_V_Osprey_DDPM2",
		"UK3CB_BAF_H_Mk6_DDPM_C",
		"ItemMap",
		"ItemCompass",
		"ItemWatch"
		};
		weapons[]=
		{
		"Throw",
		"Put",
		"Binocular",
		"UK3CB_BAF_L85A2_SUSAT",
		"twc_browning_hp"
		};
		respawnweapons[]=
		{
		"Throw",
		"Put",
		"Binocular",
		"UK3CB_BAF_L85A2_SUSAT",
		"twc_browning_hp"
		};
		magazines[]=
		{
		"UK3CB_BAF_762_L42A1_10Rnd",
		"UK3CB_BAF_762_L42A1_10Rnd",
		"CUP_15Rnd_9x19_M9",
		"CUP_15Rnd_9x19_M9",
		"CUP_15Rnd_9x19_M9",
		"UK3CB_BAF_762_L42A1_10Rnd",
		"UK3CB_BAF_762_L42A1_10Rnd",
		"UK3CB_BAF_556_30Rnd",
		"UK3CB_BAF_556_30Rnd_t",
		"UK3CB_BAF_556_30Rnd",
		"UK3CB_BAF_556_30Rnd_t",
		"UK3CB_BAF_556_30Rnd",
		"SmokeShell",
		"SmokeShell"
		};
		Respawnmagazines[]=
		{
		"UK3CB_BAF_762_L42A1_10Rnd",
		"UK3CB_BAF_762_L42A1_10Rnd",
		"CUP_15Rnd_9x19_M9",
		"CUP_15Rnd_9x19_M9",
		"CUP_15Rnd_9x19_M9",
		"UK3CB_BAF_762_L42A1_10Rnd",
		"UK3CB_BAF_762_L42A1_10Rnd",
		"UK3CB_BAF_556_30Rnd",
		"UK3CB_BAF_556_30Rnd_t",
		"UK3CB_BAF_556_30Rnd",
		"UK3CB_BAF_556_30Rnd_t",
		"UK3CB_BAF_556_30Rnd",
		"SmokeShell",
		"SmokeShell"
		};
		Items[]=
		{
		"ACE_fieldDressing",
		"ACRE_PRC343",	
		"rhsusf_ANPVS_14",
		"ACE_EarPlugs",	
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_Tripod",
		"ACE_SpottingScope",
		"ACE_morphine",
		"ACE_morphine"
		};
		respawnitems[]=
		{
		"ACE_fieldDressing",
		"ACRE_PRC343",	
		"rhsusf_ANPVS_14",
		"ACE_EarPlugs",	
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_Tripod",
		"ACE_SpottingScope",
		"ACE_morphine",
		"ACE_morphine"		
		};
	};
	
		class 2000_British_MachineGunner_Desert: 2000_British_Gunner
	{
		displayName="GPMG Gunner (00's Desert)";
		editorSubcategory = "Men_2000D";
		vehicleClass="Men_2000D";
		uniformClass="UK3CB_BAF_U_CombatUniform_DDPM_ShortSleeve";
		backpack="";
				weapons[]=
		{
		"Throw",
		"Put",
		"UK3CB_BAF_L7A2"
		};
		respawnweapons[]=
		{
		"Throw",
		"Put",
		"UK3CB_BAF_L7A2"
		};
				magazines[]=
		{
		"UK3CB_BAF_762_200Rnd",
		"UK3CB_BAF_762_200Rnd",
		"SmokeShell"
		};
		Respawnmagazines[]=
		{
		"UK3CB_BAF_762_200Rnd",
		"UK3CB_BAF_762_200Rnd",
		"SmokeShell"
		};
		linkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_DDPM2",
			"UK3CB_BAF_H_Mk6_DDPM_C",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_DDPM2",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	
		class 2000_British_mg_assistant_Desert: 2000_British_Rifleman
	{
		displayName="GPMG Assistant (00's Desert)";
		editorSubcategory = "Men_2000D";
		vehicleClass="Men_2000D";
		uniformClass="UK3CB_BAF_U_CombatUniform_DDPM_ShortSleeve";
		backpack="TWC_Backpack_1990_machineGunner_Desert";
		linkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_DDPM2",
			"UK3CB_BAF_H_Mk6_DDPM_C",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_DDPM2",
			"UK3CB_BAF_H_Mk6_DDPM_C",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	
		class 2000_British_quartermaster_Desert: 2000_British_SectionCommander
	{
		displayName="Quartermaster (00's Desert)";
		editorSubcategory = "Men_2000D";
		vehicleClass="Men_2000D";
		uniformClass="UK3CB_BAF_U_CombatUniform_DDPM_ShortSleeve";
		attendant = 1;
		backpack="TWC_Backpack_2000_quartermaster_desert";
		linkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_DDPM2",
			"UK3CB_BAF_H_Beret_PWRR_PRR",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_DDPM2",
			"UK3CB_BAF_H_Beret_PWRR_PRR",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
			class ACE_SelfActions:B_Soldier_base_F {
				class base_Interact {
					displayName = "Base";
					condition = "true";
					exceptions[] = {};
					statement = "true";
				};
            
        };
	};