/*********************************************************************
** Program Filename: Space.hpp
** Author: Jason Lim
** Date: June 12th, 2018
** Description: This is the header file for Space
*********************************************************************/


#ifndef SPACE_HPP
#define SPACE_HPP
#include "Sushi.hpp"
#include <vector>
#include <iostream>
#include "inputValidation.hpp"

class Space {

protected:
    Sushi *sushi;
    Space *left;
    Space *top;
    Space *bottom;
    Space *right;
    int roomNum;
    sushiType sushiType1;
public:
    Space(int roomNum);
    void setPtr(Space *Leftptr, Space *Rightptr);
    virtual void goInside(std::vector<Sushi*> *storage) = 0;
    Space *getLeft();
    Space *getRight();
    void findSushi(std::vector<Sushi*> *storage);
    virtual ~Space();


};


#endif