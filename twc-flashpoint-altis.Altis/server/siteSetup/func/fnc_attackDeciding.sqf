/*
*
* Called after blufor capture
*
* calls counter attacks
*/

params["_marker"];
_rand = random 100;
if(_rand < 50)exitWith {};
[_marker] call twc_attackInf;
[_marker] call twc_siteContestedCounter;
if(_rand < 66)exitWith {};
[_marker] call twc_attackHelo;