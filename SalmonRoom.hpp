//
// Created by limja on 5/28/2018.
//

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