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
	msgbox PlayersHouse_1F_Text_Dad_One_Text_0
# 17 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	releaseall
	return


PlayersHouse_1F_Text_Parents_Bed::
# 21 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	lockall
# 22 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Parents_Bed_Text_0
# 23 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	releaseall
	return


PlayersHouse_1F_Text_Parents_TV::
# 27 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	lockall
# 28 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Parents_TV_Text_0
# 29 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	releaseall
	return


PlayersHouse_1F_Text_Plant_Three::
# 33 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	lockall
# 34 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Plant_Three_Text_0
# 35 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	releaseall
	return


PlayersHouse_1F_Text_Plant_Four::
# 39 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	lockall
# 40 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Plant_Four_Text_0
# 41 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	releaseall
	return


PlayersHouse_1F_Text_Plant_Five::
# 45 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	lockall
# 46 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	msgbox PlayersHouse_1F_Text_Plant_Five_Text_0
# 47 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	releaseall
	return


PlayersHouse_1F_Text_Mom_One_Text_0:
# 10 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "TEST!!!$"

PlayersHouse_1F_Text_Dad_One_Text_0:
# 16 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "Dad: Hey there kiddo.$"

PlayersHouse_1F_Text_Parents_Bed_Text_0:
# 22 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "It's your parents bed...$"

PlayersHouse_1F_Text_Parents_TV_Text_0:
# 28 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "It's a sitcom about a man\nliving with a talking slowbro.$"

PlayersHouse_1F_Text_Plant_Three_Text_0:
# 34 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "Empty it is...$"

PlayersHouse_1F_Text_Plant_Four_Text_0:
# 40 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "Hey it's me mr. plant!\pDid you know that potted plants\ncan talk!\pOnly to you though, isn't that wild!?$"

PlayersHouse_1F_Text_Plant_Five_Text_0:
# 46 "data/maps/Columbus_PlayerHouse_F1/scripts.pory"
	.string "Hey kid... you don't wanna know\nthe things ive seen in here...$"
