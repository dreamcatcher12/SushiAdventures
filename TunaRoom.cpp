/*********************************************************************
** Program Filename: TunaRoom.cpp
** Author: Jason Lim
** Date: June 12th, 2018
** Description: This is the implementation file for TunaRoom
*********************************************************************/


#include "TunaRoom.hpp"

/*
 * TunaRoom constructor takes roomNum based on what is given and
 * creates a sushiType for Tuna and a new sushi
 */
TunaRoom::TunaRoom(int roomNum) : Space(roomNum) {
    sushiType1 = Tuna;// tuna sushi
    sushi = new Sushi(sushiType1, roomNum);
}

/*
 * goInside takes a parameter for storage for the main char and allows the user to
 * play the mini game for Tuna Room as well as gather the sushi up and put it in storage
 */
void TunaRoom::goInside(std::vector<Sushi *> *storage) {
    std::cout << "Room Number: " << roomNum << std::endl;

    std::cout << "Sushi Master has appeared! \n "
              << "Sushi Master: If you want the Tuna Sushi, then you must play"
                      " a game with me. If you win, you get the sushi. \n"
              << "Narrator: You will play a matching game of rock, paper, scissors. You \n"
              << "must match the rock paper or scissors combination of the Sushi Master.\n"
                      << "For example if both you and Sushi Master choose rock, you win. " << std::endl;
    std::cout << "This is a game of Luck and will test your Luck ability" << std::endl;
    std::cout << "Choose Rock, Paper, or Scissors (1. Rock, 2. Paper, 3. Scissors) " << std::endl;
    std::cout << "Would you like to proceed? Y/N" << std::endl;
    if (YesOrNoInput())
    {
        int selectCombo = integerInput();
        int sushiMasterSelect = rand()%3 + 1;
        while (selectCombo != sushiMasterSelect) //randomize the Sushi Master's choice
        {
            std::cout << "Try Again! The Sushi Master chose a combination different than yours!" << std::endl;
            std::cout << "Sushi master chose: " << sushiMasterSelect << std::endl;
            std::cout << "You chose: " << selectCombo << std::endl;
            selectCombo = integerInput();
            sushiMasterSelect = rand()%3 + 1;
        }
        std::cout << "You beat the Sushi master at his own game! You are truly a lucky one. " << std::endl;
        findSushi(storage);
        std::cout << "       ,;'''''''';,      \n"
                "     ,'  ________  ',  \n"
                "     ;,;'        ';,'   \n"
                "       '.________.'     " << std:: endl;
    }
}

