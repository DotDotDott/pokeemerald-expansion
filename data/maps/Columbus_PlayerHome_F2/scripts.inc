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
# 39 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	setmetatile 2, 2, 0, 26
EveryFrameTest_1:
# 41 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
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
# 27 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	applymovement 2, EveryFrameTest_Movement_2
# 28 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	waitmovement 0
# 29 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox EveryFrameTest_Text_1
# 30 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	closemessage
# 31 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	applymovement sisIntro, EveryFrameTest_Movement_3
# 32 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	waitmovement 0
# 33 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	removeobject sisIntro
# 34 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 35 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	setvar VAR_COLUMBUS_INTRO_STATE, 1
# 36 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	goto EveryFrameTest_1


PlayersHouse_2F_Text_Bookshelf::
# 45 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 46 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox PlayersHouse_2F_Text_Bookshelf_Text_0
# 47 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	return


PlayersHouse_2F_Text_BigTV::
# 51 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 52 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox PlayersHouse_2F_Text_BigTV_Text_0
# 53 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	return


PlayersHouse_2F_Text_Pikachu_Pic::
# 57 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 58 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox PlayersHouse_2F_Text_Pikachu_Pic_Text_0
# 59 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	return


PlayersHouse_2F_Text_Apple_Pic::
# 63 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 64 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox PlayersHouse_2F_Text_Apple_Pic_Text_0
# 65 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	return


PlayersHouse_2F_Text_Plant_One::
# 69 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 70 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox PlayersHouse_2F_Text_Plant_One_Text_0
# 71 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	return


PlayersHouse_2F_Text_Plant_Two::
# 75 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 76 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox PlayersHouse_2F_Text_Plant_Two_Text_0
# 77 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	return


PlayersHouse_2F_Text_Player_Bed::
# 81 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 82 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox PlayersHouse_2F_Text_Player_Bed_Text_0
# 83 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	return


PlayersHouse_2F_Text_Sis_PC::
# 87 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 88 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox PlayersHouse_2F_Text_Sis_PC_Text_0
# 91 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	return


PlayersHouse_2F_Text_Sis_Bookshelf_One::
# 95 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 96 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox PlayersHouse_2F_Text_Sis_Bookshelf_One_Text_0
# 99 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	return


PlayersHouse_2F_Text_Sis_Bookshelf_Two::
# 103 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 104 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox PlayersHouse_2F_Text_Sis_Bookshelf_Two_Text_0
# 107 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	return


PlayersHouse_2F_Text_Player_Sis_Bed::
# 111 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 112 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox PlayersHouse_2F_Text_Player_Sis_Bed_Text_0
# 115 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	return


PlayersHouse_2F_Annoyed_Sister::
# 121 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 122 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EveryFrameTest_Movement_0
# 123 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox EveryFrameTest_Text_0
# 124 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	waitmessage
# 125 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	applymovement sisIntro, PlayersHouse_2F_Annoyed_Sister_Movement_0
# 126 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	waitmovement 0
# 127 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox EveryFrameTest_Text_1
# 128 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	applymovement sisIntro, EveryFrameTest_Movement_3
# 129 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	waitmovement 0
# 130 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	removeobject sisIntro
# 131 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 133 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	return


OnTransition::
# 137 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox EveryFrameTest_Text_0
# 138 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	compare VAR_COLUMBUS_INTRO_STATE, 2
	goto_if_eq OnTransition_1
	return

OnTransition_1:
# 140 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 141 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EveryFrameTest_Movement_0
# 142 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox EveryFrameTest_Text_0
# 143 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	waitmessage
# 144 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	closemessage
# 145 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	applymovement sisIntro, PlayersHouse_2F_Annoyed_Sister_Movement_0
# 146 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	waitmovement 0
# 147 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox EveryFrameTest_Text_1
# 148 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	closemessage
# 149 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	applymovement sisIntro, EveryFrameTest_Movement_3
# 150 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	waitmovement 0
# 151 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	removeobject sisIntro
# 152 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 153 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	setvar VAR_COLUMBUS_INTRO_STATE, 1
# 154 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
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

# 27 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
EveryFrameTest_Movement_2:
# 27 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	emote_question_mark
	step_end

# 31 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
EveryFrameTest_Movement_3:
# 31 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_right
# 31 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_right
# 31 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_right
# 31 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_right
# 31 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_down
# 31 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_down
# 31 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_down
# 31 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_down
# 31 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_down
# 31 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_down
# 31 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_down
# 31 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_right
	step_end

# 125 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
PlayersHouse_2F_Annoyed_Sister_Movement_0:
# 125 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_up
# 125 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_up
# 125 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_up
# 125 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_up
# 125 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_up
# 125 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_up
# 125 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_up
# 125 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_left
# 125 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_left
# 125 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_left
# 125 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_left
	step_end

EveryFrameTest_Text_0:
# 22 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "Sister: Hey you little brat.$"

EveryFrameTest_Text_1:
# 29 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "Sister: Let's go already$"

PlayersHouse_2F_Text_Bookshelf_Text_0:
# 46 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "You looked at your bookshelf.\p"
	.string "There are a bunch of books.$"

PlayersHouse_2F_Text_BigTV_Text_0:
# 52 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "now's not the time for TV.$"

PlayersHouse_2F_Text_Pikachu_Pic_Text_0:
# 58 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "It's a painting of a pikachu\n"
	.string "your mom made.$"

PlayersHouse_2F_Text_Apple_Pic_Text_0:
# 64 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "It's a painting of an Applin\n"
	.string "your dad made.$"

PlayersHouse_2F_Text_Plant_One_Text_0:
# 70 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "The trash can is empty$"

PlayersHouse_2F_Text_Plant_Two_Text_0:
# 76 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "The trash can is empty aswell$"

PlayersHouse_2F_Text_Player_Bed_Text_0:
# 82 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "It's your bed.\n"
	.string "Would you like to rest?\p"
	.string "add healing code here$"

PlayersHouse_2F_Text_Sis_PC_Text_0:
# 88 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "It's your sister's PC.\p"
	.string "Probably shouldn't go snooping\n"
	.string "around on here...\p"
	.string "again...$"

PlayersHouse_2F_Text_Sis_Bookshelf_One_Text_0:
# 96 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "It's one of your sister's bookshelves.\p"
	.string "There seems to be a lot of large comics\n"
	.string "featuring two men falling in love.$"

PlayersHouse_2F_Text_Sis_Bookshelf_Two_Text_0:
# 104 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "It's one of your sister's bookshelves.\p"
	.string "There seems to be a lot of large comics\n"
	.string "featuring two women falling in love.\p"
	.string "Especially a green one that seems to\n"
	.string "be well read.$"

PlayersHouse_2F_Text_Player_Sis_Bed_Text_0:
# 112 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "It's your sister's bed.\p"
	.string "It looks like she's been struggling\n"
	.string "to sleep well recently.$"
