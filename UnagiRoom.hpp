//
// Created by limja on 5/28/2018.
//

#ifndef FINALPROJ_UNAGIROOM_HPP
#define FINALPROJ_UNAGIROOM_HPP
#include "Space.hpp"
#include <vector>

class UnagiRoom: public Space {

private:
    bool tunaReceived;
    bool salmonReceived;
    bool unagiReceived;
    bool *wonGame;

public:
    UnagiRoom(int roomNum, bool *wonGame);
    void goInside(std::vector<Sushi*> *storage);
};


#endif
