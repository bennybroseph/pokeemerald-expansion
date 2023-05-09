Route102_South_MapScripts::
	.byte 0


Route102_South_EventScript_ItemGem::
	switch VAR_STARTER_MON
	case 0, Route102_South_EventScript_ItemGem_2
	case 1, Route102_South_EventScript_ItemGem_3
	case 2, Route102_South_EventScript_ItemGem_4
	return

Route102_South_EventScript_ItemGem_2:
	finditem ITEM_GRASS_GEM
	return

Route102_South_EventScript_ItemGem_3:
	finditem ITEM_FIRE_GEM
	return

Route102_South_EventScript_ItemGem_4:
	finditem ITEM_WATER_GEM
	return

