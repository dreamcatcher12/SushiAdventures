/*********************************************************************
** Program Filename: inputValidation.hpp
** Author: Jason Lim
** Date: June 12th, 2018
** Description: This is the header file for user input validation
*********************************************************************/

#ifndef INPUTVALIDATION_HPP
#define INPUTVALIDATION_HPP

#include <cstdlib>
#include <string>
#include <iostream>
#include <sstream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

bool YesOrNoInput();
int integerInput();
int integerInputSushi();
int chooseSize();
int chooseSizeTo100();
string stringInput();
int oneToContinue();

#endif