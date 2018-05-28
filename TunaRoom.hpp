//
// Created by limja on 5/28/2018.
//

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