Columbus_PlayerHome_F2_MapScripts::
# 2 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OnTransitionTest
# 3 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Columbus_PlayerHome_F2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Columbus_PlayerHome_F2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	map_script_2 VAR_TEMP_2, 0, EveryFrameTest
	.2byte 0


OnTransitionTest::
# 12 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	setvar VAR_TEMP_2, 0
	return


EveryFrameTest::
# 17 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	compare VAR_COLUMBUS_INTRO_STATE, 0
	goto_if_eq EveryFrameTest_2
# 42 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	setmetatile 2, 2, 0, 26
EveryFrameTest_1:
# 44 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	setvar VAR_TEMP_2, 1
	return

EveryFrameTest_2:
# 19 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 20 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	setmetatile 2, 2, 0, 26
# 21 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 22 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 23 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EveryFrameTest_Movement_0
# 24 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	setspeaker EveryFrameTest_Text_0
# 25 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox EveryFrameTest_Text_1
# 26 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	waitmessage
# 27 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	closemessage
# 28 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EveryFrameTest_Movement_1
# 29 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	applymovement sisIntro, EveryFrameTest_Movement_2
# 30 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	waitmovement 0
# 31 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	setspeaker EveryFrameTest_Text_0
# 32 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox EveryFrameTest_Text_2
# 33 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	closemessage
# 34 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	applymovement sisIntro, EveryFrameTest_Movement_3
# 35 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	waitmovement 0
# 36 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	removeobject sisIntro
# 37 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 38 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	setvar VAR_COLUMBUS_INTRO_STATE, 1
# 39 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	goto EveryFrameTest_1


PlayersHouse_2F_Text_Bookshelf::
# 48 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 49 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox PlayersHouse_2F_Text_Bookshelf_Text_0
# 50 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	return


PlayersHouse_2F_Text_BigTV::
# 54 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 55 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox PlayersHouse_2F_Text_BigTV_Text_0
# 56 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	return


PlayersHouse_2F_Text_Pikachu_Pic::
# 60 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 61 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox PlayersHouse_2F_Text_Pikachu_Pic_Text_0
# 62 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	return


PlayersHouse_2F_Text_Apple_Pic::
# 66 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 67 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox PlayersHouse_2F_Text_Apple_Pic_Text_0
# 68 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	return


PlayersHouse_2F_Text_Plant_One::
# 72 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 73 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox PlayersHouse_2F_Text_Plant_One_Text_0
# 74 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	return


PlayersHouse_2F_Text_Plant_Two::
# 78 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 79 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox PlayersHouse_2F_Text_Plant_Two_Text_0
# 80 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	return


PlayersHouse_2F_Text_Player_Bed::
# 84 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 85 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox PlayersHouse_2F_Text_Player_Bed_Text_0
# 86 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	return


PlayersHouse_2F_Text_Sis_PC::
# 90 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 91 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox PlayersHouse_2F_Text_Sis_PC_Text_0
# 94 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	return


PlayersHouse_2F_Text_Sis_Bookshelf_One::
# 98 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 99 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox PlayersHouse_2F_Text_Sis_Bookshelf_One_Text_0
# 102 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	return


PlayersHouse_2F_Text_Sis_Bookshelf_Two::
# 106 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 107 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox PlayersHouse_2F_Text_Sis_Bookshelf_Two_Text_0
# 110 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	return


PlayersHouse_2F_Text_Player_Sis_Bed::
# 114 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 115 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox PlayersHouse_2F_Text_Player_Sis_Bed_Text_0
# 118 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	return


PlayersHouse_2F_Annoyed_Sister::
# 124 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 125 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EveryFrameTest_Movement_0
# 126 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox PlayersHouse_2F_Annoyed_Sister_Text_0
# 127 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	waitmessage
# 128 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	applymovement sisIntro, EveryFrameTest_Movement_2
# 129 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	waitmovement 0
# 130 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox PlayersHouse_2F_Annoyed_Sister_Text_1
# 131 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	applymovement sisIntro, EveryFrameTest_Movement_3
# 132 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	waitmovement 0
# 133 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	removeobject sisIntro
# 134 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 136 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	return


OnTransition::
# 140 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox PlayersHouse_2F_Annoyed_Sister_Text_0
# 141 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	compare VAR_COLUMBUS_INTRO_STATE, 2
	goto_if_eq OnTransition_1
	return

OnTransition_1:
# 143 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 144 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EveryFrameTest_Movement_0
# 145 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox PlayersHouse_2F_Annoyed_Sister_Text_0
# 146 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	waitmessage
# 147 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	closemessage
# 148 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	applymovement sisIntro, EveryFrameTest_Movement_2
# 149 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	waitmovement 0
# 150 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox PlayersHouse_2F_Annoyed_Sister_Text_1
# 151 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	closemessage
# 152 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	applymovement sisIntro, EveryFrameTest_Movement_3
# 153 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	waitmovement 0
# 154 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	removeobject sisIntro
# 155 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 156 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	setvar VAR_COLUMBUS_INTRO_STATE, 1
# 157 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	return


# 23 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
EveryFrameTest_Movement_0:
# 23 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	face_up
	step_end

# 28 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
EveryFrameTest_Movement_1:
# 28 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	face_right
	step_end

# 29 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
EveryFrameTest_Movement_2:
# 29 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_up
# 29 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_up
# 29 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_up
# 29 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_up
# 29 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_up
# 29 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_up
# 29 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_up
# 29 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_left
# 29 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_left
# 29 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_left
# 29 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_left
	step_end

# 34 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
EveryFrameTest_Movement_3:
# 34 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_right
# 34 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_right
# 34 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_right
# 34 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_right
# 34 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_down
# 34 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_down
# 34 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_down
# 34 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_down
# 34 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_down
# 34 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_down
# 34 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_down
# 34 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_right
	step_end

EveryFrameTest_Text_0:
# 24 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "Viki$"

EveryFrameTest_Text_1:
# 25 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "Hey you little brat.$"

EveryFrameTest_Text_2:
# 32 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "Let's go already$"

PlayersHouse_2F_Text_Bookshelf_Text_0:
# 49 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "You looked at your bookshelf.\p"
	.string "There are a bunch of books.$"

PlayersHouse_2F_Text_BigTV_Text_0:
# 55 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "now's not the time for TV.$"

PlayersHouse_2F_Text_Pikachu_Pic_Text_0:
# 61 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "It's a painting of a pikachu\n"
	.string "your mom made.$"

PlayersHouse_2F_Text_Apple_Pic_Text_0:
# 67 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "It's a painting of an Applin\n"
	.string "your dad made.$"

PlayersHouse_2F_Text_Plant_One_Text_0:
# 73 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "The trash can is empty/$"

PlayersHouse_2F_Text_Plant_Two_Text_0:
# 79 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "The trash can is empty as well/$"

PlayersHouse_2F_Text_Player_Bed_Text_0:
# 85 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "It's your bed.\n"
	.string "Would you like to rest?\p"
	.string "add healing code here$"

PlayersHouse_2F_Text_Sis_PC_Text_0:
# 91 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "It's your sister's PC.\p Probably shouldn't go snooping\n around on here...\p again...$"

PlayersHouse_2F_Text_Sis_Bookshelf_One_Text_0:
# 99 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "It's one of your sister's bookshelves.\p There seems to be a lot of large comics\n featuring two men falling in love.$"

PlayersHouse_2F_Text_Sis_Bookshelf_Two_Text_0:
# 107 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "It's one of your sister's bookshelves.\pThere seems to be a lot of large comics\n featuring two women falling in love.\p Especially a green one that seems to\n be well read.$"

PlayersHouse_2F_Text_Player_Sis_Bed_Text_0:
# 115 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "It's your sister's bed.\p It looks like she's been struggling\n to sleep well recently.$"

PlayersHouse_2F_Annoyed_Sister_Text_0:
# 126 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "Sister: Hey you little brat.$"

PlayersHouse_2F_Annoyed_Sister_Text_1:
# 130 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "Sister: Let's go already$"
