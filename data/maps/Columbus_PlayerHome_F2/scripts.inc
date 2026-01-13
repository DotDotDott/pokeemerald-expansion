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
# 38 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	setmetatile 2, 2, 0, 26
EveryFrameTest_1:
# 40 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	setvar VAR_TEMP_2, 1
	return

EveryFrameTest_2:
# 19 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 20 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	setmetatile 2, 2, 0, 26
# 21 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EveryFrameTest_Movement_0
# 22 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox EveryFrameTest_Text_0
# 23 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	waitmessage
# 24 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	closemessage
# 25 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EveryFrameTest_Movement_1
# 26 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	applymovement sisIntro, EveryFrameTest_Movement_2
# 27 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	waitmovement 0
# 28 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox EveryFrameTest_Text_1
# 29 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	closemessage
# 30 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	applymovement sisIntro, EveryFrameTest_Movement_3
# 31 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	waitmovement 0
# 32 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	removeobject sisIntro
# 33 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 34 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	setvar VAR_COLUMBUS_INTRO_STATE, 1
# 35 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	goto EveryFrameTest_1


PlayersHouse_2F_Text_Bookshelf::
# 44 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 45 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox PlayersHouse_2F_Text_Bookshelf_Text_0
# 46 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	return


PlayersHouse_2F_Text_BigTV::
# 50 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 51 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox PlayersHouse_2F_Text_BigTV_Text_0
# 52 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	return


PlayersHouse_2F_Text_Pikachu_Pic::
# 56 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 57 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox PlayersHouse_2F_Text_Pikachu_Pic_Text_0
# 58 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	return


PlayersHouse_2F_Text_Apple_Pic::
# 62 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 63 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox PlayersHouse_2F_Text_Apple_Pic_Text_0
# 64 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	return


PlayersHouse_2F_Text_Plant_One::
# 68 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 69 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox PlayersHouse_2F_Text_Plant_One_Text_0
# 70 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	return


PlayersHouse_2F_Text_Plant_Two::
# 74 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 75 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox PlayersHouse_2F_Text_Plant_Two_Text_0
# 76 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	return


PlayersHouse_2F_Text_Player_Bed::
# 80 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 81 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox PlayersHouse_2F_Text_Player_Bed_Text_0
# 82 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	return


PlayersHouse_2F_Text_Sis_PC::
# 86 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 87 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox PlayersHouse_2F_Text_Sis_PC_Text_0
# 90 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	return


PlayersHouse_2F_Text_Sis_Bookshelf_One::
# 94 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 95 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox PlayersHouse_2F_Text_Sis_Bookshelf_One_Text_0
# 98 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	return


PlayersHouse_2F_Text_Sis_Bookshelf_Two::
# 102 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 103 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox PlayersHouse_2F_Text_Sis_Bookshelf_Two_Text_0
# 106 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	return


PlayersHouse_2F_Text_Player_Sis_Bed::
# 110 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 111 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox PlayersHouse_2F_Text_Player_Sis_Bed_Text_0
# 114 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	return


PlayersHouse_2F_Annoyed_Sister::
# 120 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 121 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EveryFrameTest_Movement_0
# 122 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox EveryFrameTest_Text_0
# 123 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	waitmessage
# 124 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	applymovement sisIntro, EveryFrameTest_Movement_2
# 125 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	waitmovement 0
# 126 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox EveryFrameTest_Text_1
# 127 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	applymovement sisIntro, EveryFrameTest_Movement_3
# 128 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	waitmovement 0
# 129 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	removeobject sisIntro
# 130 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 132 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	return


OnTransition::
# 136 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox EveryFrameTest_Text_0
# 137 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	compare VAR_COLUMBUS_INTRO_STATE, 2
	goto_if_eq OnTransition_1
	return

OnTransition_1:
# 139 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 140 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EveryFrameTest_Movement_0
# 141 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox EveryFrameTest_Text_0
# 142 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	waitmessage
# 143 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	closemessage
# 144 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	applymovement sisIntro, EveryFrameTest_Movement_2
# 145 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	waitmovement 0
# 146 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox EveryFrameTest_Text_1
# 147 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	closemessage
# 148 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	applymovement sisIntro, EveryFrameTest_Movement_3
# 149 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	waitmovement 0
# 150 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	removeobject sisIntro
# 151 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 152 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	setvar VAR_COLUMBUS_INTRO_STATE, 1
# 153 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	return


# 21 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
EveryFrameTest_Movement_0:
# 21 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	face_up
	step_end

# 25 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
EveryFrameTest_Movement_1:
# 25 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	face_right
	step_end

# 26 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
EveryFrameTest_Movement_2:
# 26 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_up
# 26 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_up
# 26 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_up
# 26 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_up
# 26 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_up
# 26 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_up
# 26 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_up
# 26 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_left
# 26 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_left
# 26 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_left
# 26 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_left
	step_end

# 30 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
EveryFrameTest_Movement_3:
# 30 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_right
# 30 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_right
# 30 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_right
# 30 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_right
# 30 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_down
# 30 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_down
# 30 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_down
# 30 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_down
# 30 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_down
# 30 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_down
# 30 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_down
# 30 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_right
	step_end

EveryFrameTest_Text_0:
# 22 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "Sister: Hey you little brat.$"

EveryFrameTest_Text_1:
# 28 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "Sister: Let's go already$"

PlayersHouse_2F_Text_Bookshelf_Text_0:
# 45 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "You looked at your bookshelf.\p"
	.string "There are a bunch of books.$"

PlayersHouse_2F_Text_BigTV_Text_0:
# 51 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "now's not the time for TV.$"

PlayersHouse_2F_Text_Pikachu_Pic_Text_0:
# 57 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "It's a painting of a pikachu\n"
	.string "your mom made.$"

PlayersHouse_2F_Text_Apple_Pic_Text_0:
# 63 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "It's a painting of an Applin\n"
	.string "your dad made.$"

PlayersHouse_2F_Text_Plant_One_Text_0:
# 69 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "The trash can is empty$"

PlayersHouse_2F_Text_Plant_Two_Text_0:
# 75 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "The trash can is empty aswell$"

PlayersHouse_2F_Text_Player_Bed_Text_0:
# 81 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "It's your bed.\n"
	.string "Would you like to rest?\p"
	.string "add healing code here$"

PlayersHouse_2F_Text_Sis_PC_Text_0:
# 87 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "It's your sister's PC.\p"
	.string "Probably shouldn't go snooping\n"
	.string "around on here...\p"
	.string "again...$"

PlayersHouse_2F_Text_Sis_Bookshelf_One_Text_0:
# 95 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "It's one of your sister's bookshelves.\p"
	.string "There seems to be a lot of large comics\n"
	.string "featuring two men falling in love.$"

PlayersHouse_2F_Text_Sis_Bookshelf_Two_Text_0:
# 103 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "It's one of your sister's bookshelves.\p"
	.string "There seems to be a lot of large comics\n"
	.string "featuring two women falling in love.\p"
	.string "Especially a green one that seems to\n"
	.string "be well read.$"

PlayersHouse_2F_Text_Player_Sis_Bed_Text_0:
# 111 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "It's your sister's bed.\p"
	.string "It looks like she's been struggling\n"
	.string "to sleep well recently.$"
