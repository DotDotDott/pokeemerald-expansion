Route101_MapScripts::
	.byte 0


Route1_Trigger_Prof_Attack_Event::
# 5 "data/maps/Route101/scripts.pory"
	lockall
# 6 "data/maps/Route101/scripts.pory"
	removeobject 2
# 7 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 8 "data/maps/Route101/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 9 "data/maps/Route101/scripts.pory"
	applymovement Sister, Route1_Trigger_Prof_Attack_Event_Movement_0
# 10 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_Trigger_Prof_Attack_Event_Movement_1
# 11 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 12 "data/maps/Route101/scripts.pory"
	applymovement Sister, Route1_Trigger_Prof_Attack_Event_Movement_2
# 13 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 14 "data/maps/Route101/scripts.pory"
	setspeaker Route1_Trigger_Prof_Attack_Event_Text_0
# 15 "data/maps/Route101/scripts.pory"
	msgbox Route1_Trigger_Prof_Attack_Event_Text_1, MSGBOX_NPC
# 16 "data/maps/Route101/scripts.pory"
	applymovement prof, Route1_Trigger_Prof_Attack_Event_Movement_3
# 17 "data/maps/Route101/scripts.pory"
	applymovement birdOne, Route1_Trigger_Prof_Attack_Event_Movement_3
# 18 "data/maps/Route101/scripts.pory"
	applymovement birdTwo, Route1_Trigger_Prof_Attack_Event_Movement_4
# 19 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 20 "data/maps/Route101/scripts.pory"
	applymovement prof, Route1_Trigger_Prof_Attack_Event_Movement_5
# 21 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 22 "data/maps/Route101/scripts.pory"
	addobject 2
# 23 "data/maps/Route101/scripts.pory"
	setspeaker Route1_Trigger_Prof_Attack_Event_Text_0
# 24 "data/maps/Route101/scripts.pory"
	msgbox Route1_Trigger_Prof_Attack_Event_Text_2, MSGBOX_NPC
# 25 "data/maps/Route101/scripts.pory"
	applymovement prof, Route1_Trigger_Prof_Attack_Event_Movement_6
# 26 "data/maps/Route101/scripts.pory"
	applymovement birdOne, Route1_Trigger_Prof_Attack_Event_Movement_7
# 27 "data/maps/Route101/scripts.pory"
	applymovement birdTwo, Route1_Trigger_Prof_Attack_Event_Movement_8
# 28 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 29 "data/maps/Route101/scripts.pory"
	applymovement prof, Route1_Trigger_Prof_Attack_Event_Movement_9
# 30 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 31 "data/maps/Route101/scripts.pory"
	applymovement prof, Route1_Trigger_Prof_Attack_Event_Movement_10
# 32 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 33 "data/maps/Route101/scripts.pory"
	applymovement prof, Route1_Trigger_Prof_Attack_Event_Movement_9
# 34 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 35 "data/maps/Route101/scripts.pory"
	applymovement prof, Route1_Trigger_Prof_Attack_Event_Movement_10
# 36 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 37 "data/maps/Route101/scripts.pory"
	applymovement prof, Route1_Trigger_Prof_Attack_Event_Movement_9
# 38 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 39 "data/maps/Route101/scripts.pory"
	setspeaker Route1_Trigger_Prof_Attack_Event_Text_0
# 40 "data/maps/Route101/scripts.pory"
	msgbox Route1_Trigger_Prof_Attack_Event_Text_3, MSGBOX_NPC
# 43 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
# 44 "data/maps/Route101/scripts.pory"
	releaseall
	return


# 9 "data/maps/Route101/scripts.pory"
Route1_Trigger_Prof_Attack_Event_Movement_0:
# 9 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 9 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 9 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 9 "data/maps/Route101/scripts.pory"
	walk_fast_right
	step_end

# 10 "data/maps/Route101/scripts.pory"
Route1_Trigger_Prof_Attack_Event_Movement_1:
# 10 "data/maps/Route101/scripts.pory"
	player_run_right
# 10 "data/maps/Route101/scripts.pory"
	player_run_right
# 10 "data/maps/Route101/scripts.pory"
	player_run_right
# 10 "data/maps/Route101/scripts.pory"
	player_run_right
# 10 "data/maps/Route101/scripts.pory"
	face_down
	step_end

# 12 "data/maps/Route101/scripts.pory"
Route1_Trigger_Prof_Attack_Event_Movement_2:
# 12 "data/maps/Route101/scripts.pory"
	face_up
	step_end

# 16 "data/maps/Route101/scripts.pory"
Route1_Trigger_Prof_Attack_Event_Movement_3:
# 16 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 16 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 16 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 16 "data/maps/Route101/scripts.pory"
	walk_fast_down
	step_end

# 18 "data/maps/Route101/scripts.pory"
Route1_Trigger_Prof_Attack_Event_Movement_4:
# 18 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 18 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 18 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 18 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 18 "data/maps/Route101/scripts.pory"
	walk_fast_left
	step_end

# 20 "data/maps/Route101/scripts.pory"
Route1_Trigger_Prof_Attack_Event_Movement_5:
# 20 "data/maps/Route101/scripts.pory"
	jump_in_place_right
	step_end

# 25 "data/maps/Route101/scripts.pory"
Route1_Trigger_Prof_Attack_Event_Movement_6:
# 25 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 25 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 25 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 25 "data/maps/Route101/scripts.pory"
	face_right
	step_end

# 26 "data/maps/Route101/scripts.pory"
Route1_Trigger_Prof_Attack_Event_Movement_7:
# 26 "data/maps/Route101/scripts.pory"
	delay_16
# 26 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 26 "data/maps/Route101/scripts.pory"
	face_left
	step_end

# 27 "data/maps/Route101/scripts.pory"
Route1_Trigger_Prof_Attack_Event_Movement_8:
# 27 "data/maps/Route101/scripts.pory"
	delay_4
# 27 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 27 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 27 "data/maps/Route101/scripts.pory"
	walk_fast_up
	step_end

# 29 "data/maps/Route101/scripts.pory"
Route1_Trigger_Prof_Attack_Event_Movement_9:
# 29 "data/maps/Route101/scripts.pory"
	face_right
# 29 "data/maps/Route101/scripts.pory"
	delay_16
	step_end

# 31 "data/maps/Route101/scripts.pory"
Route1_Trigger_Prof_Attack_Event_Movement_10:
# 31 "data/maps/Route101/scripts.pory"
	face_down
# 31 "data/maps/Route101/scripts.pory"
	delay_16
	step_end

Route1_Trigger_Prof_Attack_Event_Text_0:
# 14 "data/maps/Route101/scripts.pory"
	.string "???$"

Route1_Trigger_Prof_Attack_Event_Text_1:
# 15 "data/maps/Route101/scripts.pory"
	.string "H-HEEEELLPPP!!!$"

Route1_Trigger_Prof_Attack_Event_Text_2:
# 24 "data/maps/Route101/scripts.pory"
	.string "EEP$"

Route1_Trigger_Prof_Attack_Event_Text_3:
# 40 "data/maps/Route101/scripts.pory"
	.string "uh oh...$"
