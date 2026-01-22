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
	release
	return


PlayersHouse_1F_Text_Dad_One::
# 16 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	lockall
# 17 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	faceplayer
# 18 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	setspeaker PlayersHouse_1F_Text_Dad_One_Text_0
# 19 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	applymovement 2, PlayersHouse_1F_Text_Dad_One_Movement_0
# 20 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Dad_One_Text_1
# 21 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	applymovement 2, PlayersHouse_1F_Text_Dad_One_Movement_1
# 22 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	releaseall
	return


PlayersHouse_1F_Text_Parents_Bed::
# 26 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	lockall
# 27 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Parents_Bed_Text_0
# 28 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	releaseall
	return


PlayersHouse_1F_Text_Parents_TV::
# 32 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	lockall
# 33 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Parents_TV_Text_0
# 34 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	releaseall
	return


PlayersHouse_1F_Text_Plant_Three::
# 38 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	lockall
# 39 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Plant_Three_Text_0
# 40 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	releaseall
	return


PlayersHouse_1F_Text_Plant_Four::
# 44 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	lockall
# 45 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Plant_Four_Text_0
# 46 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	releaseall
	return


PlayersHouse_1F_Text_Plant_Five::
# 50 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	lockall
# 51 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Plant_Five_Text_0
# 52 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	releaseall
	return


# 9 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
PlayersHouse_1F_Text_Mom_One_Movement_0:
# 9 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	emote_thinking
	step_end

# 11 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
PlayersHouse_1F_Text_Mom_One_Movement_1:
# 11 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	emote_x
	step_end

# 19 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
PlayersHouse_1F_Text_Dad_One_Movement_0:
# 19 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	emote_heart
	step_end

# 21 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
PlayersHouse_1F_Text_Dad_One_Movement_1:
# 21 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	emote_exclamation_mark
	step_end

PlayersHouse_1F_Text_Mom_One_Text_0:
# 8 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "Mom$"

PlayersHouse_1F_Text_Mom_One_Text_1:
# 10 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "Mom: Hello sweeite\nHave a nice day.$"

PlayersHouse_1F_Text_Dad_One_Text_0:
# 18 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "Dad$"

PlayersHouse_1F_Text_Dad_One_Text_1:
# 20 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "Dad: Hey there kiddo.$"

PlayersHouse_1F_Text_Parents_Bed_Text_0:
# 27 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "It's your parents bed...$"

PlayersHouse_1F_Text_Parents_TV_Text_0:
# 33 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "It's a sitcom about a man\nliving with a talking slowbro.$"

PlayersHouse_1F_Text_Plant_Three_Text_0:
# 39 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "Empty it is...$"

PlayersHouse_1F_Text_Plant_Four_Text_0:
# 45 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "Hey it's me mr. plant!\pDid you know that potted plants\ncan talk!\pOnly to you though, isn't that wild!?$"

PlayersHouse_1F_Text_Plant_Five_Text_0:
# 51 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "Hey kid... you don't wanna know\nthe things ive seen in here...$"
