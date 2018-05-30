//
// Created by limja on 5/28/2018.
//

#ifndef GAME_HPP
#define GAME_HPP

#include "Space.hpp"
#include "Sushi.hpp"
#include "SalmonRoom.hpp"
#include "TunaRoom.hpp"
#include "UnagiRoom.hpp"
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>

class Game {

private:
    int totalSteps; //total number of steps player taken
    Space *sushido; //pointer for location of main char
    std::vector<Sushi*> *storage; //pointer for storage of sushi
    bool *wonGame;

public:
    Game();
    void playGame();
    ~Game();

};


#endif
