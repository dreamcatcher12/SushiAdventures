/*********************************************************************
** Program Filename: UnagiRoom.cpp
** Author: Jason Lim
** Date: June 12th, 2018
** Description: This is the implementation file for UnagiRoom
*********************************************************************/


#include "UnagiRoom.hpp"

/*
 * UnagiRoom constructor takes roomNum based on what is given and
 * creates a sushiType for Unagi and a new sushi
 */
UnagiRoom::UnagiRoom(int roomNum, bool *wonGame): Space(roomNum){
    sushiType1 = Unagi;// unagi sushi
    sushi = new Sushi(sushiType1, roomNum);
    tunaReceived = false;
    salmonReceived = false;
    unagiReceived = false;
    this->wonGame = wonGame;
}

/*
 * goInside takes a parameter for storage for the main char and allows the user to
 * play the mini game for Unagi Room as well as gather the sushi up and put it in storage.
 * It also allows user to put all the sushi in order onto the plates one sushi type at a time
 * to win the game.
 */
void UnagiRoom::goInside(std::vector<Sushi *> *storage) {
    std::cout << "Unagi Room Number: " << roomNum << std::endl;
    if (roomNum == 6)
    {
        std::cout << "Adjacent Room to the Left is Tuna Room Number: " << roomNum - 1 << std::endl;
        std::cout << "No room to the Right " << std::endl;
    }
    std::cout << "Sushi Wizard has appeared! \n "
              << "Sushi Wizard: If you want the Unagi Sushi, then you must play"
                      " a game with me. If you win you get the sushi \n"
              << "Narrator: You will play a game of multiplication. \n";
    std::cout << "This is a game of Mental Strength and will test your mind" << std::endl;
    std::cout << "Do you want to proceed with the Game? (Y/N) If not then proceed to the golden plate! " << std::endl;
    if (YesOrNoInput())
    {
        int sushiWizardSelect = rand()%10 + 1;
        std::cout << "What is " << sushiWizardSelect << " times " << sushiWizardSelect << std::endl;
        int selectCombo = chooseSize();
        while (selectCombo != sushiWizardSelect*sushiWizardSelect) //randomize the Sushi Master's choice
        {
            std::cout << "Try Again! The Sushi Wizard had a different answer than yours!" << std::endl;
            std::cout << "Sushi wizard answer " << sushiWizardSelect*sushiWizardSelect << std::endl;
            std::cout << "You chose: " << selectCombo << std::endl;
            selectCombo = chooseSize();
            sushiWizardSelect = rand()%10 + 1;
        }
        std::cout << "You beat the Sushi Wizard at his own game! You are truly strong mentally. " << std::endl;
        findSushi(storage);
        std::cout << "        ,,,,,,,,     \n"
                "       ,@@@@@@@@@@,       \n"
                "      |            |     \n"
                "       '.________.'    " << std::endl;
    }

    std::cout << "Now you see a golden plate where you should put your sushi onto. " << std::endl;
    if (!storage->empty()) {
        std::cout << "Put sushi onto plate from storage?\n"
                  << "1. Yes\n"
                  << "2. No\n";
        int putSushi = integerInputSushi();

        if (putSushi == 1) {
            bool sameSushi = true;
            sushiType sushiCheck = storage->at(0)->sushiType1;
            for (unsigned int i = 0; i < storage->size(); i++) {
                if (storage->at(i)->sushiType1 != sushiCheck) {
                    sameSushi = false;
                }
            }
            if (sameSushi) {
                if (sushiCheck == Tuna && storage->size() == 3) {
                    std::cout << "You put the Tuna sushi onto the plate. " << std::endl;

                    for (unsigned int i = 0; i < storage->size(); i++) {
                        delete storage->at(i);
                    }
                    storage->clear();
                    tunaReceived = true;
                } else if (sushiCheck == Salmon && storage->size() == 2) {
                    std::cout << "You put the Salmon sushi onto the plate. " << std::endl;

                    for (unsigned int i = 0; i < storage->size(); i++) {
                        delete storage->at(i);
                    }
                    storage->clear();
                    salmonReceived = true;
                } else if (sushiCheck == Unagi && storage->size() == 1) {
                    std::cout << "You put the Unagi sushi onto the plate. " << std::endl;
                    for (unsigned int i = 0; i < storage->size(); i++) {
                        delete storage->at(i);
                    }
                    storage->clear();
                    unagiReceived = true;
                }
                    //error all sushi not available
                else {
                    std::cout << "You are missing a sushi! " << std::endl;
                }
            }
                //error for wrong combination of sushi
            else {
                std::cout << "When you put down the sushi you realize you do not have all same sushi. \n"
                          << "You need the same sushi for the combination (Place all of one type of sushi first) " << std::endl;
            }
        } else if (putSushi == 2) {
            std::cout << "You do not put in any sushi onto the plate. " << std::endl;
        }
    }
    //if no sushi in storage
    else{
        std::cout << "You don't have any sushi in your storage. " << std::endl;
    }
    //if all sushi is put onto the plate, then sushido has won the game
    if (tunaReceived && salmonReceived && unagiReceived)
    {
        *wonGame = true;
    }
}
