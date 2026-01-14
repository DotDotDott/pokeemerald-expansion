Columbus_PlayerHouse_F1_MapScripts::
	.byte 0


PlayersHouse_1F_Text_Mom_One::
# 4 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	lock
# 5 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	faceplayer
# 10 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox_mugshot PlayersHouse_1F_Text_Mom_One_Text_0, MSGBOX_NPC, MUGSHOT_TEST
# 11 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	release
	return


PlayersHouse_1F_Text_Dad_One::
# 15 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	lockall
# 16 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	faceplayer
# 17 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	setspeaker PlayersHouse_1F_Text_Dad_One_Text_0
# 18 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Dad_One_Text_1
# 19 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	releaseall
	return


PlayersHouse_1F_Text_Parents_Bed::
# 23 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	lockall
# 24 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Parents_Bed_Text_0
# 25 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	releaseall
	return


PlayersHouse_1F_Text_Parents_TV::
# 29 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	lockall
# 30 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Parents_TV_Text_0
# 31 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	releaseall
	return


PlayersHouse_1F_Text_Plant_Three::
# 35 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	lockall
# 36 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Plant_Three_Text_0
# 37 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	releaseall
	return


PlayersHouse_1F_Text_Plant_Four::
# 41 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	lockall
# 42 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Plant_Four_Text_0
# 43 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	releaseall
	return


PlayersHouse_1F_Text_Plant_Five::
# 47 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	lockall
# 48 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Plant_Five_Text_0
# 49 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	releaseall
	return


PlayersHouse_1F_Text_Mom_One_Text_0:
# 10 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "TEST!!!$"

PlayersHouse_1F_Text_Dad_One_Text_0:
# 17 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "Dad$"

PlayersHouse_1F_Text_Dad_One_Text_1:
# 18 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "Dad: Hey there kiddo.$"

PlayersHouse_1F_Text_Parents_Bed_Text_0:
# 24 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "It's your parents bed...$"

PlayersHouse_1F_Text_Parents_TV_Text_0:
# 30 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "It's a sitcom about a man\nliving with a talking slowbro.$"

PlayersHouse_1F_Text_Plant_Three_Text_0:
# 36 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "Empty it is...$"

PlayersHouse_1F_Text_Plant_Four_Text_0:
# 42 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "Hey it's me mr. plant!\pDid you know that potted plants\ncan talk!\pOnly to you though, isn't that wild!?$"

PlayersHouse_1F_Text_Plant_Five_Text_0:
# 48 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "Hey kid... you don't wanna know\nthe things ive seen in here...$"
