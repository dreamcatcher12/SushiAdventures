//
// Created by limja on 5/28/2018.
//

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