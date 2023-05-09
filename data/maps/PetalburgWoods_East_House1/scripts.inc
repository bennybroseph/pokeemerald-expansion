PetalburgWoods_East_House1_MapScripts::
	.byte 0


PetalburgWoods_East_House1_EventScript_LanceTalk::
	lock
	faceplayer
	msgbox PetalburgWoods_East_House1_Text_LanceGreeting
	goto_if_set FLAG_DEFEATED_LANCE_ROUTE_100, PetalburgWoods_East_House1_EventScript_LanceTalk_2
	msgbox PetalburgWoods_East_House1_Text_LanceNotDefeated
PetalburgWoods_East_House1_EventScript_LanceTalk_1:
	release
	return

PetalburgWoods_East_House1_EventScript_LanceTalk_2:
	msgbox PetalburgWoods_East_House1_Text_LanceDefeatedBefore
	goto PetalburgWoods_East_House1_EventScript_LanceTalk_1


PetalburgWoods_East_House1_Text_LanceGreeting::
	.string "LANCE: Ah, I see you've found my little\n"
	.string "hideout.$"

PetalburgWoods_East_House1_Text_LanceDefeatedBefore::
	.string "Come for another battle?\p"
	.string "Sorry to dissapoint, but I'm taking the\n"
	.string "day off.\p"
	.string "You're welcome to rest here as well if\n"
	.string "you'd like though.$"

PetalburgWoods_East_House1_Text_LanceNotDefeated::
	.string "You're welcome to rest here if you need.\p"
	.string "Just make sure you close the door on\n"
	.string "your way out.$"
