//
// Created by limja on 5/28/2018.
//

#include "SalmonRoom.hpp"

SalmonRoom::SalmonRoom(int roomNum) : Space(roomNum) {
    sushiType1 = Salmon;// salmon sushi
    sushi = new Sushi(sushiType1, roomNum);
}

void SalmonRoom::goInside(std::vector<Sushi *> *storage) {
    std::cout << "Room Number: " << roomNum << std::endl;

    std::cout << "You entered a grass plains room that extends far beyond your imagination \n "
              << "It appears that the Salmon sushi is on a cliff that you must jump to! \n "
              <<"Sushi Fighter has appeared! \n "
              << "Sushi Fighter: If you want the Salmon Sushi, then you must use your physical strength \n"
                      "to jump over to this cliff that I am standing on. If you get here, you get the sushi \n"
              << "Narrator: You will have to jump to the cliff. However, you \n"
              << "may or may not be able to jump to the cliff. If you fall into the cracks \n"
              << "Sushi Fighter will save you. " << std::endl;
    std::cout << "This is a game of Phyiscal Strength and will test your physical ability" << std::endl;
    std::cout << "Ready to Jump? (Y/N) " << std::endl;
    int randomizeJump = rand()%2 + 1;
    if (YesOrNoInput())
    {
        while (randomizeJump != 1) //randomize the Sushi Master's choice
        {
            std::cout << "You nearly died and fell into the crevices but the Sushi Fighter saved you!" << std::endl;
            std::cout << "Try again? " << std::endl;
            YesOrNoInput();
            randomizeJump = rand()%2 + 1;
        }
        std::cout << "You made it onto the cliff and now you can retrieve the Salmon Sushi. " << std::endl;
        findSushi(storage);
        std::cout << "\n"
                "     ,iiiiiiiiii,     \n"
                "  ,iiiiiiiiiiiiii,      \n"
                "    iii'        'ii'    \n"
                "    '.________.'           " << std::endl;
    }

}
