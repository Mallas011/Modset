	class Modern_British_Base: B_Soldier_base_F
	{
		scope=1;
		displayName="Base (Modern)";
		faction="twc_faction";
		editorSubcategory = "Men_Modern";
		vehicleClass="Men_Modern";
		icon="iconMan";
		nakedUniform="U_BasicBody";
		uniformClass="UK3CB_BAF_U_CombatUniform_MTP";
		linkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_Rifleman_F",
			"UK3CB_BAF_H_Mk7_Scrim_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_Rifleman_F",
			"UK3CB_BAF_H_Mk7_Scrim_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
		Items[]=
		{
			"ACE_fieldDressing",
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
			"ACE_MapTools",
			"ACE_EarPlugs",
			"ACRE_PRC343"
			
		};
		respawntems[]=
		{
			"ACE_fieldDressing",
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
			"ACE_MapTools",
			"ACE_EarPlugs",
			"ACRE_PRC343"
		};
	};
	class Modern_British_Squadleader: Modern_British_Base
	{
		scope=2;
		displayName="Section Leader (Modern)";
		icon="iconManLeader";
		backpack="TWC_Backpack_Modern_Sectionlead";
		linkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_SL_D",
			"UK3CB_BAF_H_Mk7_Scrim_ESS_B",
			"ItemMap",
			"ItemcTab",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_SL_D",
			"UK3CB_BAF_H_Mk7_Scrim_ESS_B",
			"ItemMap",
			"ItemcTab",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"ACE_Vector",
			"UK3CB_BAF_L85A2_RIS_ELCAN3D",
			"UK3CB_BAF_L131A1"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"ACE_Vector",
			"UK3CB_BAF_L85A2_RIS_ELCAN3D",
			"UK3CB_BAF_L131A1"
		};
		magazines[]=
		{
			"UK3CB_BAF_9_17Rnd",
			"UK3CB_BAF_9_17Rnd",
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
			"SmokeShell",
			"B_IR_Grenade"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_9_17Rnd",
			"UK3CB_BAF_9_17Rnd",
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
			"SmokeShell",
			"B_IR_Grenade"
		};
	};
	class Modern_British_Rifleman: Modern_British_Base
	{
		scope=2;
		displayName="Rifleman (Modern)";
		backpack="UK3CB_BAF_B_Bergen_MTP_Rifleman_L_B";
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A2_RIS_ELCAN3D",
			"launch_NLAW_F"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A2_RIS_ELCAN3D",
			"launch_NLAW_F"
		};
		magazines[]=
		{
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
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
	class Modern_British_Grenadier: Modern_British_Base
	{
		scope=2;
		displayName="Grenadier (Modern)";
		icon="iconManExplosive";
		backpack="TWC_Backpack_Modern_Grenadier";
		linkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_Grenadier_B",
			"UK3CB_BAF_H_Mk7_Scrim_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_Grenadier_B",
			"UK3CB_BAF_H_Mk7_Scrim_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"ACE_Vector",
			"UK3CB_BAF_L85A2_UGL_ELCAN3D",
			"HAFM_LAW"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"ACE_Vector",
			"UK3CB_BAF_L85A2_UGL_ELCAN3D",
			"HAFM_LAW"
		};
		magazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell"
		};
	};
	class Modern_British_Autorifleman: Modern_British_Base
	{
		scope=2;
		displayName="Automatic Rifleman (Modern)";
		icon="iconManMG";
		backpack="TWC_Backpack_Modern_Autorifleman";
		linkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_MG_A",
			"UK3CB_BAF_H_Mk7_Scrim_C",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_MG_A",
			"UK3CB_BAF_H_Mk7_Scrim_C",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"UK3CB_BAF_L110A2_ELCAN3D"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L110A2_ELCAN3D"
		};
		magazines[]=
		{
			"UK3CB_BAF_556_200Rnd",
			"UK3CB_BAF_556_200Rnd",
			"UK3CB_BAF_556_200Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_556_200Rnd",
			"UK3CB_BAF_556_200Rnd",
			"UK3CB_BAF_556_200Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell"
		};
	};
	class Modern_British_2IC: Modern_British_Rifleman
	{
		displayName="2IC (Modern)";
		backpack="TWC_Backpack_Modern_2IC";
		weapons[]=
		{
			"Throw",
			"Put",
			"ACE_Vector",
			"UK3CB_BAF_L85A2_RIS_ELCAN3D"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"ACE_Vector",
			"UK3CB_BAF_L85A2_RIS_ELCAN3D"
		};
		magazines[]=
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
			"SmokeShell",
			"B_IR_Grenade"
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
			"SmokeShell",
			"B_IR_Grenade"
		};
	};
	class Modern_British_Machinegunner: Modern_British_Autorifleman
	{
		scope=2;
		displayName="Machine Gunner (Modern)";
		backpack="TWC_Backpack_Modern_MachineGunner";
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L7A2",
			"UK3CB_BAF_L131A1"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L7A2",
			"UK3CB_BAF_L131A1"
		};
		magazines[]=
		{
			"UK3CB_BAF_9_17Rnd",
			"UK3CB_BAF_9_17Rnd",
			"UK3CB_BAF_762_100Rnd",
			"UK3CB_BAF_762_100Rnd",
			"UK3CB_BAF_762_100Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_9_17Rnd",
			"UK3CB_BAF_9_17Rnd",
			"UK3CB_BAF_762_100Rnd",
			"UK3CB_BAF_762_100Rnd",
			"UK3CB_BAF_762_100Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell"
		};
	};
	class Modern_British_Marksman: Modern_British_Base
	{
		scope=2;
		displayName="Marksman (Modern)";
		backpack="UK3CB_BAF_B_Bergen_MTP_Rifleman_L_B";
		linkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_Marksman_A",
			"UK3CB_BAF_H_Mk7_Scrim_E",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_Marksman_A",
			"UK3CB_BAF_H_Mk7_Scrim_E",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"ACE_Vector",
			"UK3CB_BAF_L129A1_Grippod_TA648",
			"launch_NLAW_F"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"ACE_Vector",
			"UK3CB_BAF_L129A1_Grippod_TA648",
			"launch_NLAW_F"
		};
		magazines[]=
		{
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd_T",
			"UK3CB_BAF_762_L42A1_20Rnd_T",
			"UK3CB_BAF_762_L42A1_20Rnd_T",
			"UK3CB_BAF_762_L42A1_20Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd_T",
			"UK3CB_BAF_762_L42A1_20Rnd_T",
			"UK3CB_BAF_762_L42A1_20Rnd_T",
			"UK3CB_BAF_762_L42A1_20Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell"
		};
	};
	class Modern_British_Platoon_Commander: Modern_British_Squadleader
	{
		scope=2;
		displayName="Platoon Commander (Modern)";
		icon="iconManLeader";
		linkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_Holster",
			"UK3CB_BAF_H_Mk7_Camo_D",
			"ItemMap",
			"ItemcTab",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_Holster",
			"UK3CB_BAF_H_Mk7_Camo_D",
			"ItemMap",
			"ItemcTab",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
	};
	class Modern_British_Platoon_Sergeant: Modern_British_Platoon_Commander
	{
		scope=2;
		displayName="Platoon Sergeant (Modern)";
		faction="twc_faction";
		icon="iconMan";
		backpack="TWC_Backpack_Modern_Platoon_Sergeant";
	};
	class Modern_British_Platoon_CSM: Modern_British_Squadleader
	{
		displayName="Company Sergeant Major (Modern)";
		class EventHandlers: EventHandlers
		{
			init = "if(local (_this select 0)) then{(_this select 0) setVariable [""twc_isMolar"",true]};";
		};
	};
	class Modern_British_Medic: Modern_British_Base
	{
		scope=2;
		displayName="Medic(Modern)";
		icon="iconManMedic";
		backpack="TWC_Backpack_Modern_Medic";
		linkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_Medic_D",
			"UK3CB_BAF_H_Mk7_Camo_CESS_D",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_Medic_D",
			"UK3CB_BAF_H_Mk7_Camo_CESS_D",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"UK3CB_BAF_L85A2"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"UK3CB_BAF_L85A2"
		};
		magazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"SmokeShell",
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
	class Modern_British_HeliPilot: Modern_British_Base
	{
		scope=2;
		displayName="Helicopter Pilot(Modern)";
		uniformClass="UK3CB_BAF_U_CombatUniform_MTP";
		backpack="B_AssaultPack_blk";
		linkedItems[]=
		{
			"UK3CB_BAF_H_PilotHelmetHeli_A",
			"UK3CB_BAF_V_Pilot_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ACE_microDAGR_Item"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_H_PilotHelmetHeli_A",
			"UK3CB_BAF_V_Pilot_A",
			"ItemMap",		
			"ItemCompass",
			"ItemWatch",
			"ACE_microDAGR_Item"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"UK3CB_BAF_L22"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"UK3CB_BAF_L22"
		};
		magazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"SmokeShell",
			"SmokeShell"
		};
	};
	class Modern_British_JetPilot: Modern_British_Base
	{
		_generalMacro="Modern_JetPilot";
		scope=2;
		displayName="Jet Pilot(Modern)";
		faction="twc_faction";
		editorSubcategory = "Men_Modern";
		vehicleClass="Men_Modern";
		icon="iconMan";
		nakedUniform="U_BasicBody";
		uniformClass="U_I_pilotCoveralls";
		backpack="B_AssaultPack_blk";
		linkedItems[]=
		{
			"H_PilotHelmetFighter_B",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ACE_microDAGR_Item"
		};
		respawnLinkedItems[]=
		{
			"H_PilotHelmetFighter_B",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ACE_microDAGR_Item"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"UK3CB_BAF_L131A1"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"UK3CB_BAF_L131A1"
		};
		magazines[]=
		{
			"UK3CB_BAF_9_17Rnd",
			"UK3CB_BAF_9_17Rnd",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_9_17Rnd",
			"UK3CB_BAF_9_17Rnd",	
			"SmokeShell",
			"SmokeShell"
		};
	};
	class Modern_British_MortarGunner: Modern_British_Rifleman
	{
		scope=2;
		displayName="Mortar Gunner(Modern)";
		icon="iconMan";
		backpack="TWC_Backpack_Modern_Mortar";
		linkedItems[]=
		{
			"UK3CB_BAF_V_Osprey",
			"UK3CB_BAF_H_Mk7_Camo_D",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_Osprey",
			"UK3CB_BAF_H_Mk7_Camo_D",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A2",
			"UK3CB_BAF_L16"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A2",
			"UK3CB_BAF_L16"
		};
		magazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"SmokeShell"
		};
	};
	class Modern_British_MortarAssistant: Modern_British_MortarGunner
	{
		displayName="Mortar Assistant(Modern)";
		backpack="TWC_Backpack_Modern_MortarAssistant";
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A2",
			"UK3CB_BAF_L16_Tripod"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A2",
			"UK3CB_BAF_L16_Tripod"
		};
	};
	class Modern_British_Sniper: Modern_British_Base
	{
		scope=2;
		displayName="Sniper (Modern)";
		nakedUniform="U_BasicBody";
		uniformClass="UK3CB_BAF_U_CombatUniform_MTP_Ghillie_RM";
		backpack="TWC_Backpack_Modern_Sniper";
		linkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_MTP",
			"ItemMap",
			"ItemcTab",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_PLCE_Webbing_MTP",
			"ItemMap",
			"ItemcTab",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"ACE_Vector",
			"twc_l115a3_wd"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"ACE_Vector",
			"twc_l115a3_wd"
		};
		magazines[]=
		{
			"UK3CB_BAF_9_17Rnd",
			"UK3CB_BAF_9_17Rnd",
			"UK3CB_BAF_338_5Rnd",
			"UK3CB_BAF_338_5Rnd",
			"UK3CB_BAF_338_5Rnd",
			"UK3CB_BAF_338_5Rnd",
			"UK3CB_BAF_338_5Rnd",
			"UK3CB_BAF_338_5Rnd",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_9_17Rnd",
			"UK3CB_BAF_9_17Rnd",
			"UK3CB_BAF_338_5Rnd",
			"UK3CB_BAF_338_5Rnd",
			"UK3CB_BAF_338_5Rnd",
			"UK3CB_BAF_338_5Rnd",
			"UK3CB_BAF_338_5Rnd",
			"UK3CB_BAF_338_5Rnd",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
	};
	class Modern_British_Spotter: Modern_British_Sniper
	{
		displayName="Spotter (Modern)";
		icon="iconManLeader";
		nakedUniform="U_BasicBody";
		uniformClass="UK3CB_BAF_U_CombatUniform_MTP_Ghillie_RM";
		backpack="TWC_Backpack_Modern_Spotter";
		weapons[]=
		{
		"Throw",
		"Put",
		"ACE_Vector",
		"twc_l129a1_spotter"
		};
		respawnweapons[]=
		{
		"Throw",
		"Put",
		"ACE_Vector",
		"twc_l129a1_spotter"
		};
		magazines[]=
		{
			"UK3CB_BAF_9_17Rnd",
			"UK3CB_BAF_9_17Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"B_IR_Grenade"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_9_17Rnd",
			"UK3CB_BAF_9_17Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"B_IR_Grenade"
		};
	};
	class Modern_British_FAC: Modern_British_Base
	{
		scope=2;
		displayName="Section FAC(Modern)";
		backpack="TWC_Backpack_Modern_FAC";
		linkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_Grenadier_A",
			"UK3CB_BAF_H_Mk7_Net_ESS_A",
			"ItemMap",
			"ItemcTab",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_Grenadier_A",
			"UK3CB_BAF_H_Mk7_Net_ESS_A",
			"ItemMap",
			"ItemcTab",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"UK3CB_BAF_Soflam_Laserdesignator",
			"UK3CB_BAF_L85A2_UGL_ELCAN3D"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"UK3CB_BAF_Soflam_Laserdesignator",
			"UK3CB_BAF_L85A2_UGL_ELCAN3D"
		};
		magazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_1Rnd_HE_Grenade_Shell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellBlue",
			"SmokeShellBlue",
			"SmokeShellBlue",
			"SmokeShellGreen",
			"SmokeShellGreen",
			"SmokeShellGreen",
			"SmokeShellRed",
			"SmokeShellRed",
			"SmokeShellRed",
			"SmokeShellPurple",
			"SmokeShellPurple",
			"SmokeShellPurple",
			"B_IR_Grenade"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_1Rnd_HE_Grenade_Shell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellBlue",
			"SmokeShellBlue",
			"SmokeShellBlue",
			"SmokeShellGreen",
			"SmokeShellGreen",
			"SmokeShellGreen",
			"SmokeShellRed",
			"SmokeShellRed",
			"SmokeShellRed",
			"SmokeShellPurple",
			"SmokeShellPurple",
			"SmokeShellPurple",
			"B_IR_Grenade"
		};
	};
//////////////////////////////  COIN  //////////////////////////////
	class Modern_British_Pointman: Modern_British_Rifleman
	{
		displayName="Pointman (Modern COIN)";
		linkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_Rifleman_B",
			"UK3CB_BAF_H_Mk7_Scrim_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_Rifleman_B",
			"UK3CB_BAF_H_Mk7_Scrim_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A2_RIS_ELCAN3D",
			"HAFM_LAW",
			"UK3CB_BAF_L131A1"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A2_RIS_ELCAN3D",
			"HAFM_LAW",
			"UK3CB_BAF_L131A1"
		};
		magazines[]=
		{
			"UK3CB_BAF_9_17Rnd",
			"UK3CB_BAF_9_17Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
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
			"UK3CB_BAF_9_17Rnd",
			"UK3CB_BAF_9_17Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
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
	class Modern_British_Grenadier_COIN: Modern_British_Grenadier
	{
		displayName="Grenadier (Modern COIN)";
		weapons[]=
		{
			"Throw",
			"Put",
			"ACE_Vector",
			"UK3CB_BAF_L85A2_UGL_ELCAN3D",
			"HAFM_LAW",
			"UK3CB_BAF_L131A1"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"ACE_Vector",
			"UK3CB_BAF_L85A2_UGL_ELCAN3D",
			"HAFM_LAW",
			"UK3CB_BAF_L131A1"
		};
		magazines[]=
		{
			"UK3CB_BAF_9_17Rnd",
			"UK3CB_BAF_9_17Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_9_17Rnd",
			"UK3CB_BAF_9_17Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_30Rnd_T",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell"
		};
	};
	class Modern_British_Autorifleman_COIN: Modern_British_Autorifleman
	{
		displayName="Automatic Rifleman (Modern COIN)";
		weapons[]=
		{
			"Throw",
			"Put",
			"UK3CB_BAF_L110A2_ELCAN3D",
			"UK3CB_BAF_L131A1"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L110A2_ELCAN3D",
			"UK3CB_BAF_L131A1"
		};
		magazines[]=
		{
			"UK3CB_BAF_9_17Rnd",
			"UK3CB_BAF_9_17Rnd",
			"UK3CB_BAF_556_200Rnd",
			"UK3CB_BAF_556_200Rnd",
			"UK3CB_BAF_556_200Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_9_17Rnd",
			"UK3CB_BAF_9_17Rnd",
			"UK3CB_BAF_556_200Rnd",
			"UK3CB_BAF_556_200Rnd",
			"UK3CB_BAF_556_200Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell"
		};
	};
	class Modern_British_2IC_COIN: Modern_British_Pointman
	{
		displayName="Grenadier (Modern COIN)";
		backpack="TWC_Backpack_Modern_2IC";
		linkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_Rifleman_B",
			"UK3CB_BAF_H_Mk7_Scrim_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_V_Osprey_Rifleman_B",
			"UK3CB_BAF_H_Mk7_Scrim_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A2_RIS_ELCAN3D",
			"HAFM_LAW",
			"UK3CB_BAF_L131A1"		
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L85A2_RIS_ELCAN3D",
			"HAFM_LAW",
			"UK3CB_BAF_L131A1"
		};
		magazines[]=
		{
			"UK3CB_BAF_9_17Rnd",
			"UK3CB_BAF_9_17Rnd",
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
			"SmokeShell",
			"B_IR_Grenade"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_9_17Rnd",
			"UK3CB_BAF_9_17Rnd",
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
			"SmokeShell",
			"B_IR_Grenade"
		};
	};
	class Modern_British_Marksman_COIN: Modern_British_Marksman
	{
		displayName="Marksman (Modern COIN)";
		weapons[]=
		{
			"Throw",
			"Put",
			"ACE_Vector",
			"UK3CB_BAF_L129A1_Grippod_TA648",
			"HAFM_LAW",
			"UK3CB_BAF_L131A1"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"ACE_Vector",
			"UK3CB_BAF_L129A1_Grippod_TA648",
			"HAFM_LAW",
			"UK3CB_BAF_L131A1"	
		};
		magazines[]=
		{
			"UK3CB_BAF_9_17Rnd",
			"UK3CB_BAF_9_17Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd_T",
			"UK3CB_BAF_762_L42A1_20Rnd_T",
			"UK3CB_BAF_762_L42A1_20Rnd_T",
			"UK3CB_BAF_762_L42A1_20Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_9_17Rnd",
			"UK3CB_BAF_9_17Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd",
			"UK3CB_BAF_762_L42A1_20Rnd_T",
			"UK3CB_BAF_762_L42A1_20Rnd_T",
			"UK3CB_BAF_762_L42A1_20Rnd_T",
			"UK3CB_BAF_762_L42A1_20Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell"
		};
	};
//////////////////////////////  Mechanised  //////////////////////////////
	class Modern_British_Rifleman_Mechanised: Modern_British_Rifleman
	{
		displayName="Rifleman (Modern Mechanised)";
		backpack="";
	};
	class Modern_British_Grenadier_Mechanised: Modern_British_Grenadier
	{
		displayName="Grenadier (Modern Mechanised)";
		backpack="";
	};
	class Modern_British_Autorifleman_Mechanised: Modern_British_Autorifleman
	{
		displayName="Autorifleman (Modern Mechanised)";
		backpack="";
	};
	class Modern_British_2IC_Mechanised: Modern_British_2IC
	{
		displayName="2IC (Modern Mechanised)";
		backpack="";
	};
	class Modern_British_Marksman_Mechanised: Modern_British_Marksman
	{
		displayName="Marksman (Modern Mechanised)";
		backpack="";
	};
	class Modern_British_VehicleCrew: Modern_British_Base
	{
		scope=2;
		displayName="Modern Vehicle Crewman (Modern)";
		icon="iconMan";
		linkedItems[]=
		{
			"UK3CB_BAF_H_CrewHelmet_A",
			"UK3CB_BAF_V_Osprey",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_H_CrewHelmet_A",
			"UK3CB_BAF_V_Osprey",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L22A2"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L22A2"
		};
		magazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"smokeshell"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd",
			"smokeshell"
		};
	};
	class Modern_British_VehicleCommander: Modern_British_VehicleCrew
	{
		displayName="Modern Vehicle Commander (Modern)";
		icon="iconManLeader";
		nakedUniform="U_BasicBody";
		backpack="B_AssaultPack_blk";
		linkedItems[]=
		{	
			"UK3CB_BAF_H_CrewHelmet_ESS_A",
			"UK3CB_BAF_V_Osprey",
			"ItemMap",
			"ItemcTab",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
		respawnLinkedItems[]=
		{		
			"UK3CB_BAF_H_CrewHelmet_ESS_A",
			"UK3CB_BAF_V_Osprey",
			"ItemMap",
			"ItemcTab",
			"ItemCompass",
			"ItemWatch",
			"UK3CB_BAF_G_Tactical_Black"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"ACE_Vector",
			"UK3CB_BAF_L22A2"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"ACE_Vector",
			"UK3CB_BAF_L22A2"
		};
	};