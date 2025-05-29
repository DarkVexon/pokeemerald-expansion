StartingLine_MapScripts::
	.byte 0

StartingLine_EventScript_PlayersHouseSign::
    msgbox StartingLine_Text_PlayersHouseSign, MSGBOX_SIGN
    end

StartingLine_Text_PlayersHouseSign:
    .string "{PLAYER}'s House$"
