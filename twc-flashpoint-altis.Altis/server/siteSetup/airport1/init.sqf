/*

*/

airporttrgstart = createTrigger ["EmptyDetector", getMarkerPos "airport1"];
airporttrgstart setTriggerArea [800, 800, 0, false];
airporttrgstart setTriggerActivation ["WEST", "PRESENT", true];
airporttrgstart setTriggerStatements ["this", "['airport1'] call twc_siteContested; ['airport1'] call twc_town; [thisList] call twc_mortarAttack; deleteVehicle airporttrgstart", ""];