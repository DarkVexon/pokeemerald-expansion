StartingLine_PlayerHouse_2F_MapScripts::
	.byte 0

StartingLine_PlayerHouse_2F_EventScript_Notebook::
    msgbox StartingLine_PlayerHouse_2F_Text_Notebook, MSGBOX_SIGN
    end

StartingLine_PlayerHouse_2F_EventScript_Map::
    end

StartingLine_PlayerHouse_2F_EventScript_Gamecube::
    msgbox StartingLine_PlayerHouse_2F_Text_ItsAGameCube, MSGBOX_SIGN
    end

StartingLine_PlayerHouse_2F_Text_Notebook:
    .string "{PLAYER} flipped open the notebook.\p"
    .string "ADVENTURE RULE NO. 1\n"
    .string "Open the MENU with START.\p"
    .string "ADVENTURE RULE NO. 2\n"
    .string "Record your progress with SAVE.\p"
    .string "The remaining pages are blank…$"

StartingLine_PlayerHouse_2F_Text_ItsAGameCube:
    .string "It's a Nintendo GameCube.$"
