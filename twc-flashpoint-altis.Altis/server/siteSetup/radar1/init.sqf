/*

*/

radarstart = createTrigger ["EmptyDetector", getMarkerPos "radar1"];
radarstart setTriggerArea [800, 800, 0, false];
radarstart setTriggerActivation ["WEST", "PRESENT", true];
radarstart setTriggerStatements ["this", "['radar1'] call twc_radar; ['radar1'] call twc_siteContested; [thisList] call twc_mortarAttack;  deleteVehicle radarstart", ""];