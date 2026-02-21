Columbus_PlayerHouse_F1_MapScripts::
	.byte 0


PlayersHouse_1F_Text_Mom_Text_Real::
# 7 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	lock
# 8 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	faceplayer
# 9 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	compare VAR_COLUMBUS_INTRO_STATE, 1
	goto_if_eq PlayersHouse_1F_Text_Mom_Text_Real_1
# 17 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Mom_Text_Real_Text_1, MSGBOX_NPC
	return

PlayersHouse_1F_Text_Mom_Text_Real_1:
# 11 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	setspeaker SP_NAME_MOM
# 12 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Mom_Text_Real_Text_0, MSGBOX_NPC
# 13 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	applymovement Mom, PlayersHouse_1F_Text_Mom_Text_Real_Movement_0
# 14 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	release
	return


PlayersHouse_1F_Text_Dad_Text_Real::
# 25 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	lock
# 26 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	faceplayer
# 27 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	compare VAR_COLUMBUS_INTRO_STATE, 1
	goto_if_eq PlayersHouse_1F_Text_Dad_Text_Real_1
# 35 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Dad_Text_Real_Text_1, MSGBOX_NPC
	return

PlayersHouse_1F_Text_Dad_Text_Real_1:
# 29 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	setspeaker SP_NAME_MOM
# 30 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Dad_Text_Real_Text_0, MSGBOX_NPC
# 31 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	applymovement Mom, PlayersHouse_1F_Text_Mom_Text_Real_Movement_0
# 32 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	release
	return


PlayersHouse_1F_Text_Parents_Bed::
# 44 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	lockall
# 45 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Parents_Bed_Text_0
# 46 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	releaseall
	return


PlayersHouse_1F_Text_Bookshelf::
# 50 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	lockall
# 51 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Bookshelf_Text_0
# 52 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	releaseall
	return


PlayersHouse_1F_Text_Parents_TV::
# 56 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	lockall
# 57 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Parents_TV_Text_0
# 58 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	releaseall
	return


PlayersHouse_1F_Text_Plant_Three::
# 62 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	lockall
# 63 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Plant_Three_Text_0
# 64 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	releaseall
	return


PlayersHouse_1F_Text_Plant_Five::
# 68 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	lockall
# 69 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Plant_Five_Text_0
# 70 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	releaseall
	return


PlayersHouse_1F_Text_Mom_One::
# 80 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	lock
# 81 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	faceplayer
# 82 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	setspeaker SP_NAME_MOM
# 84 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	message PlayersHouse_1F_Text_Mom_One_Text_0
# 85 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	waitmessage
# 86 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	multichoice 25, 5, MULTI_TEST, 1
# 87 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	closemessage
# 88 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PlayersHouse_1F_Text_Mom_One_2
# 92 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PlayersHouse_1F_Text_Mom_One_3
# 96 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PlayersHouse_1F_Text_Mom_One_4
PlayersHouse_1F_Text_Mom_One_1:
# 102 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	compare VAR_COLUMBUS_INTRO_STATE, 0
	goto_if_gt PlayersHouse_1F_Text_Mom_One_9
PlayersHouse_1F_Text_Mom_One_8:
# 114 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	applymovement Mom, PlayersHouse_1F_Text_Mom_Text_Real_Movement_0
# 116 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	release
	return

PlayersHouse_1F_Text_Mom_One_2:
# 89 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	setspeaker SP_NAME_MOM
# 90 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Mom_One_Text_1, MSGBOX_NPC
	goto PlayersHouse_1F_Text_Mom_One_1

PlayersHouse_1F_Text_Mom_One_3:
# 93 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	setspeaker SP_NAME_MOM
# 94 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Mom_One_Text_2, MSGBOX_NPC
	goto PlayersHouse_1F_Text_Mom_One_1

PlayersHouse_1F_Text_Mom_One_4:
# 97 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	setspeaker SP_NAME_MOM
# 98 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Mom_One_Text_3, MSGBOX_NPC
	goto PlayersHouse_1F_Text_Mom_One_1

PlayersHouse_1F_Text_Mom_One_9:
# 104 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	switch VAR_COLUMBUS_INTRO_STATE
# 105 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	case 1, PlayersHouse_1F_Text_Mom_One_12
# 107 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	case 2, PlayersHouse_1F_Text_Mom_One_13
# 110 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Mom_One_Text_6
	goto PlayersHouse_1F_Text_Mom_One_8

PlayersHouse_1F_Text_Mom_One_12:
# 106 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Mom_One_Text_4, MSGBOX_NPC
	goto PlayersHouse_1F_Text_Mom_One_8

PlayersHouse_1F_Text_Mom_One_13:
# 108 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Mom_One_Text_5, MSGBOX_NPC
	goto PlayersHouse_1F_Text_Mom_One_8


PlayersHouse_1F_Text_Dad_One::
# 120 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	lock
# 121 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	faceplayer
# 122 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	setspeaker PlayersHouse_1F_Text_Dad_One_Text_0
# 124 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	compare VAR_COLUMBUS_INTRO_STATE, 2
	goto_if_ne PlayersHouse_1F_Text_Dad_One_2
# 131 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Dad_One_Text_2
# 132 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	setvar VAR_COLUMBUS_INTRO_STATE, 1
PlayersHouse_1F_Text_Dad_One_1:
# 134 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	applymovement Dad, PlayersHouse_1F_Text_Mom_Text_Real_Movement_0
# 135 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	releaseall
	return

PlayersHouse_1F_Text_Dad_One_2:
# 126 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Dad_One_Text_1
# 127 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	setvar VAR_COLUMBUS_INTRO_STATE, 2
	goto PlayersHouse_1F_Text_Dad_One_1


# 13 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
PlayersHouse_1F_Text_Mom_Text_Real_Movement_0:
# 13 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	face_original_direction
	step_end

PlayersHouse_1F_Text_Mom_Text_Real_Text_0:
# 12 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "Hi sweetie, have fun at the library\n"
	.string "today, and make sure to stay close to\l"
	.string "your sister ok? Also um, I know you two\l"
	.string "can get on each other's nerves a bit\l"
	.string "but can you please go a little easy on\l"
	.string "her today? I'm not sure exactly what\l"
	.string "happened but I think her and Terry got\l"
	.string "in a bit of a fight.$"

PlayersHouse_1F_Text_Mom_Text_Real_Text_1:
# 17 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "Hi sweetie.$"

PlayersHouse_1F_Text_Dad_Text_Real_Text_0:
# 30 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "Hey kiddo, shouldn't you be on your way\n"
	.string "to the library by now? That lecture\l"
	.string "thing should be starting soon right?$"

PlayersHouse_1F_Text_Dad_Text_Real_Text_1:
# 35 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "Hey kiddo.$"

PlayersHouse_1F_Text_Parents_Bed_Text_0:
# 45 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "It's your parents bed...$"

PlayersHouse_1F_Text_Bookshelf_Text_0:
# 51 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "It's your parents bookshelf. There's a\n"
	.string "bunch of books about art theroy.$"

PlayersHouse_1F_Text_Parents_TV_Text_0:
# 57 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "It's a sitcom about a man\nliving with a talking slowbro.$"

PlayersHouse_1F_Text_Plant_Three_Text_0:
# 63 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "Empty it is...$"

PlayersHouse_1F_Text_Plant_Five_Text_0:
# 69 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "Hey kid... you don't wanna know\nthe things ive seen in here...$"

PlayersHouse_1F_Text_Mom_One_Text_0:
# 84 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "Hello sweetie, How are you doing?$"

PlayersHouse_1F_Text_Mom_One_Text_1:
# 90 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "Thats good to hear$"

PlayersHouse_1F_Text_Mom_One_Text_2:
# 94 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "Thats Ok to hear$"

PlayersHouse_1F_Text_Mom_One_Text_3:
# 98 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "I'm sorry sweetie$"

PlayersHouse_1F_Text_Mom_One_Text_4:
# 106 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "Var 1 test! Whatever that means$"

PlayersHouse_1F_Text_Mom_One_Text_5:
# 108 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "Var 2 test! Whatever that means$"

PlayersHouse_1F_Text_Mom_One_Text_6:
# 110 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "Error.$"

PlayersHouse_1F_Text_Dad_One_Text_0:
# 122 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "Dad$"

PlayersHouse_1F_Text_Dad_One_Text_1:
# 126 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "Hey there kiddo. Seting Var to 2$"

PlayersHouse_1F_Text_Dad_One_Text_2:
# 131 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "Hey there kiddo. Seting Var to 1$"
