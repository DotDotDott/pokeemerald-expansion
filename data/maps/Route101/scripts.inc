Route101_MapScripts::
	.byte 0


Route1_Trigger_Prof_Attack_Event::
# 5 "data/maps/Route101/scripts.pory"
	lockall
# 6 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 7 "data/maps/Route101/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 8 "data/maps/Route101/scripts.pory"
	applymovement Sister, Route1_Trigger_Prof_Attack_Event_Movement_0
# 9 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_Trigger_Prof_Attack_Event_Movement_1
# 10 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 11 "data/maps/Route101/scripts.pory"
	applymovement Sister, Route1_Trigger_Prof_Attack_Event_Movement_2
# 12 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_Trigger_Prof_Attack_Event_Movement_2
# 13 "data/maps/Route101/scripts.pory"
	setspeaker Route1_Trigger_Prof_Attack_Event_Text_0
# 14 "data/maps/Route101/scripts.pory"
	msgbox Route1_Trigger_Prof_Attack_Event_Text_1, MSGBOX_NPC
# 15 "data/maps/Route101/scripts.pory"
	applymovement prof, Route1_Trigger_Prof_Attack_Event_Movement_3
# 16 "data/maps/Route101/scripts.pory"
	applymovement birdOne, Route1_Trigger_Prof_Attack_Event_Movement_3
# 17 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 18 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
# 19 "data/maps/Route101/scripts.pory"
	releaseall
	return


# 8 "data/maps/Route101/scripts.pory"
Route1_Trigger_Prof_Attack_Event_Movement_0:
# 8 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 8 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 8 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 8 "data/maps/Route101/scripts.pory"
	walk_fast_right
	step_end

# 9 "data/maps/Route101/scripts.pory"
Route1_Trigger_Prof_Attack_Event_Movement_1:
# 9 "data/maps/Route101/scripts.pory"
	player_run_right
# 9 "data/maps/Route101/scripts.pory"
	player_run_right
# 9 "data/maps/Route101/scripts.pory"
	player_run_right
# 9 "data/maps/Route101/scripts.pory"
	player_run_right
	step_end

# 11 "data/maps/Route101/scripts.pory"
Route1_Trigger_Prof_Attack_Event_Movement_2:
# 11 "data/maps/Route101/scripts.pory"
	face_up
	step_end

# 15 "data/maps/Route101/scripts.pory"
Route1_Trigger_Prof_Attack_Event_Movement_3:
# 15 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 15 "data/maps/Route101/scripts.pory"
	walk_fast_down
	step_end

Route1_Trigger_Prof_Attack_Event_Text_0:
# 13 "data/maps/Route101/scripts.pory"
	.string "???$"

Route1_Trigger_Prof_Attack_Event_Text_1:
# 14 "data/maps/Route101/scripts.pory"
	.string "H-HEEEELLPPP!!!$"
