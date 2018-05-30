/*********************************************************************
** Program Filename: Sushi.hpp
** Author: Jason Lim
** Date: June 12th, 2018
** Description: This is the header file for Sushi
*********************************************************************/


#ifndef SUSHI_HPP
#define SUSHI_HPP
#include <string>

enum sushiType {Tuna, Salmon, Unagi};


struct Sushi {
    sushiType sushiType1;
    int roomNum;

    //constructor
    Sushi(sushiType sushiType1, int roomNum);

};


#endif