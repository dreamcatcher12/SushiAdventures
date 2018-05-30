/*********************************************************************
** Program Filename: Sushi.hpp
** Author: Jason Lim
** Date: June 12th, 2018
** Description: This is the header file for Sushi
*********************************************************************/


#ifndef TUNAROOM_HPP
#define TUNAROOM_HPP

#include "Space.hpp"
#include <vector>
#include "inputValidation.hpp"
#include "Sushi.hpp"
#include <iostream>
#include <cstdlib>

class TunaRoom: public Space {

public:
    TunaRoom(int roomNum);
    void goInside(std::vector<Sushi*> *storage);

};


#endif