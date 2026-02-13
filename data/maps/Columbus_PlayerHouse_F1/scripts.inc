Columbus_PlayerHouse_F1_MapScripts::
	.byte 0


PlayersHouse_1F_Text_Mom_One::
# 6 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	lock
# 7 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	faceplayer
# 8 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	setspeaker PlayersHouse_1F_Text_Mom_One_Text_0
# 9 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	applymovement 1, PlayersHouse_1F_Text_Mom_One_Movement_0
# 10 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Mom_One_Text_1
# 11 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	applymovement 1, PlayersHouse_1F_Text_Mom_One_Movement_1
# 12 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Mom_One_Text_2
# 13 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	applymovement 1, PlayersHouse_1F_Text_Mom_One_Movement_2
# 14 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Mom_One_Text_3
# 15 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	release
	return


PlayersHouse_1F_Text_Dad_One::
# 19 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	lockall
# 20 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	faceplayer
# 21 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	setspeaker PlayersHouse_1F_Text_Dad_One_Text_0
# 22 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	applymovement 2, PlayersHouse_1F_Text_Dad_One_Movement_0
# 23 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Dad_One_Text_1
# 24 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	applymovement 2, PlayersHouse_1F_Text_Dad_One_Movement_1
# 25 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Dad_One_Text_1
# 26 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	releaseall
	return


PlayersHouse_1F_Text_Parents_Bed::
# 30 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	lockall
# 31 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Parents_Bed_Text_0
# 32 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	releaseall
	return


PlayersHouse_1F_Text_Parents_TV::
# 36 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	lockall
# 37 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Parents_TV_Text_0
# 38 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	releaseall
	return


PlayersHouse_1F_Text_Plant_Three::
# 42 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	lockall
# 43 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Plant_Three_Text_0
# 44 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	releaseall
	return


PlayersHouse_1F_Text_Plant_Four::
# 48 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	lockall
# 49 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Plant_Four_Text_0
# 50 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	releaseall
	return


PlayersHouse_1F_Text_Plant_Five::
# 54 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	lockall
# 55 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Plant_Five_Text_0
# 56 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	releaseall
	return


# 9 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
PlayersHouse_1F_Text_Mom_One_Movement_0:
# 9 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	emote_question_mark
	step_end

# 11 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
PlayersHouse_1F_Text_Mom_One_Movement_1:
# 11 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	emote_x
	step_end

# 13 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
PlayersHouse_1F_Text_Mom_One_Movement_2:
# 13 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 22 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
PlayersHouse_1F_Text_Dad_One_Movement_0:
# 22 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	emote_heart
	step_end

# 24 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
PlayersHouse_1F_Text_Dad_One_Movement_1:
# 24 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	emote_exclamation_mark
	step_end

PlayersHouse_1F_Text_Mom_One_Text_0:
# 8 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "Mom$"

PlayersHouse_1F_Text_Mom_One_Text_1:
# 10 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "Mom: Hello sweeite\nHave a nice day.$"

PlayersHouse_1F_Text_Mom_One_Text_2:
# 12 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "Mom: Hello sweeite\nHave a nice day.2$"

PlayersHouse_1F_Text_Mom_One_Text_3:
# 14 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "Mom: Hello sweeite\nHave a nice day.3$"

PlayersHouse_1F_Text_Dad_One_Text_0:
# 21 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "Dad$"

PlayersHouse_1F_Text_Dad_One_Text_1:
# 23 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "Dad: Hey there kiddo.$"

PlayersHouse_1F_Text_Parents_Bed_Text_0:
# 31 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "It's your parents bed...$"

PlayersHouse_1F_Text_Parents_TV_Text_0:
# 37 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "It's a sitcom about a man\nliving with a talking slowbro.$"

PlayersHouse_1F_Text_Plant_Three_Text_0:
# 43 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "Empty it is...$"

PlayersHouse_1F_Text_Plant_Four_Text_0:
# 49 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "Hey it's me mr. plant!\pDid you know that potted plants\ncan talk!\pOnly to you though, isn't that wild!?$"

PlayersHouse_1F_Text_Plant_Five_Text_0:
# 55 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "Hey kid... you don't wanna know\nthe things ive seen in here...$"
