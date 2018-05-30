/*********************************************************************
** Program Filename: SalmonRoom.hpp
** Author: Jason Lim
** Date: June 12th, 2018
** Description: This is the header file for Salmon Room
*********************************************************************/

#ifndef SALMONROOM_HPP
#define SALMONROOM_HPP

#include "Space.hpp"
#include <vector>
#include "inputValidation.hpp"
#include "Sushi.hpp"
#include <iostream>
#include <cstdlib>

class SalmonRoom: public Space{

public:
    SalmonRoom(int roomNum);
    void goInside(std::vector<Sushi*> *storage);
};


#endif