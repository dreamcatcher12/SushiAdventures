/*********************************************************************
** Program Filename: menu.cpp
** Author: Jason Lim
** Date: June 3rd, 2018
** Description: This is the implementation file for Menu
*********************************************************************/

#include "menu.hpp"

/*
 * displayMenu function displays the text of the menu
 */
void Menu::displayMenu()
{

    cout << "This is the menu for Jason's STL Containers " << endl;
    cout << "Please pick 1, 2, or 3 " << endl;
    cout << "1. Queue Simulation " << endl;
    cout << "2. Stack Palindrome " << endl;
    cout << "3. Exit the Program " << endl;
}

/*
 * Choose menu displays the menu and runs the program or
 * exits the program. Choice 3 will exit the program. The menu will continually prompt until the user has
 * chosen to exit the program.
 */

int Menu::chooseFromMenu()
{
    int integerVal = 0; //for which selection
    do
    {
        displayMenu(); //display menu
        integerVal = integerInput(); //input validation on selection
        switch (integerVal)
        {
            case 1:
            {
                queue();
                break;
            }
            case 2:
            {
                stack();
                break;
            }
            case 3:
            {
                cout << "Exiting Program " << endl;
                break;
            }
            default:
            {
                break;
            }
        }
    }
    while (integerVal != 3); //as long as 8 is not chosen

    return 0;
}
