//
// Created by limja on 5/28/2018.
//

#include "Game.hpp"

Game::Game() {
    totalSteps = 0;
    wonGame = new bool(false);

    //create rooms
    TunaRoom *tuna1 = new TunaRoom(1);
    SalmonRoom *salmon1 = new SalmonRoom(2);
    TunaRoom *tuna2 = new TunaRoom(3);
    SalmonRoom *salmon2 = new SalmonRoom(4);
    TunaRoom *tuna3 = new TunaRoom(3);
    UnagiRoom *unagi1 = new UnagiRoom(1, wonGame);

    //connect rooms
    tuna1->setPtr(nullptr, salmon1);
    salmon1->setPtr(tuna1, tuna2);
    tuna2->setPtr(salmon1, salmon2);
    salmon2->setPtr(tuna2,tuna3);
    tuna3->setPtr(salmon2,unagi1);
    unagi1->setPtr(tuna3, nullptr);

    sushido = tuna1; //set sushido to the first room

    storage = new std::vector<Sushi*>; // sets up storage box
}

void Game::playGame() {
    std::cout << "Sushi is a rare and scarce commodity to the land. In fact it has been so sacred that \n"
    << "the local government has banned sushi forever from all villages to keep to themselves. \n "
    << "You are on an adventure to gather up sushi throughout many trials that \n "
              << "test your physical strength, mental strength, and luck. \n"
              << "Goal: Gather up the required sushi: tuna, salmon, and unagi, and you will be \n"
              << "known as the sushi hero and will be able to go back to your land and start \n"
              << "your very own Sushi restaurant at your village.\n";

    //loop until steps == 13 or when game is won
    while (totalSteps <= 13)
    {
        sushido->goInside(storage);

        if (*wonGame)
        {
            break;
        }
        std::cout << "1. Move Left\n"
                  << "2. Move Right\n"
                  << "Select: " << std:: endl;
        int selectMove = integerInputSushi();

        if (selectMove == 1)
        {
            if (sushido->getLeft() == nullptr)
            {
                std::cout << "Wrong way. You decide to choose a different path" << std::endl;
            } else{
                sushido = sushido->getLeft();
            }
        }
        else if (selectMove == 2)
        {
            if (sushido->getRight() == nullptr)
            {
                std::cout << "Wrong way. You decide to choose a different path" << std::endl;
            } else{
                sushido = sushido->getRight();
            }
        }
        totalSteps++;
    }
    if (*wonGame)
    {
        std::cout << "You are undoubtedly the hero of us all and you have brought back Sushi Master,\n"
                  << " Sushi Fighter, and Sushi Wizard back to your village. They will help you start your \n"
                  << "new sushi business. Your family and villagers are glad to have you back! " << std::endl;
    } else{
        std::cout << "You have failed on your adventure and have returned to your village. You have lost!"
                  << std::endl;
    }
}

Game::~Game() {

    delete wonGame;
    while (sushido->getRight() != nullptr)
    {
        sushido = sushido->getRight();
    }

    while (sushido->getLeft() != nullptr)
    {
        Space *temp = sushido;
        sushido = sushido->getLeft();
        delete temp;
    }
    delete sushido;
    delete storage;
}
