LittlerootTown_MapScripts::
	.byte 0


Columbus_text_espeon_statue::
# 6 "data/maps/LittlerootTown/scripts.pory"
	lock
# 7 "data/maps/LittlerootTown/scripts.pory"
	msgbox Columbus_text_espeon_statue_Text_0, MSGBOX_SIGN
# 8 "data/maps/LittlerootTown/scripts.pory"
	release
	return


Columbus_text_umbreon_statue::
# 12 "data/maps/LittlerootTown/scripts.pory"
	lock
# 13 "data/maps/LittlerootTown/scripts.pory"
	msgbox Columbus_text_umbreon_statue_Text_0, MSGBOX_SIGN
# 14 "data/maps/LittlerootTown/scripts.pory"
	release
	return


Columbus_Trigger_Sister_Intro_Event::
# 20 "data/maps/LittlerootTown/scripts.pory"
	lock
# 21 "data/maps/LittlerootTown/scripts.pory"
	setspeaker SP_NAME_VIKI
# 22 "data/maps/LittlerootTown/scripts.pory"
	msgbox Columbus_Trigger_Sister_Intro_Event_Text_0, MSGBOX_NPC
# 23 "data/maps/LittlerootTown/scripts.pory"
	applymovement sisIntroOutSideOne, Columbus_Trigger_Sister_Intro_Event_Movement_0
# 24 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 25 "data/maps/LittlerootTown/scripts.pory"
	setspeaker SP_NAME_VIKI
# 26 "data/maps/LittlerootTown/scripts.pory"
	msgbox Columbus_Trigger_Sister_Intro_Event_Text_1, MSGBOX_NPC
# 27 "data/maps/LittlerootTown/scripts.pory"
	applymovement sisIntroOutSideOne, Columbus_Trigger_Sister_Intro_Event_Movement_1
# 28 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 29 "data/maps/LittlerootTown/scripts.pory"
	removeobject sisIntroOutSideOne
# 30 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 31 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_COLUMBUS_INTRO_STATE, 2
# 32 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	return


Columbus_Trigger_BlockPath::
# 38 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 39 "data/maps/LittlerootTown/scripts.pory"
	msgbox Columbus_Trigger_BlockPath_Text_0
# 40 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Columbus_Trigger_BlockPath_Movement_0
# 41 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 42 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	return


Columbus_Trigger_Sister_Outside_Libary::
# 46 "data/maps/LittlerootTown/scripts.pory"
	lock
# 47 "data/maps/LittlerootTown/scripts.pory"
	setspeaker SP_NAME_VIKI
# 48 "data/maps/LittlerootTown/scripts.pory"
	msgbox Columbus_Trigger_Sister_Outside_Libary_Text_0, MSGBOX_NPC
# 49 "data/maps/LittlerootTown/scripts.pory"
	setspeaker Columbus_Trigger_Sister_Outside_Libary_Text_1
# 50 "data/maps/LittlerootTown/scripts.pory"
	msgbox Columbus_Trigger_Sister_Outside_Libary_Text_2, MSGBOX_NPC
# 51 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 52 "data/maps/LittlerootTown/scripts.pory"
	playbgm MUS_HELP, TRUE
# 53 "data/maps/LittlerootTown/scripts.pory"
	applymovement sisIntroOutSideTwo, Columbus_Trigger_Sister_Outside_Libary_Movement_0
# 54 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Columbus_Trigger_Sister_Outside_Libary_Movement_0
# 55 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 56 "data/maps/LittlerootTown/scripts.pory"
	setspeaker SP_NAME_VIKI
# 57 "data/maps/LittlerootTown/scripts.pory"
	msgbox Columbus_Trigger_Sister_Outside_Libary_Text_3, MSGBOX_NPC
# 58 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Columbus_Trigger_Sister_Outside_Libary_Movement_1
# 59 "data/maps/LittlerootTown/scripts.pory"
	applymovement sisIntroOutSideTwo, Columbus_Trigger_Sister_Outside_Libary_Movement_2
# 60 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 61 "data/maps/LittlerootTown/scripts.pory"
	applymovement sisIntroOutSideTwo, Columbus_Trigger_Sister_Outside_Libary_Movement_3
# 62 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 63 "data/maps/LittlerootTown/scripts.pory"
	setspeaker SP_NAME_VIKI
# 64 "data/maps/LittlerootTown/scripts.pory"
	msgbox Columbus_Trigger_Sister_Outside_Libary_Text_4, MSGBOX_NPC
# 65 "data/maps/LittlerootTown/scripts.pory"
	applymovement sisIntroOutSideTwo, Columbus_Trigger_Sister_Outside_Libary_Movement_4
# 66 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Columbus_Trigger_Sister_Outside_Libary_Movement_5
# 67 "data/maps/LittlerootTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 68 "data/maps/LittlerootTown/scripts.pory"
	removeobject sisIntroOutSideTwo
# 69 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 70 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_COLUMBUS_INTRO_STATE, 2
# 71 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Columbus_Trigger_Sister_Outside_Libary_Movement_6
# 72 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_ROUTE101, 1, 26
# 76 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	return


# 23 "data/maps/LittlerootTown/scripts.pory"
Columbus_Trigger_Sister_Intro_Event_Movement_0:
# 23 "data/maps/LittlerootTown/scripts.pory"
	emote_exclamation_mark
# 23 "data/maps/LittlerootTown/scripts.pory"
	face_left
	step_end

# 27 "data/maps/LittlerootTown/scripts.pory"
Columbus_Trigger_Sister_Intro_Event_Movement_1:
# 27 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 27 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 27 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 27 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 27 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
	step_end

# 40 "data/maps/LittlerootTown/scripts.pory"
Columbus_Trigger_BlockPath_Movement_0:
# 40 "data/maps/LittlerootTown/scripts.pory"
	walk_left
	step_end

# 53 "data/maps/LittlerootTown/scripts.pory"
Columbus_Trigger_Sister_Outside_Libary_Movement_0:
# 53 "data/maps/LittlerootTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 58 "data/maps/LittlerootTown/scripts.pory"
Columbus_Trigger_Sister_Outside_Libary_Movement_1:
# 58 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 58 "data/maps/LittlerootTown/scripts.pory"
	face_left
	step_end

# 59 "data/maps/LittlerootTown/scripts.pory"
Columbus_Trigger_Sister_Outside_Libary_Movement_2:
# 59 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_down
# 59 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_down
# 59 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
	step_end

# 61 "data/maps/LittlerootTown/scripts.pory"
Columbus_Trigger_Sister_Outside_Libary_Movement_3:
# 61 "data/maps/LittlerootTown/scripts.pory"
	face_left
# 61 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 61 "data/maps/LittlerootTown/scripts.pory"
	face_right
	step_end

# 65 "data/maps/LittlerootTown/scripts.pory"
Columbus_Trigger_Sister_Outside_Libary_Movement_4:
# 65 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_down
# 65 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_down
# 65 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_down
	step_end

# 66 "data/maps/LittlerootTown/scripts.pory"
Columbus_Trigger_Sister_Outside_Libary_Movement_5:
# 66 "data/maps/LittlerootTown/scripts.pory"
	player_run_down
# 66 "data/maps/LittlerootTown/scripts.pory"
	player_run_down
# 66 "data/maps/LittlerootTown/scripts.pory"
	player_run_down
# 66 "data/maps/LittlerootTown/scripts.pory"
	player_run_down
# 66 "data/maps/LittlerootTown/scripts.pory"
	player_run_down
	step_end

# 71 "data/maps/LittlerootTown/scripts.pory"
Columbus_Trigger_Sister_Outside_Libary_Movement_6:
# 71 "data/maps/LittlerootTown/scripts.pory"
	face_right
	step_end

Columbus_text_espeon_statue_Text_0:
# 7 "data/maps/LittlerootTown/scripts.pory"
	.string "It's a sculpture of an Espeon made by a\n"
	.string "resident of Sprout Town$"

Columbus_text_umbreon_statue_Text_0:
# 13 "data/maps/LittlerootTown/scripts.pory"
	.string "It's a sculpture of an Umbreon made by\n"
	.string "a resident of Sprout Town$"

Columbus_Trigger_Sister_Intro_Event_Text_0:
# 22 "data/maps/LittlerootTown/scripts.pory"
	.string "sigh\p"
	.string "Terry... Why did I...$"

Columbus_Trigger_Sister_Intro_Event_Text_1:
# 26 "data/maps/LittlerootTown/scripts.pory"
	.string "um w-what are you staring at dweeb!?\n"
	.string "C-come on, let's get going already.$"

Columbus_Trigger_BlockPath_Text_0:
# 39 "data/maps/LittlerootTown/scripts.pory"
	.string "I shouldn't go too far without\na Pokemon$"

Columbus_Trigger_Sister_Outside_Libary_Text_0:
# 48 "data/maps/LittlerootTown/scripts.pory"
	.string "Geez finally.$"

Columbus_Trigger_Sister_Outside_Libary_Text_1:
# 49 "data/maps/LittlerootTown/scripts.pory"
	.string "???$"

Columbus_Trigger_Sister_Outside_Libary_Text_2:
# 50 "data/maps/LittlerootTown/scripts.pory"
	.string "HELP!$"

Columbus_Trigger_Sister_Outside_Libary_Text_3:
# 57 "data/maps/LittlerootTown/scripts.pory"
	.string "did you hear that?!$"

Columbus_Trigger_Sister_Outside_Libary_Text_4:
# 64 "data/maps/LittlerootTown/scripts.pory"
	.string "It sounds like someone needs help. Lets\n"
	.string "go check it out!$"
