class CfgPatches {
	class twc_medical {
		requiredAddons[] = {"ace_medical"};
		requiredVersion = 1.7;
		version = "1";
		versionStr = "1";
		author = "Bosenator";
		authorUrl = "http://thewreckingcrew.eu";
		units[] = {};
		weapons[] = {};
	};
};

class CfgFunctions {
	class twc_medical {
		tag = "twc_medical";
		class init {
			file = "twc_medical\fncs";
			// Generics
			class addTime {};
			class init { postInit = 1; };
			class getBloodVolume {};
			class extendedVitalLoop {};
			class logToRPT {};
			
			// Uncon Loop
			class extendedUnconLoop {};
			class handleUncon {};
			class handleAIUncon {};

			// CPR
			class action {};
			class canCPR {};
			class CPR {};
			class CPR_Local {};

			// Defib
			class action_Defib {};
			class canDefib {};
			class Defib {};
			class Defib_Local {};

			// Bloodlust Compat & Insta-Kill
			class bloodlustInit {};
		};
	};
};

class Extended_InitPost_EventHandlers {
	class CAManBase {
		class twc_medicalInitPos_eh {
			clientInit = "[twc_medical_fnc_extendedVitalLoop, [(_this select 0)], 10] call CBA_fnc_waitAndExecute;";
		};
	};
};

class CfgVehicles {
	class Man;
	class CAManBase: Man {
		class ACE_Actions {
			class ACE_MainActions {
				class Medical {
					class ACE_Torso {
						class fieldDressing;
						class Defib: fieldDressing {
							displayName = "Defibrillate";
							condition = "[_player, _target] call twc_medical_fnc_canDefib";
							statement = "[_player, _target] call twc_medical_fnc_Defib";
							exceptions[] = {"isNotDragging", "isNotCarrying", "isNotInside", "isNotSwimming"};
							icon = "";
						};
						
						class Diagnose;
						class LogDebug: Diagnose {
							displayName = "Medical to RPT (DEBUG)";
							condition = "true";
							statement = "[_player, _target] call twc_medical_fnc_logToRPT";
							exceptions[] = {"isNotDragging", "isNotCarrying", "isNotSwimming"};
							icon = "";
						};
					};
				};
			};
		};
	};
};

class ACE_Medical_Actions {
	class Advanced {
		class fieldDressing;
		class CPR: fieldDressing {
			callbackSuccess = "twc_medical_fnc_action";
		};
		
		class Defib: CPR {
			displayName = "Defibrillate";
			displayNameProgress = "Defibrillating...";
			treatmentLocations[] = {"MedicalVehicle"};
			allowedSelections[] = {"body"};
			condition = "[(_this select 0), (_this select 1)] call twc_medical_fnc_canDefib";
			allowSelfTreatment = 0;
			requiredMedic = 1;
			treatmentTime = 10;
			patientStateCondition = 1;
			callbackSuccess = "twc_medical_fnc_action_Defib";
		};

		class CheckPulse;
		class LogDebug: CheckPulse {
			displayName = "Medical to RPT (DEBUG)";
			displayNameProgress = "Logging Medical State";
			callbackSuccess = "twc_medical_fnc_logToRPT";
		};
		
		class QuikClot: fieldDressing {
			treatmentTime = 5;
		};
		
		class ElasticBandage: fieldDressing {
			treatmentTime = 11;
		};
		
		class BloodIV: fieldDressing{};
		
		class BloodIV_250: BloodIV {
			allowSelfTreatment = 1;
		};
		
		class PlasmaIV_250: BloodIV {
			allowSelfTreatment = 1;
		};
		
		class SalineIV_250: BloodIV {
			allowSelfTreatment = 1;
		};
		
		class Tourniquet: fieldDressing {
			treatmentTime = 2;
		};
	};
};

class ACE_Medical_Advanced {
	class Treatment {
		class Medication {
			class Morphine {
				painReduce = 0.5;
				viscosityChange = -10;
			};
			
			class Epinephrine {
				timeInSystem = 300;
				maxDose = 4;
				viscosityChange = 5;
			};
		};
	};
};