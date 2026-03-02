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
	return


Route101_OnTransition::
# 17 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_2, 0
	return


Route101_EveryFrame::
# 22 "data/maps/Route101/scripts.pory"
	compare VAR_ROUTE101_STATE, 0
	goto_if_eq Route101_EveryFrame_1
	return

Route101_EveryFrame_1:
# 24 "data/maps/Route101/scripts.pory"
	lockall
# 25 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 26 "data/maps/Route101/scripts.pory"
	applymovement Sister, Route101_EveryFrame_Movement_0
# 27 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 29 "data/maps/Route101/scripts.pory"
	setspeaker SP_NAME_IDK
# 30 "data/maps/Route101/scripts.pory"
	msgbox Route101_EveryFrame_Text_0, MSGBOX_NPC
# 31 "data/maps/Route101/scripts.pory"
	applymovement prof, Route101_EveryFrame_Movement_1
# 32 "data/maps/Route101/scripts.pory"
	applymovement birdOne, Route101_EveryFrame_Movement_1
# 33 "data/maps/Route101/scripts.pory"
	applymovement birdTwo, Route101_EveryFrame_Movement_2
# 34 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 35 "data/maps/Route101/scripts.pory"
	applymovement prof, Route101_EveryFrame_Movement_3
# 36 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 37 "data/maps/Route101/scripts.pory"
	setspeaker SP_NAME_IDK
# 38 "data/maps/Route101/scripts.pory"
	msgbox Route101_EveryFrame_Text_1, MSGBOX_NPC
# 39 "data/maps/Route101/scripts.pory"
	applymovement prof, Route101_EveryFrame_Movement_4
# 40 "data/maps/Route101/scripts.pory"
	addobject 2, MAP_ROUTE101
# 42 "data/maps/Route101/scripts.pory"
	applymovement birdOne, Route101_EveryFrame_Movement_5
# 43 "data/maps/Route101/scripts.pory"
	applymovement birdTwo, Route101_EveryFrame_Movement_6
# 44 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 45 "data/maps/Route101/scripts.pory"
	applymovement prof, Route101_EveryFrame_Movement_7
# 46 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 47 "data/maps/Route101/scripts.pory"
	applymovement prof, Route101_EveryFrame_Movement_8
# 48 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 49 "data/maps/Route101/scripts.pory"
	applymovement prof, Route101_EveryFrame_Movement_7
# 50 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 51 "data/maps/Route101/scripts.pory"
	applymovement prof, Route101_EveryFrame_Movement_8
# 52 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 53 "data/maps/Route101/scripts.pory"
	applymovement prof, Route101_EveryFrame_Movement_7
# 54 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 55 "data/maps/Route101/scripts.pory"
	setspeaker SP_NAME_IDK
# 56 "data/maps/Route101/scripts.pory"
	msgbox Route101_EveryFrame_Text_2, MSGBOX_NPC
# 59 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
# 60 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_2, 1
# 61 "data/maps/Route101/scripts.pory"
	releaseall
	return


Route1_Trigger_Prof_Attack_Event::
# 67 "data/maps/Route101/scripts.pory"
	lockall
# 68 "data/maps/Route101/scripts.pory"
	removeobject 2
# 69 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 70 "data/maps/Route101/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 71 "data/maps/Route101/scripts.pory"
	applymovement Sister, Route1_Trigger_Prof_Attack_Event_Movement_0
# 72 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_Trigger_Prof_Attack_Event_Movement_1
# 73 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 74 "data/maps/Route101/scripts.pory"
	applymovement Sister, Route101_EveryFrame_Movement_0
# 75 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 76 "data/maps/Route101/scripts.pory"
	setspeaker SP_NAME_IDK
# 77 "data/maps/Route101/scripts.pory"
	msgbox Route101_EveryFrame_Text_0, MSGBOX_NPC
# 78 "data/maps/Route101/scripts.pory"
	applymovement prof, Route101_EveryFrame_Movement_1
# 79 "data/maps/Route101/scripts.pory"
	applymovement birdOne, Route101_EveryFrame_Movement_1
# 80 "data/maps/Route101/scripts.pory"
	applymovement birdTwo, Route101_EveryFrame_Movement_2
# 81 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 82 "data/maps/Route101/scripts.pory"
	applymovement prof, Route101_EveryFrame_Movement_3
# 83 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 84 "data/maps/Route101/scripts.pory"
	setspeaker SP_NAME_IDK
# 85 "data/maps/Route101/scripts.pory"
	msgbox Route101_EveryFrame_Text_1, MSGBOX_NPC
# 86 "data/maps/Route101/scripts.pory"
	addobject 2
# 87 "data/maps/Route101/scripts.pory"
	applymovement prof, Route101_EveryFrame_Movement_4
# 88 "data/maps/Route101/scripts.pory"
	applymovement birdOne, Route101_EveryFrame_Movement_5
# 89 "data/maps/Route101/scripts.pory"
	applymovement birdTwo, Route101_EveryFrame_Movement_6
# 90 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 91 "data/maps/Route101/scripts.pory"
	applymovement prof, Route101_EveryFrame_Movement_7
# 92 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 93 "data/maps/Route101/scripts.pory"
	applymovement prof, Route101_EveryFrame_Movement_8
# 94 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 95 "data/maps/Route101/scripts.pory"
	applymovement prof, Route101_EveryFrame_Movement_7
# 96 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 97 "data/maps/Route101/scripts.pory"
	applymovement prof, Route101_EveryFrame_Movement_8
# 98 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 99 "data/maps/Route101/scripts.pory"
	applymovement prof, Route101_EveryFrame_Movement_7
# 100 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 101 "data/maps/Route101/scripts.pory"
	setspeaker SP_NAME_IDK
# 102 "data/maps/Route101/scripts.pory"
	msgbox Route101_EveryFrame_Text_2, MSGBOX_NPC
# 105 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
# 106 "data/maps/Route101/scripts.pory"
	releaseall
	return


Route101_EventScript_tulips_Bag::
# 110 "data/maps/Route101/scripts.pory"
	lock
# 111 "data/maps/Route101/scripts.pory"
	setspeaker SP_NAME_VIKI
# 112 "data/maps/Route101/scripts.pory"
	applymovement Sister, Route101_EventScript_tulips_Bag_Movement_0
# 113 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 114 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_tulips_Bag_Text_0, MSGBOX_NPC
# 115 "data/maps/Route101/scripts.pory"
	applymovement Sister, Route101_EventScript_tulips_Bag_Movement_1
# 116 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 117 "data/maps/Route101/scripts.pory"
	setspeaker SP_NAME_VIKI
# 118 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_tulips_Bag_Text_1, MSGBOX_NPC
# 119 "data/maps/Route101/scripts.pory"
	waitmessage
# 120 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 121 "data/maps/Route101/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 122 "data/maps/Route101/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 123 "data/maps/Route101/scripts.pory"
	removeobject 5
# 124 "data/maps/Route101/scripts.pory"
	removeobject 6
# 125 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 126 "data/maps/Route101/scripts.pory"
	special ChooseStarter
# 127 "data/maps/Route101/scripts.pory"
	waitstate
# 128 "data/maps/Route101/scripts.pory"
	applymovement prof, Route101_EventScript_tulips_Bag_Movement_2
# 129 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 130 "data/maps/Route101/scripts.pory"
	removeobject 2
# 131 "data/maps/Route101/scripts.pory"
	setspeaker SP_NAME_PROF
# 132 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_tulips_Bag_Text_2, MSGBOX_NPC
# 133 "data/maps/Route101/scripts.pory"
	applymovement 8, Route101_EventScript_tulips_Bag_Movement_3
# 134 "data/maps/Route101/scripts.pory"
	setspeaker Route101_EventScript_tulips_Bag_Text_3
# 135 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_tulips_Bag_Text_4, MSGBOX_NPC
# 136 "data/maps/Route101/scripts.pory"
	applymovement prof, Route101_EveryFrame_Movement_0
# 137 "data/maps/Route101/scripts.pory"
	setspeaker SP_NAME_PROF
# 138 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_tulips_Bag_Text_5, MSGBOX_NPC
# 139 "data/maps/Route101/scripts.pory"
	applymovement prof, Route101_EventScript_tulips_Bag_Movement_4
# 140 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_tulips_Bag_Text_6, MSGBOX_NPC
# 141 "data/maps/Route101/scripts.pory"
	special HealPlayerParty
# 142 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 143 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 144 "data/maps/Route101/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 145 "data/maps/Route101/scripts.pory"
	warp MAP_SPROUT_LIBRARY, 9, 7
	return


Route101_Trigger_BlockPath_West::
# 150 "data/maps/Route101/scripts.pory"
	lock
# 151 "data/maps/Route101/scripts.pory"
	applymovement Sister, Route101_Trigger_BlockPath_West_Movement_0
# 152 "data/maps/Route101/scripts.pory"
	setspeaker SP_NAME_VIKI
# 153 "data/maps/Route101/scripts.pory"
	msgbox Route101_Trigger_BlockPath_West_Text_0, MSGBOX_NPC
# 154 "data/maps/Route101/scripts.pory"
	applymovement Sister, Route101_EveryFrame_Movement_0
# 155 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Trigger_BlockPath_West_Movement_1
# 156 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 157 "data/maps/Route101/scripts.pory"
	releaseall
	return


Route101_Trigger_BlockPath_East::
# 161 "data/maps/Route101/scripts.pory"
	lock
# 162 "data/maps/Route101/scripts.pory"
	applymovement Sister, Route101_Trigger_BlockPath_West_Movement_0
# 163 "data/maps/Route101/scripts.pory"
	setspeaker SP_NAME_VIKI
# 164 "data/maps/Route101/scripts.pory"
	msgbox Route101_Trigger_BlockPath_West_Text_0, MSGBOX_NPC
# 165 "data/maps/Route101/scripts.pory"
	applymovement Sister, Route101_EveryFrame_Movement_0
# 166 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Trigger_BlockPath_East_Movement_0
# 167 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 168 "data/maps/Route101/scripts.pory"
	releaseall
	return


Route101_Trigger_BlockPath_North::
# 172 "data/maps/Route101/scripts.pory"
	lock
# 173 "data/maps/Route101/scripts.pory"
	setspeaker SP_NAME_VIKI
# 174 "data/maps/Route101/scripts.pory"
	msgbox Route101_Trigger_BlockPath_North_Text_0, MSGBOX_NPC
# 175 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Trigger_BlockPath_North_Movement_0
# 176 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 177 "data/maps/Route101/scripts.pory"
	releaseall
	return


Route101_Trigger_BlockPath_NorthTwo::
# 181 "data/maps/Route101/scripts.pory"
	lock
# 182 "data/maps/Route101/scripts.pory"
	setspeaker SP_NAME_VIKI
# 183 "data/maps/Route101/scripts.pory"
	msgbox Route101_Trigger_BlockPath_North_Text_0, MSGBOX_NPC
# 184 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Trigger_BlockPath_East_Movement_0
# 185 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 186 "data/maps/Route101/scripts.pory"
	releaseall
	return


Route101_EventTest_VikiWhatDoWeDo::
# 190 "data/maps/Route101/scripts.pory"
	lock
# 191 "data/maps/Route101/scripts.pory"
	setspeaker SP_NAME_VIKI
# 192 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventTest_VikiWhatDoWeDo_Text_0, MSGBOX_NPC
# 193 "data/maps/Route101/scripts.pory"
	releaseall
	return


# 26 "data/maps/Route101/scripts.pory"
Route101_EveryFrame_Movement_0:
# 26 "data/maps/Route101/scripts.pory"
	face_up
	step_end

# 31 "data/maps/Route101/scripts.pory"
Route101_EveryFrame_Movement_1:
# 31 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 31 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 31 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 31 "data/maps/Route101/scripts.pory"
	walk_fast_down
	step_end

# 33 "data/maps/Route101/scripts.pory"
Route101_EveryFrame_Movement_2:
# 33 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 33 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 33 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 33 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 33 "data/maps/Route101/scripts.pory"
	walk_fast_left
	step_end

# 35 "data/maps/Route101/scripts.pory"
Route101_EveryFrame_Movement_3:
# 35 "data/maps/Route101/scripts.pory"
	jump_in_place_right
	step_end

# 39 "data/maps/Route101/scripts.pory"
Route101_EveryFrame_Movement_4:
# 39 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 39 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 39 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 39 "data/maps/Route101/scripts.pory"
	face_right
	step_end

# 42 "data/maps/Route101/scripts.pory"
Route101_EveryFrame_Movement_5:
# 42 "data/maps/Route101/scripts.pory"
	delay_16
# 42 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 42 "data/maps/Route101/scripts.pory"
	face_left
	step_end

# 43 "data/maps/Route101/scripts.pory"
Route101_EveryFrame_Movement_6:
# 43 "data/maps/Route101/scripts.pory"
	delay_4
# 43 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 43 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 43 "data/maps/Route101/scripts.pory"
	walk_fast_up
	step_end

# 45 "data/maps/Route101/scripts.pory"
Route101_EveryFrame_Movement_7:
# 45 "data/maps/Route101/scripts.pory"
	face_right
# 45 "data/maps/Route101/scripts.pory"
	delay_16
	step_end

# 47 "data/maps/Route101/scripts.pory"
Route101_EveryFrame_Movement_8:
# 47 "data/maps/Route101/scripts.pory"
	face_down
# 47 "data/maps/Route101/scripts.pory"
	delay_16
	step_end

# 71 "data/maps/Route101/scripts.pory"
Route1_Trigger_Prof_Attack_Event_Movement_0:
# 71 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 71 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 71 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 71 "data/maps/Route101/scripts.pory"
	walk_fast_right
	step_end

# 72 "data/maps/Route101/scripts.pory"
Route1_Trigger_Prof_Attack_Event_Movement_1:
# 72 "data/maps/Route101/scripts.pory"
	player_run_right
# 72 "data/maps/Route101/scripts.pory"
	player_run_right
# 72 "data/maps/Route101/scripts.pory"
	player_run_right
# 72 "data/maps/Route101/scripts.pory"
	player_run_right
# 72 "data/maps/Route101/scripts.pory"
	face_down
	step_end

# 112 "data/maps/Route101/scripts.pory"
Route101_EventScript_tulips_Bag_Movement_0:
# 112 "data/maps/Route101/scripts.pory"
	emote_question_mark
	step_end

# 115 "data/maps/Route101/scripts.pory"
Route101_EventScript_tulips_Bag_Movement_1:
# 115 "data/maps/Route101/scripts.pory"
	walk_up
# 115 "data/maps/Route101/scripts.pory"
	walk_up
# 115 "data/maps/Route101/scripts.pory"
	face_left
	step_end

# 128 "data/maps/Route101/scripts.pory"
Route101_EventScript_tulips_Bag_Movement_2:
# 128 "data/maps/Route101/scripts.pory"
	walk_right
# 128 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 133 "data/maps/Route101/scripts.pory"
Route101_EventScript_tulips_Bag_Movement_3:
# 133 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 133 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 133 "data/maps/Route101/scripts.pory"
	walk_fast_down
	step_end

# 139 "data/maps/Route101/scripts.pory"
Route101_EventScript_tulips_Bag_Movement_4:
# 139 "data/maps/Route101/scripts.pory"
	face_down
	step_end

# 151 "data/maps/Route101/scripts.pory"
Route101_Trigger_BlockPath_West_Movement_0:
# 151 "data/maps/Route101/scripts.pory"
	face_player
	step_end

# 155 "data/maps/Route101/scripts.pory"
Route101_Trigger_BlockPath_West_Movement_1:
# 155 "data/maps/Route101/scripts.pory"
	walk_right
	step_end

# 166 "data/maps/Route101/scripts.pory"
Route101_Trigger_BlockPath_East_Movement_0:
# 166 "data/maps/Route101/scripts.pory"
	walk_left
	step_end

# 175 "data/maps/Route101/scripts.pory"
Route101_Trigger_BlockPath_North_Movement_0:
# 175 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

Route101_EveryFrame_Text_0:
# 30 "data/maps/Route101/scripts.pory"
	.string "H-HEEEELLPPP!!!$"

Route101_EveryFrame_Text_1:
# 38 "data/maps/Route101/scripts.pory"
	.string "EEP$"

Route101_EveryFrame_Text_2:
# 56 "data/maps/Route101/scripts.pory"
	.string "uh oh...$"

Route101_EventScript_tulips_Bag_Text_0:
# 114 "data/maps/Route101/scripts.pory"
	.string "Wait...\p"
	.string "what are you?$"

Route101_EventScript_tulips_Bag_Text_1:
# 118 "data/maps/Route101/scripts.pory"
	.string "I'll grab one too, that way we can even\n"
	.string "the odds$"

Route101_EventScript_tulips_Bag_Text_2:
# 132 "data/maps/Route101/scripts.pory"
	.string "Wow! Thanks$"

Route101_EventScript_tulips_Bag_Text_3:
# 134 "data/maps/Route101/scripts.pory"
	.string "Lirio$"

Route101_EventScript_tulips_Bag_Text_4:
# 135 "data/maps/Route101/scripts.pory"
	.string "Tulip your ok!$"

Route101_EventScript_tulips_Bag_Text_5:
# 138 "data/maps/Route101/scripts.pory"
	.string "No thanks to you$"

Route101_EventScript_tulips_Bag_Text_6:
# 140 "data/maps/Route101/scripts.pory"
	.string "Now lets all go to the libary$"

Route101_Trigger_BlockPath_West_Text_0:
# 153 "data/maps/Route101/scripts.pory"
	.string "Where are you going? We can't just\n"
	.string "leave her here!$"

Route101_Trigger_BlockPath_North_Text_0:
# 174 "data/maps/Route101/scripts.pory"
	.string "Hey idiot, don't walk into the grass\n"
	.string "without Pokémon!$"

Route101_EventTest_VikiWhatDoWeDo_Text_0:
# 192 "data/maps/Route101/scripts.pory"
	.string "We gotta help her! But how?$"
