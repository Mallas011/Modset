/*

*/

aastart = createTrigger ["EmptyDetector", getMarkerPos "aa1"];
aastart setTriggerArea [500, 500, 0, false];
aastart setTriggerActivation ["WEST", "PRESENT", true];
aastart setTriggerStatements ["this", "['aa1'] call twc_mech; ['aa1'] call twc_siteContested; deleteVehicle aastart", ""];