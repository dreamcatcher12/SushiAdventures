/*********************************************************************
** Program Filename: menu.cpp
** Author: Jason Lim
** Date: June 12th, 2018
** Description: This is the implementation file for Menu
*********************************************************************/

#include "menu.hpp"

/*
 * displayMenu function displays the text of the menu
 */
void Menu::displayMenu()
{
//    cout << "                                                                                                                                 \n"
//            "    //   ) )                                 // | |                                                                                \n"
//            "   ((                  ___     / __     ( ) //__| |     ___   /          ___       __    __  ___           __      ___      ___    \n"
//            "     \\\\     //   / / ((   ) ) //   ) ) / / / ___  |   //   ) / ||  / / //___) ) //   ) )  / /   //   / / //  ) ) //___) ) ((   ) ) \n"
//            "       ) ) //   / /   \\ \\    //   / / / / //    | |  //   / /  || / / //       //   / /  / /   //   / / //      //         \\ \\     \n"
//            "((___ / / ((___( ( //   ) ) //   / / / / //     | | ((___/ /   ||/ / ((____   //   / /  / /   ((___( ( //      ((____   //   ) ) " << endl;
    cout << "Welcome to the Sushi Adventures Game " << endl;
    cout << "Please pick 1, 2, or 3 " << endl;
    cout << "1. Start Game " << endl;
    cout << "2. Instructions and Objectives of Game " << endl;
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
                Game game;
                game.playGame();
                break;
            }
            case 2:
            {
                displayObjective();
                break;
            }
            case 3:
            {
                cout << "Thank you for playing Sushi Adventures. Now exiting program " << endl;
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

void Menu::displayObjective()
{
    std::cout << "The objective of the game is simple. Collect the three types of sushi: Tuna, Salmon, and Unagi.  \n"
              << "You must collect all Tuna first then get to the end and put all Tuna down on the plate. \n"
              << "Then you can get all the Salmon and put it on the plate. \n"
              << "Then you must get the final sushi the Unagi sushi and put it on the plate. \n"
              << "Throughout your journey you will encounter puzzles that test your physical & mental strength \n"
              << "along with your luck. You must successfully win these puzzles or games and receive the sushis \n"
              << "If you are successful and win the game, then you get to return back to your village with your \n"
              << "new sushi skills and will be able to start your own sushi restaurant!" << std::endl;
}