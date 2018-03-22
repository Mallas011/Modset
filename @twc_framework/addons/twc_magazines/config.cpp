class CfgPatches {
	class twc_acefixes {
		units[]={};
		weapons[]={};
		requiredVersion = 1.7;

		requiredAddons[] = {
			"ace_common",
			"ace_interaction",
			"ace_magazinerepack"
		};

		author[]={};
		authorUrl="";
		version="1";
		versionStr="1";
		versionAr[]={1};
	};
};

class cfgFunctions {
	class twc_magazines {
		tag = "twc_magazines";
		class init {
			file = "twc_magazines\functions";

			class getMagazineChildren {};
			class magazineRepackFinish {};
			class magazineRepackProgress {};
			class simulateRepackEvents {};
			class startRepackingMagazine {};
		};
	};
};

#include "CfgVehicles.hpp"