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

StartingLine_EventScript_RivalsHouseSign::
    msgbox StartingLine_Text_RivalsHouseSign, MSGBOX_SIGN
    end

StartingLine_Text_RivalsHouseSign:
    .string "Syte's House$"

StartingLine_EventScript_TechGuy::
    msgbox StartingLine_Text_TechGuy, MSGBOX_NPC
    end

StartingLine_Text_TechGuy:
    .string "The power of science is amazing!\n"
    .string "Now you can use the internet to see\l"
    .string "people's really dumb ideas...$"

StartingLine_EventScript_Chef::
    msgbox StartingLine_Text_Chef, MSGBOX_NPC
    end

StartingLine_Text_Chef:
    .string "Why, {PLAYER}, leaving?\n"
    .string "Are you perhaps going on a\l"
    .string "Pokemon adventure? Well, if you ever have a\l"
    .string "food-related dilemma, you know who to ask...$"

StartingLine_EventScript_LabSign::
    msgbox StartingLine_Text_LabSign, MSGBOX_SIGN
    end

StartingLine_Text_LabSign:
    .string "Professor Syte's House$"
