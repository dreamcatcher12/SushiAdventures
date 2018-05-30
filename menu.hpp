/*********************************************************************
** Program Filename: menu.hpp
** Author: Jason Lim
** Date: June 12th, 2018
** Description: This is the header file for Menu
*********************************************************************/

#ifndef MENU_HPP
#define MENU_HPP

#include <iostream>
#include <string>
#include "inputValidation.hpp"
#include "Game.hpp"

using std::cin;
using std::cout;
using std::endl;

class Menu{

public:
    void displayMenu();
    int chooseFromMenu();
    void displayObjective();
};

#endif
