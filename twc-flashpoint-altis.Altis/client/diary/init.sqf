execVM "client\diary\missionStatus.sqf";

_index =player createDiarySubject ["RadarTower","Radar Tower"];

player createDiaryRecord ["Diary", ["Radar Tower", "The radar tower will detect any blufor air units. You will know if the radar tower is locking on to you as your on board computer will sound an alarm while you are in the radius of the radar. If you stay in the radars range for too long the enemy may send something to intercept you. To avoid being detected try to fly low."]];