//
// Created by limja on 5/28/2018.
//

#include "TunaRoom.hpp"

TunaRoom::TunaRoom(int roomNum) : Space(roomNum) {
    sushiType1 = Tuna;// tuna sushi
    sushi = new Sushi(sushiType1, roomNum);
}

void TunaRoom::goInside(std::vector<Sushi *> *storage) {
    std::cout << "Room Number: " << roomNum << std::endl;

    std::cout << "Sushi Master has appeared! \n "
              << "Sushi Master: If you want the Tuna Sushi, then you must play"
                      " a game with me. If you win, you get the sushi. \n"
              << "Narrator: You will play a game of rock, paper, scissors. However, you \n"
              << "must match the rock paper or scissors combination of the Sushi Master. " << std::endl;
    std::cout << "This is a game of Luck and will test your Luck ability" << std::endl;
    std::cout << "Choose Rock, Paper, or Scissors (1. Rock, 2. Paper, 3. Scissors) " << std::endl;
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

