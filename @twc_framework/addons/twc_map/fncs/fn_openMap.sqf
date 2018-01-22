params ["_map"];

if (isNil "alreadyOwnsMap") then { alreadyOwnsMap = false; };

if (alreadyOwnsMap || {"ItemMap" in assignedItems player}) then {
	alreadyOwnsMap = true;
};

if (!alreadyOwnsMap) then {
	player linkItem "ItemMap";
};

openMap true;

ctrlSetFocus (findDisplay 12 displayCtrl 51);

addMissionEventHandler ["Map", {
	params ["_mapIsOpened", "_mapIsForced"];
	
	if (!_mapIsOpened && !_mapIsForced) then {
		if (!alreadyOwnsMap) then {
			player unlinkItem "ItemMap";
		};
		
		removeMissionEventHandler ["Map", _thisEventHandler];
	};
}];