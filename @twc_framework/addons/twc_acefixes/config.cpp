class CfgPatches {
	class twc_acefixes {
		units[]={};
		weapons[]={};
		requiredVersion = 1.7;
		requiredAddons[] = {"ace_common"};
		author[]={};
		authorUrl="";
		version="1";
		versionStr="1";
		versionAr[]={1};
	};
};

class cfgFunctions {
	class twc_acefixes {
		tag = "twc_acefixes";
		class init {
			file = "twc_acefixes\functions";

			class handleParadrop {};
		};
	};
};

class Extended_PostInit_EventHandlers {
	class twc_acefixes {
		init = "[] call twc_acefixes_fnc_handleParadrop;";
	};
};