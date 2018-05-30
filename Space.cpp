/*********************************************************************
** Program Filename: Space.cpp
** Author: Jason Lim
** Date: June 12th, 2018
** Description: This is the implementation file for Space
*********************************************************************/


#include "Space.hpp"

/*
 * Space constructor takes a room and sets the pointers that are not used
 * to nullptr and sets the room num to this room num
 */
Space::Space(int roomNum) {

    top = nullptr;
    bottom = nullptr;
    this->roomNum = roomNum;
}

/*
 * setPtr sets the ptrs of left and right so that each space ptr will point
 * to rooms in a linear fashion
 */
void Space::setPtr(Space *Leftptr, Space *Rightptr) {
    left = Leftptr;
    right = Rightptr;
}

/*
 * getLeft returns left pointer
 */
Space *Space::getLeft() {
    return left;
}

/*
 * getRight returns the right pointer
 */
Space *Space::getRight() {
    return right;
}

/*
 * findSushi allows user to take the sushi and store it into the bag which is the parameter or storage.
 * If storage is too full it will tell you or if the sushi was already taken.
 */
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

/*
 * Space destructor which deletes the sushis
 */
Space::~Space() {

    if (sushi != nullptr)
    {
        delete sushi;
    }
}
