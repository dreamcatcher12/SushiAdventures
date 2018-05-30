/*********************************************************************
** Program Filename: Sushi.cpp
** Author: Jason Lim
** Date: June 12th, 2018
** Description: This is the implementation file for Sushi
*********************************************************************/


#include "Sushi.hpp"

/*
 * sushi constructor which takes the type of sushi and room num and
 * sets the sushi to that
 */
Sushi::Sushi(sushiType sushiType1, int roomNum) {
    {
        this->sushiType1 = sushiType1;
        this->roomNum = roomNum;
    }
}
