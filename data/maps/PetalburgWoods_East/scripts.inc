PetalburgWoods_East_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgWoods_East_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

PetalburgWoods_East_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call Route100_EventScript_SetLancePosition
	return


PetalburgWoods_East_EventScript::
	setflag FLAG_VISITED_PETALBURG_WOODS_EAST
	return
