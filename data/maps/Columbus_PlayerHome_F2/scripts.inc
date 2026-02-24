Columbus_PlayerHome_F2_MapScripts::
# 5 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OnTransitionTest
# 2 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Columbus_PlayerHome_F2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 6 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Columbus_PlayerHome_F2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Columbus_PlayerHome_F2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	map_script_2 VAR_TEMP_4, 0, trigger_test
	.2byte 0

Columbus_PlayerHome_F2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	map_script_2 VAR_TEMP_2, 0, EveryFrameTest
	.2byte 0


test_OnWarp::
	return


trigger_test::
# 21 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, trigger_test_Movement_0
	return


OnTransitionTest::
# 28 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	setvar VAR_TEMP_2, 0
	return


EveryFrameTest::
# 33 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	compare VAR_COLUMBUS_INTRO_STATE, 0
	goto_if_eq EveryFrameTest_2
EveryFrameTest_1:
# 60 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	setvar VAR_TEMP_2, 1
	return

EveryFrameTest_2:
# 35 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 37 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 38 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 40 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	setspeaker EveryFrameTest_Text_0
# 41 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox EveryFrameTest_Text_1
# 42 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	waitmessage
# 43 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	closemessage
# 44 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EveryFrameTest_Movement_0
# 45 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	applymovement sisIntro, EveryFrameTest_Movement_1
# 46 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	waitmovement 0
# 47 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	setspeaker EveryFrameTest_Text_0
# 48 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox EveryFrameTest_Text_2
# 49 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	closemessage
# 50 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	applymovement sisIntro, EveryFrameTest_Movement_2
# 51 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	waitmovement 0
# 52 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	removeobject sisIntro
# 53 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 54 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	setvar VAR_COLUMBUS_INTRO_STATE, 1
# 55 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	goto EveryFrameTest_1


PlayersHouse_2F_Text_Bookshelf::
# 64 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 65 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox PlayersHouse_2F_Text_Bookshelf_Text_0
# 66 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	return


PlayersHouse_2F_Text_BigTV::
# 70 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 71 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox PlayersHouse_2F_Text_BigTV_Text_0
# 72 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	return


PlayersHouse_2F_Text_Pikachu_Pic::
# 76 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 77 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox PlayersHouse_2F_Text_Pikachu_Pic_Text_0
# 78 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	return


PlayersHouse_2F_Text_Apple_Pic::
# 82 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 83 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox PlayersHouse_2F_Text_Apple_Pic_Text_0
# 84 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	return


PlayersHouse_2F_Text_Plant_One::
# 88 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 89 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox PlayersHouse_2F_Text_Plant_One_Text_0
# 90 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	return


PlayersHouse_2F_Text_Plant_Two::
# 94 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 95 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox PlayersHouse_2F_Text_Plant_Two_Text_0
# 96 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	return


PlayersHouse_2F_Text_Player_Bed::
# 100 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 101 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox PlayersHouse_2F_Text_Player_Bed_Text_0
# 102 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	return


PlayersHouse_2F_Text_Sis_PC::
# 106 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 107 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox PlayersHouse_2F_Text_Sis_PC_Text_0
# 110 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	return


PlayersHouse_2F_Text_Sis_Bookshelf_One::
# 114 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 115 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox PlayersHouse_2F_Text_Sis_Bookshelf_One_Text_0
# 118 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	return


PlayersHouse_2F_Text_Sis_Bookshelf_Two::
# 122 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 123 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox PlayersHouse_2F_Text_Sis_Bookshelf_Two_Text_0
# 126 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	return


PlayersHouse_2F_Text_Player_Sis_Bed::
# 130 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	lockall
# 131 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	msgbox PlayersHouse_2F_Text_Player_Sis_Bed_Text_0
# 134 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	releaseall
	return


# 21 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
trigger_test_Movement_0:
# 21 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	face_up
	step_end

# 44 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
EveryFrameTest_Movement_0:
# 44 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	face_right
	step_end

# 45 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
EveryFrameTest_Movement_1:
# 45 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_up
# 45 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_up
# 45 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_up
# 45 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_up
# 45 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_up
# 45 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_up
# 45 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_up
# 45 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_left
# 45 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_left
# 45 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_left
# 45 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_left
	step_end

# 50 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
EveryFrameTest_Movement_2:
# 50 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_right
# 50 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_right
# 50 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_right
# 50 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_right
# 50 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_down
# 50 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_down
# 50 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_down
# 50 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_down
# 50 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_down
# 50 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_down
# 50 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_down
# 50 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	walk_right
	step_end

EveryFrameTest_Text_0:
# 40 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "Viki$"

EveryFrameTest_Text_1:
# 41 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "Hey you little brat.$"

EveryFrameTest_Text_2:
# 48 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "Let's go already$"

PlayersHouse_2F_Text_Bookshelf_Text_0:
# 65 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "You looked at your bookshelf.\p"
	.string "There are a bunch of books.$"

PlayersHouse_2F_Text_BigTV_Text_0:
# 71 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "now's not the time for TV.$"

PlayersHouse_2F_Text_Pikachu_Pic_Text_0:
# 77 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "It's a painting of a pikachu\n"
	.string "your mom made.$"

PlayersHouse_2F_Text_Apple_Pic_Text_0:
# 83 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "It's a painting of an Applin\n"
	.string "your dad made.$"

PlayersHouse_2F_Text_Plant_One_Text_0:
# 89 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "The trash can is empty/$"

PlayersHouse_2F_Text_Plant_Two_Text_0:
# 95 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "The trash can is empty as well/$"

PlayersHouse_2F_Text_Player_Bed_Text_0:
# 101 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "It's your bed.\n"
	.string "Would you like to rest?\p"
	.string "add healing code here$"

PlayersHouse_2F_Text_Sis_PC_Text_0:
# 107 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "It's your sister's PC.\p Probably shouldn't go snooping\n around on here...\p again...$"

PlayersHouse_2F_Text_Sis_Bookshelf_One_Text_0:
# 115 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "It's one of your sister's bookshelves.\p There seems to be a lot of large comics\n featuring two men falling in love.$"

PlayersHouse_2F_Text_Sis_Bookshelf_Two_Text_0:
# 123 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "It's one of your sister's bookshelves.\pThere seems to be a lot of large comics\n featuring two women falling in love.\p Especially a green one that seems to\n be well read.$"

PlayersHouse_2F_Text_Player_Sis_Bed_Text_0:
# 131 "data/maps/Columbus_PlayerHome_F2/scripts.pory"
	.string "It's your sister's bed.\p It looks like she's been struggling\n to sleep well recently.$"
