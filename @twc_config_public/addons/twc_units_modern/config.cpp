class CfgPatches {
	class twc_modern {
		units[]= {
			"Modern_British_Base",
			"Modern_British_Squadleader",
			"Modern_British_Rifleman",
			"Modern_British_Grenadier",
			"Modern_British_Autorifleman",
			"Modern_British_2IC",
			"Modern_British_Machinegunner",
			"Modern_British_Marksman",
			"Modern_British_Platoon_Commander",
			"Modern_British_Platoon_Sergeant",
			"Modern_British_Medic",
			"Modern_British_Pointman",
			"Modern_British_Grenadier_COIN",
			"Modern_British_Autorifleman_COIN",
			"Modern_British_2IC_COIN",
			"Modern_British_Marksman_COIN",
			"Modern_British_PlatoonMortar",
			"Modern_British_HeliPilot",
			"Modern_British_JetPilot",
			"Modern_British_MortarGunner",
			"Modern_British_MortarAssistant",
			"Modern_British_Sniper",
			"Modern_British_Spotter",
			"Modern_British_FAC",
			"Modern_British_VehicleCrew",
			"Modern_British_VehicleCommander",
			"Modern_British_FSTCommander",
			"Modern_British_FSTForwardObserver",
			"Modern_British_FSTAssistant",
			"twc_ana_base",
			"twc_ana_commander",
			"twc_ana_subcommander",
			"twc_ana_rifleman_at",
			"twc_ana_mg",
			"twc_ana_mg_as",
			"twc_ana_marksman",
			"twc_ana_medic"
		};

		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]= {
			"A3_Characters_F_BLUFOR",
			"A3_Characters_F_Common",
			"A3_Characters_F",
			"a3_characters_f_beta",
			"a3_characters_f_gamma",
			"rhs_c_weapons",
			"rhsusf_c_weapons",
			"uk3cb_baf_weapons_smallarms"
		};
	};
};

class EventHandlers;

class CfgEditorSubCategories {
	class Men_Modern {
		displayName = "Men (Modern)";
	};

	class Men_Modern_Mounted {
		displayName = "Men (Modern Dismounted)";
	};

	class Men_ModernCoin {
		displayName = "Men (Modern COIN)";
	};
};

class CfgFactionClasses {
	class twc_public_baf {
		displayName="TWC Public BAF Units";
		author="FakeMatty";
		icon="TWClogo.paa";
		priority=2;
		side=1;
	};
};

#include "compositions.hpp"
class CfgVehicles
{
	class B_Soldier_base_F;
	class CUP_B_C130J_GB;
	
	#include "modern.hpp"
	
	#include "insurgency\units.hpp"
	
	#include "backpacks.hpp"	
};
#include "weapons.hpp"