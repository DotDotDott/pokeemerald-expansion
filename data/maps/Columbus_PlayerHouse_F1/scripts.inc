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
	msgbox PlayersHouse_1F_Text_Mom_One_Text_1, MSGBOX_DEFAULT
# 10 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	release
	return


PlayersHouse_1F_Text_Dad_One::
# 14 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	lock
# 15 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	faceplayer
# 16 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	setspeaker PlayersHouse_1F_Text_Dad_One_Text_0
# 17 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Dad_One_Text_1
# 18 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	releaseall
	return


PlayersHouse_1F_Text_Parents_Bed::
# 22 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	lockall
# 23 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Parents_Bed_Text_0
# 24 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	releaseall
	return


PlayersHouse_1F_Text_Parents_TV::
# 28 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	lockall
# 29 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Parents_TV_Text_0
# 30 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	releaseall
	return


PlayersHouse_1F_Text_Plant_Three::
# 34 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	lockall
# 35 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Plant_Three_Text_0
# 36 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	releaseall
	return


PlayersHouse_1F_Text_Plant_Four::
# 40 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	lockall
# 41 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Plant_Four_Text_0
# 42 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	releaseall
	return


PlayersHouse_1F_Text_Plant_Five::
# 46 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	lockall
# 47 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Plant_Five_Text_0
# 48 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	releaseall
	return


PlayersHouse_1F_Text_Mom_One_Text_0:
# 8 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "Mom$"

PlayersHouse_1F_Text_Mom_One_Text_1:
# 9 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "Hello sweetie, have a nice day.$"

PlayersHouse_1F_Text_Dad_One_Text_0:
# 16 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "Dad$"

PlayersHouse_1F_Text_Dad_One_Text_1:
# 17 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "Dad: Hey there kiddo.$"

PlayersHouse_1F_Text_Parents_Bed_Text_0:
# 23 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "It's your parents bed...$"

PlayersHouse_1F_Text_Parents_TV_Text_0:
# 29 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "It's a sitcom about a man\nliving with a talking slowbro.$"

PlayersHouse_1F_Text_Plant_Three_Text_0:
# 35 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "Empty it is...$"

PlayersHouse_1F_Text_Plant_Four_Text_0:
# 41 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "Hey it's me mr. plant!\pDid you know that potted plants\ncan talk!\pOnly to you though, isn't that wild!?$"

PlayersHouse_1F_Text_Plant_Five_Text_0:
# 47 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "Hey kid... you don't wanna know\nthe things ive seen in here...$"
