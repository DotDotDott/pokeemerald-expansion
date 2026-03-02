SproutPC_F1_MapScripts::
	.byte 0


MartMusic::
# 4 "data/maps/SproutPC_F1/scripts.pory"
	playbgm MUS_POKE_MART, TRUE
# 5 "data/maps/SproutPC_F1/scripts.pory"
	setvar VAR_TEMP_2, 1
	return


CenterMusic::
# 8 "data/maps/SproutPC_F1/scripts.pory"
	playbgm MUS_POKE_CENTER, TRUE
# 9 "data/maps/SproutPC_F1/scripts.pory"
	setvar VAR_TEMP_2, 0
	return

