/*  Copyright 2017 George Le
    Definitions of functions declared in combat.h and defines functions to be
    used specifically with the functions in combat.h ONLY!!!
*/
#include <vector>
#include "combat.h"
#include "hostile.h"

Result single_turn(std::map<int, Primary_character*>& list_of_characters, std::map<int, Hostile>& list_of_hostiles)
{
    Result victory_or_loss = FIGHTING;
    
    return victory_or_loss;
}

Result one_v_one_duel(std::map<int, Primary_character*>& list_of_characters, int enum_difficult_converted_to_int)
{
    Result victory_or_loss = NOT_STARTED;
    std::map<int, Hostile> list_of_hostiles;
    int turn_counter = 0;
    
    // checks if it's really a one v one fight
    if(list_of_characters.size() != 1)
    {
        // call another combat function depending on the size of your party
        // TO BE DESIGNED
    }
    
    while(victory_or_loss == NOT_STARTED)
    {
        victory_or_loss = single_turn(list_of_characters, list_of_hostiles);
        if(turn_counter == 100)
        {
            victory_or_loss = PLAYER_DEATH;
        }
        turn_counter++;
    }
    return victory_or_loss;
}