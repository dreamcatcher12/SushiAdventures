//
// Created by limja on 5/28/2018.
//

#include "Space.hpp"

Space::Space(int roomNum) {

    top = nullptr;
    bottom = nullptr;
    this->roomNum = roomNum;
}

void Space::setPtr(Space *Leftptr, Space *Rightptr) {
    left = Leftptr;
    right = Rightptr;
}

Space *Space::getLeft() {
    return left;
}

Space *Space::getRight() {
    return right;
}

void Space::findSushi(std::vector<Sushi *> *storage) {
    if (sushi != nullptr)
    {
        std::cout << "You find a sushi in the room. \n"
                  << "1. Take sushi \n"
                  << "2. Ignore sushi and leave it there \n";
        int sushiSelection = integerInputSushi();

        if (sushiSelection == 1)
        {
            if (storage->size() < 3)
            {
                std::cout << "You take the sushi " << std::endl;
                storage->push_back(sushi);
                sushi = nullptr;
            } else{
                std::cout << "Your storage bag is too full to store anymore sushi. " << std::endl;
            }
        }
        else if (sushiSelection == 2)
        {
            std::cout << "You did not grab the sushi " << std::endl;
        }
    }
    //sushi already taken
    else{
        std::cout << "You have already taken the sushi" << endl;

    }
}

Space::~Space() {

    if (sushi != nullptr)
    {
        delete sushi;
    }
}
