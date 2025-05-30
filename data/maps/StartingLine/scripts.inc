StartingLine_MapScripts::
	.byte 0

StartingLine_EventScript_PlayersHouseSign::
    msgbox StartingLine_Text_PlayersHouseSign, MSGBOX_SIGN
    end

StartingLine_Text_PlayersHouseSign:
    .string "{PLAYER}'s House$"

StartingLine_EventScript_FirstGuy::
    msgbox StartingLine_Text_FirstGuy, MSGBOX_NPC
    end

StartingLine_Text_FirstGuy:
    .string "Going on an adventure is good.\n"
    .string "You can see all sorts of things!\p"
    .string "Plus, it's probably good for you just\n"
    .string "to get out of the house...$"
