/*  Copyright 2017 George Le
    Definitions of functions declared in actions.h
*/
#include <iostream>
#include "actions.h"
#include "support.h"

void Movement_action::move()
{
    if(can_move == true)
    {
        // TO BE IMPLEMENTED
        std::cout << "Move\n";
    }
}

bool Flee_action::flee()
{
    if(can_flee == true)
    {
        // TO BE IMPLEMENTED
        std::cout << "Flee\n";
        return true;
    }
    return false;
}

Actions::Actions()
{
    list_of_action_names.push_back("1. Attack");
    list_of_action_names.push_back("2. Move");
    list_of_action_names.push_back("3. Item");
    list_of_action_names.push_back("4. Flee");
}

void Actions::list_possible_actions()
{
    for(auto it = list_of_action_names.begin(); it != list_of_action_names.end(); it++)
    {
        std::cout << *it << "\n";
    }
}

bool Actions::select_actions(int& choice)
{
    std::cout << "What would you like to do?\n";
    list_possible_actions();
    int f_user_choice = get_number_from_user(1, 4);
    bool attack_or_item = false;
    switch(f_user_choice)
    {
        case 1:
        case 3:
        attack_or_item = true;
        break;
        case 2:
        move();
        break;
        case 4:
        if(flee())
        {
            std::cout << "You successful fled!\n";
        }
        else
        {
            std::cout << "You failed to run away!\n";
        }
        break;
    }
    return attack_or_item;
}