Route101_MapScripts::
# 5 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route101_OnTransition
# 2 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route101_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 6 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route101_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route101_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/Route101/scripts.pory"
	map_script_2 VAR_TEMP_4, 0, Route101_OnWarp
	.2byte 0

Route101_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/Route101/scripts.pory"
	map_script_2 VAR_TEMP_2, 0, Route101_EveryFrame
	.2byte 0


Route101_OnWarp::
# 12 "data/maps/Route101/scripts.pory"
	hideobjectat 2, MAP_ROUTE101
# 13 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 14 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_OnWarp_Movement_0
# 15 "data/maps/Route101/scripts.pory"
	applymovement Sister, Route101_OnWarp_Movement_1
	return


Route101_OnTransition::
# 20 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_2, 0
	return


Route101_EveryFrame::
# 25 "data/maps/Route101/scripts.pory"
	compare VAR_ROUTE101_STATE, 0
	goto_if_eq Route101_EveryFrame_1
	return

Route101_EveryFrame_1:
# 27 "data/maps/Route101/scripts.pory"
	lockall
# 28 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 29 "data/maps/Route101/scripts.pory"
	applymovement Sister, Route101_EveryFrame_Movement_0
# 30 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 32 "data/maps/Route101/scripts.pory"
	setspeaker SP_NAME_IDK
# 33 "data/maps/Route101/scripts.pory"
	msgbox Route101_EveryFrame_Text_0, MSGBOX_NPC
# 34 "data/maps/Route101/scripts.pory"
	applymovement prof, Route101_EveryFrame_Movement_1
# 35 "data/maps/Route101/scripts.pory"
	applymovement birdOne, Route101_EveryFrame_Movement_1
# 36 "data/maps/Route101/scripts.pory"
	applymovement birdTwo, Route101_EveryFrame_Movement_2
# 37 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 38 "data/maps/Route101/scripts.pory"
	applymovement prof, Route101_EveryFrame_Movement_3
# 39 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 40 "data/maps/Route101/scripts.pory"
	setspeaker SP_NAME_IDK
# 41 "data/maps/Route101/scripts.pory"
	msgbox Route101_EveryFrame_Text_1, MSGBOX_NPC
# 42 "data/maps/Route101/scripts.pory"
	applymovement prof, Route101_EveryFrame_Movement_4
# 43 "data/maps/Route101/scripts.pory"
	showobjectat 2, MAP_ROUTE101
# 44 "data/maps/Route101/scripts.pory"
	applymovement birdOne, Route101_EveryFrame_Movement_5
# 45 "data/maps/Route101/scripts.pory"
	applymovement birdTwo, Route101_EveryFrame_Movement_6
# 46 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 47 "data/maps/Route101/scripts.pory"
	applymovement prof, Route101_EveryFrame_Movement_7
# 48 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 49 "data/maps/Route101/scripts.pory"
	applymovement prof, Route101_EveryFrame_Movement_8
# 50 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 51 "data/maps/Route101/scripts.pory"
	applymovement prof, Route101_EveryFrame_Movement_7
# 52 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 53 "data/maps/Route101/scripts.pory"
	applymovement prof, Route101_EveryFrame_Movement_8
# 54 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 55 "data/maps/Route101/scripts.pory"
	applymovement prof, Route101_EveryFrame_Movement_7
# 56 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 57 "data/maps/Route101/scripts.pory"
	setspeaker SP_NAME_IDK
# 58 "data/maps/Route101/scripts.pory"
	msgbox Route101_EveryFrame_Text_2, MSGBOX_NPC
# 61 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
# 62 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_2, 1
# 63 "data/maps/Route101/scripts.pory"
	releaseall
	return


Route1_Trigger_Prof_Attack_Event::
# 69 "data/maps/Route101/scripts.pory"
	lockall
# 70 "data/maps/Route101/scripts.pory"
	removeobject 2
# 71 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 72 "data/maps/Route101/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 73 "data/maps/Route101/scripts.pory"
	applymovement Sister, Route101_OnWarp_Movement_1
# 74 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_Trigger_Prof_Attack_Event_Movement_0
# 75 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 76 "data/maps/Route101/scripts.pory"
	applymovement Sister, Route101_EveryFrame_Movement_0
# 77 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 78 "data/maps/Route101/scripts.pory"
	setspeaker SP_NAME_IDK
# 79 "data/maps/Route101/scripts.pory"
	msgbox Route101_EveryFrame_Text_0, MSGBOX_NPC
# 80 "data/maps/Route101/scripts.pory"
	applymovement prof, Route101_EveryFrame_Movement_1
# 81 "data/maps/Route101/scripts.pory"
	applymovement birdOne, Route101_EveryFrame_Movement_1
# 82 "data/maps/Route101/scripts.pory"
	applymovement birdTwo, Route101_EveryFrame_Movement_2
# 83 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 84 "data/maps/Route101/scripts.pory"
	applymovement prof, Route101_EveryFrame_Movement_3
# 85 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 86 "data/maps/Route101/scripts.pory"
	setspeaker SP_NAME_IDK
# 87 "data/maps/Route101/scripts.pory"
	msgbox Route101_EveryFrame_Text_1, MSGBOX_NPC
# 88 "data/maps/Route101/scripts.pory"
	addobject 2
# 89 "data/maps/Route101/scripts.pory"
	applymovement prof, Route101_EveryFrame_Movement_4
# 90 "data/maps/Route101/scripts.pory"
	applymovement birdOne, Route101_EveryFrame_Movement_5
# 91 "data/maps/Route101/scripts.pory"
	applymovement birdTwo, Route101_EveryFrame_Movement_6
# 92 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 93 "data/maps/Route101/scripts.pory"
	applymovement prof, Route101_EveryFrame_Movement_7
# 94 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 95 "data/maps/Route101/scripts.pory"
	applymovement prof, Route101_EveryFrame_Movement_8
# 96 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 97 "data/maps/Route101/scripts.pory"
	applymovement prof, Route101_EveryFrame_Movement_7
# 98 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 99 "data/maps/Route101/scripts.pory"
	applymovement prof, Route101_EveryFrame_Movement_8
# 100 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 101 "data/maps/Route101/scripts.pory"
	applymovement prof, Route101_EveryFrame_Movement_7
# 102 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 103 "data/maps/Route101/scripts.pory"
	setspeaker SP_NAME_IDK
# 104 "data/maps/Route101/scripts.pory"
	msgbox Route101_EveryFrame_Text_2, MSGBOX_NPC
# 107 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
# 108 "data/maps/Route101/scripts.pory"
	releaseall
	return


Route101_EventScript_tulips_Bag::
# 112 "data/maps/Route101/scripts.pory"
	lock
# 113 "data/maps/Route101/scripts.pory"
	setspeaker SP_NAME_VIKI
# 114 "data/maps/Route101/scripts.pory"
	applymovement Sister, Route101_EventScript_tulips_Bag_Movement_0
# 115 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 116 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_tulips_Bag_Text_0, MSGBOX_NPC
# 117 "data/maps/Route101/scripts.pory"
	applymovement Sister, Route101_EventScript_tulips_Bag_Movement_1
# 118 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 119 "data/maps/Route101/scripts.pory"
	setspeaker SP_NAME_VIKI
# 120 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_tulips_Bag_Text_1, MSGBOX_NPC
# 121 "data/maps/Route101/scripts.pory"
	waitmessage
# 122 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 123 "data/maps/Route101/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 124 "data/maps/Route101/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 125 "data/maps/Route101/scripts.pory"
	removeobject 5
# 126 "data/maps/Route101/scripts.pory"
	removeobject 6
# 127 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 128 "data/maps/Route101/scripts.pory"
	special ChooseStarter
# 129 "data/maps/Route101/scripts.pory"
	waitstate
# 130 "data/maps/Route101/scripts.pory"
	applymovement prof, Route101_EventScript_tulips_Bag_Movement_2
# 131 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 132 "data/maps/Route101/scripts.pory"
	removeobject 2
# 133 "data/maps/Route101/scripts.pory"
	setspeaker SP_NAME_PROF
# 134 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_tulips_Bag_Text_2, MSGBOX_NPC
# 135 "data/maps/Route101/scripts.pory"
	applymovement 8, Route101_EventScript_tulips_Bag_Movement_3
# 136 "data/maps/Route101/scripts.pory"
	setspeaker Route101_EventScript_tulips_Bag_Text_3
# 137 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_tulips_Bag_Text_4, MSGBOX_NPC
# 138 "data/maps/Route101/scripts.pory"
	applymovement prof, Route101_EveryFrame_Movement_0
# 139 "data/maps/Route101/scripts.pory"
	setspeaker SP_NAME_PROF
# 140 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_tulips_Bag_Text_5, MSGBOX_NPC
# 141 "data/maps/Route101/scripts.pory"
	applymovement prof, Route101_EventScript_tulips_Bag_Movement_4
# 142 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_tulips_Bag_Text_6, MSGBOX_NPC
# 143 "data/maps/Route101/scripts.pory"
	special HealPlayerParty
# 144 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 145 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 146 "data/maps/Route101/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 147 "data/maps/Route101/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 9, 8
	return


Route101_Trigger_BlockPath_West::
# 152 "data/maps/Route101/scripts.pory"
	lock
# 153 "data/maps/Route101/scripts.pory"
	applymovement Sister, Route101_Trigger_BlockPath_West_Movement_0
# 154 "data/maps/Route101/scripts.pory"
	setspeaker SP_NAME_VIKI
# 155 "data/maps/Route101/scripts.pory"
	msgbox Route101_Trigger_BlockPath_West_Text_0, MSGBOX_NPC
# 156 "data/maps/Route101/scripts.pory"
	applymovement Sister, Route101_EveryFrame_Movement_0
# 157 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Trigger_BlockPath_West_Movement_1
# 158 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 159 "data/maps/Route101/scripts.pory"
	releaseall
	return


Route101_Trigger_BlockPath_East::
# 163 "data/maps/Route101/scripts.pory"
	lock
# 164 "data/maps/Route101/scripts.pory"
	applymovement Sister, Route101_Trigger_BlockPath_West_Movement_0
# 165 "data/maps/Route101/scripts.pory"
	setspeaker SP_NAME_VIKI
# 166 "data/maps/Route101/scripts.pory"
	msgbox Route101_Trigger_BlockPath_West_Text_0, MSGBOX_NPC
# 167 "data/maps/Route101/scripts.pory"
	applymovement Sister, Route101_EveryFrame_Movement_0
# 168 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Trigger_BlockPath_East_Movement_0
# 169 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 170 "data/maps/Route101/scripts.pory"
	releaseall
	return


Route101_Trigger_BlockPath_North::
# 174 "data/maps/Route101/scripts.pory"
	lock
# 175 "data/maps/Route101/scripts.pory"
	setspeaker SP_NAME_VIKI
# 176 "data/maps/Route101/scripts.pory"
	msgbox Route101_Trigger_BlockPath_North_Text_0, MSGBOX_NPC
# 177 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Trigger_BlockPath_North_Movement_0
# 178 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 179 "data/maps/Route101/scripts.pory"
	releaseall
	return


Route101_Trigger_BlockPath_NorthTwo::
# 183 "data/maps/Route101/scripts.pory"
	lock
# 184 "data/maps/Route101/scripts.pory"
	setspeaker SP_NAME_VIKI
# 185 "data/maps/Route101/scripts.pory"
	msgbox Route101_Trigger_BlockPath_North_Text_0, MSGBOX_NPC
# 186 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Trigger_BlockPath_East_Movement_0
# 187 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 188 "data/maps/Route101/scripts.pory"
	releaseall
	return


Route101_EventTest_VikiWhatDoWeDo::
# 192 "data/maps/Route101/scripts.pory"
	lock
# 193 "data/maps/Route101/scripts.pory"
	setspeaker SP_NAME_VIKI
# 194 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventTest_VikiWhatDoWeDo_Text_0, MSGBOX_NPC
# 195 "data/maps/Route101/scripts.pory"
	releaseall
	return


# 14 "data/maps/Route101/scripts.pory"
Route101_OnWarp_Movement_0:
# 14 "data/maps/Route101/scripts.pory"
	player_run_right
# 14 "data/maps/Route101/scripts.pory"
	player_run_right
# 14 "data/maps/Route101/scripts.pory"
	player_run_right
# 14 "data/maps/Route101/scripts.pory"
	player_run_right
# 14 "data/maps/Route101/scripts.pory"
	player_run_right
# 14 "data/maps/Route101/scripts.pory"
	face_down
	step_end

# 15 "data/maps/Route101/scripts.pory"
Route101_OnWarp_Movement_1:
# 15 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 15 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 15 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 15 "data/maps/Route101/scripts.pory"
	walk_fast_right
	step_end

# 29 "data/maps/Route101/scripts.pory"
Route101_EveryFrame_Movement_0:
# 29 "data/maps/Route101/scripts.pory"
	face_up
	step_end

# 34 "data/maps/Route101/scripts.pory"
Route101_EveryFrame_Movement_1:
# 34 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 34 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 34 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 34 "data/maps/Route101/scripts.pory"
	walk_fast_down
	step_end

# 36 "data/maps/Route101/scripts.pory"
Route101_EveryFrame_Movement_2:
# 36 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 36 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 36 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 36 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 36 "data/maps/Route101/scripts.pory"
	walk_fast_left
	step_end

# 38 "data/maps/Route101/scripts.pory"
Route101_EveryFrame_Movement_3:
# 38 "data/maps/Route101/scripts.pory"
	jump_in_place_right
	step_end

# 42 "data/maps/Route101/scripts.pory"
Route101_EveryFrame_Movement_4:
# 42 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 42 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 42 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 42 "data/maps/Route101/scripts.pory"
	face_right
	step_end

# 44 "data/maps/Route101/scripts.pory"
Route101_EveryFrame_Movement_5:
# 44 "data/maps/Route101/scripts.pory"
	delay_16
# 44 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 44 "data/maps/Route101/scripts.pory"
	face_left
	step_end

# 45 "data/maps/Route101/scripts.pory"
Route101_EveryFrame_Movement_6:
# 45 "data/maps/Route101/scripts.pory"
	delay_4
# 45 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 45 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 45 "data/maps/Route101/scripts.pory"
	walk_fast_up
	step_end

# 47 "data/maps/Route101/scripts.pory"
Route101_EveryFrame_Movement_7:
# 47 "data/maps/Route101/scripts.pory"
	face_right
# 47 "data/maps/Route101/scripts.pory"
	delay_16
	step_end

# 49 "data/maps/Route101/scripts.pory"
Route101_EveryFrame_Movement_8:
# 49 "data/maps/Route101/scripts.pory"
	face_down
# 49 "data/maps/Route101/scripts.pory"
	delay_16
	step_end

# 74 "data/maps/Route101/scripts.pory"
Route1_Trigger_Prof_Attack_Event_Movement_0:
# 74 "data/maps/Route101/scripts.pory"
	player_run_right
# 74 "data/maps/Route101/scripts.pory"
	player_run_right
# 74 "data/maps/Route101/scripts.pory"
	player_run_right
# 74 "data/maps/Route101/scripts.pory"
	player_run_right
# 74 "data/maps/Route101/scripts.pory"
	face_down
	step_end

# 114 "data/maps/Route101/scripts.pory"
Route101_EventScript_tulips_Bag_Movement_0:
# 114 "data/maps/Route101/scripts.pory"
	emote_question_mark
	step_end

# 117 "data/maps/Route101/scripts.pory"
Route101_EventScript_tulips_Bag_Movement_1:
# 117 "data/maps/Route101/scripts.pory"
	walk_up
# 117 "data/maps/Route101/scripts.pory"
	walk_up
# 117 "data/maps/Route101/scripts.pory"
	face_left
	step_end

# 130 "data/maps/Route101/scripts.pory"
Route101_EventScript_tulips_Bag_Movement_2:
# 130 "data/maps/Route101/scripts.pory"
	walk_right
# 130 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 135 "data/maps/Route101/scripts.pory"
Route101_EventScript_tulips_Bag_Movement_3:
# 135 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 135 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 135 "data/maps/Route101/scripts.pory"
	walk_fast_down
	step_end

# 141 "data/maps/Route101/scripts.pory"
Route101_EventScript_tulips_Bag_Movement_4:
# 141 "data/maps/Route101/scripts.pory"
	face_down
	step_end

# 153 "data/maps/Route101/scripts.pory"
Route101_Trigger_BlockPath_West_Movement_0:
# 153 "data/maps/Route101/scripts.pory"
	face_player
	step_end

# 157 "data/maps/Route101/scripts.pory"
Route101_Trigger_BlockPath_West_Movement_1:
# 157 "data/maps/Route101/scripts.pory"
	walk_right
	step_end

# 168 "data/maps/Route101/scripts.pory"
Route101_Trigger_BlockPath_East_Movement_0:
# 168 "data/maps/Route101/scripts.pory"
	walk_left
	step_end

# 177 "data/maps/Route101/scripts.pory"
Route101_Trigger_BlockPath_North_Movement_0:
# 177 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

Route101_EveryFrame_Text_0:
# 33 "data/maps/Route101/scripts.pory"
	.string "H-HEEEELLPPP!!!$"

Route101_EveryFrame_Text_1:
# 41 "data/maps/Route101/scripts.pory"
	.string "EEP$"

Route101_EveryFrame_Text_2:
# 58 "data/maps/Route101/scripts.pory"
	.string "uh oh...$"

Route101_EventScript_tulips_Bag_Text_0:
# 116 "data/maps/Route101/scripts.pory"
	.string "Wait...\p"
	.string "what are you?$"

Route101_EventScript_tulips_Bag_Text_1:
# 120 "data/maps/Route101/scripts.pory"
	.string "I'll grab one too, that way we can even\n"
	.string "the odds$"

Route101_EventScript_tulips_Bag_Text_2:
# 134 "data/maps/Route101/scripts.pory"
	.string "Wow! Thanks$"

Route101_EventScript_tulips_Bag_Text_3:
# 136 "data/maps/Route101/scripts.pory"
	.string "Lirio$"

Route101_EventScript_tulips_Bag_Text_4:
# 137 "data/maps/Route101/scripts.pory"
	.string "Tulip your ok!$"

Route101_EventScript_tulips_Bag_Text_5:
# 140 "data/maps/Route101/scripts.pory"
	.string "No thanks to you$"

Route101_EventScript_tulips_Bag_Text_6:
# 142 "data/maps/Route101/scripts.pory"
	.string "Now lets all go to the libary$"

Route101_Trigger_BlockPath_West_Text_0:
# 155 "data/maps/Route101/scripts.pory"
	.string "Where are you going? We can't just\n"
	.string "leave her here!$"

Route101_Trigger_BlockPath_North_Text_0:
# 176 "data/maps/Route101/scripts.pory"
	.string "Hey idiot, don't walk into the grass\n"
	.string "without Pokémon!$"

Route101_EventTest_VikiWhatDoWeDo_Text_0:
# 194 "data/maps/Route101/scripts.pory"
	.string "We gotta help her! But how?$"
