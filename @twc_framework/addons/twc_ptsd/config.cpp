class CfgPatches {
	class TWC_PTSD {
		name = "TWC_PTSD";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.7;
		
		requiredAddons[] = {
			"cba_main",
			"A3_Modules_F"
		};
		
		author = "Bosenator";
		authors[] = {"Bosenator"};
		url = "http://thewreckingcrew.eu";
		version = 1;
		versionStr = "1";
	};
};

class CfgFunctions {
	class TWC_PTSD {
		tag = "TWC_ptsd";
		class init {
			file = "TWC_ptsd\functions";
			class init { postInit = 1; };
		};
	};
};

class CfgSounds {
	sounds[] = {};

	class TWC_PTSD_Scream_One {
		name = "TWC_PTSD_Scream_One";
		sound[] = {"\twc_ptsd\sounds\scream1.ogg", 2, 1};
		titles[] = {};
	};
};