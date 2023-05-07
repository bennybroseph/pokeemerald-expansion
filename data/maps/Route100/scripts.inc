Route100_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route100_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route100_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call Route100_EventScript_SetLancePosition
	return


Route100_EventScript_SetLancePosition::
	goto_if_unset FLAG_SYS_POKEMON_GET, Route100_EventScript_SetLancePosition_1
	setobjectmovementtype 1, MOVEMENT_TYPE_WANDER_AROUND
	return

Route100_EventScript_SetLancePosition_1:
	setobjectxyperm 1, 17, 13
	return


Route100_EventScript_Lance::
	lock
	faceplayer
	goto_if_unset FLAG_SYS_POKEMON_GET, Route100_EventScript_Lance_2
	goto_if_set FLAG_DEFEATED_LANCE_ROUTE_100, Route100_EventScript_Lance_5
	msgbox Route100_Text_LanceBattleIntro, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq Route100_EventScript_Lance_8
	msgbox Route100_Text_LanceBattleDecline
Route100_EventScript_Lance_1:
	release
	return

Route100_EventScript_Lance_2:
	msgbox Route100_Text_LanceBlock
	goto Route100_EventScript_Lance_1

Route100_EventScript_Lance_5:
	msgbox Route100_Text_LanceDefeated, MSGBOX_AUTOCLOSE
	goto Route100_EventScript_Lance_1

Route100_EventScript_Lance_8:
	msgbox Route100_Text_LanceBattleAccept
	trainerbattle_no_intro TRAINER_LANCE_ROUTE100, Route100_Text_LanceBattleLoss
	setflag FLAG_DEFEATED_LANCE_ROUTE_100
	goto Route100_EventScript_Lance_1


Route100_MoveBack:
	walk_up
	step_end

Route100_Text_LanceBlock::
	.string "LANCE: Hi there, are you on an\n"
	.string "adventure too?\p"
	.string "Oh, you'd like to get through.\p"
	.string "Sorry, it looks like you don't have any\n"
	.string "POKéMON.\p"
	.string "It would be pretty irresponsible of me\n"
	.string "to let you into this tall grass patch.$"

Route100_Text_LanceBattleIntro::
	.string "LANCE: Oh, looks like you have a\n"
	.string "POKéMON now. Congrats!\p"
	.string "How about we have a quick battle?$"

Route100_Text_LanceBattleDecline::
	.string "Really? That's a shame.\p"
	.string "Well, let me know if you change your\n"
	.string "mind.$"

Route100_Text_LanceBattleAccept::
	.string "Great! Don't worry, I won't go all out so\n"
	.string "soon.$"

Route100_Text_LanceBattleLoss::
	.string "LANCE: Wow, you're stronger than I\n"
	.string "thought!\p"
	.string "I'm definitely going to have to step it\n"
	.string "up next time.$"

Route100_Text_LanceDefeated::
	.string "LANCE: Not sure where you're headed,\n"
	.string "but I hope to battle you again soon.$"
