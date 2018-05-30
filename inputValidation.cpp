/*********************************************************************
** Program Filename: inputValidation.cpp
** Author: Jason Lim
** Date: June 12th, 2018
** Description: This is the implementation file for input validation
*********************************************************************/
#include "inputValidation.hpp"

using std::string;

/*
 * YesOrNoInput is input validation to determine if the choice is yes or no (Y/N).
 */
bool YesOrNoInput()
{
    string str = "";
    char letter = ' ';
    bool cont = true;
    while (cont) {
        cout << "Enter Y for Yes or N for No" << endl;
        getline(cin, str);
        std::stringstream ss(str); //enter Y or N
        if (ss >> letter && !(ss >> str) && (letter == 'Y' || letter == 'y' || letter == 'N' || letter == 'n')) {
            if (letter == 'y' || letter == 'Y') { //if choice is yes
                cout << "You entered " << letter << ". Continue with program" << endl;
                return true;
            } else if (letter == 'n' || letter == 'N') { //if choice is no
                cout << "You entered " << letter << ". Continue selecting normally" << endl;
                return false;
            }
        }
        else
        {
            cout << "Please enter Y or N to continue" << endl;
        }
    }
    return true;
}

/*
 * integerInput determines if the input is actually an integer of value 1-5
 * This is used in the menu function to enter a choice for selecting a menu.
 */
int integerInput() {
    string str = "";
    int number = 0;
    bool cont = true;
    while (cont) {
        cout << "Enter a choice ";
        getline(cin, str); //grabs the line
        std::stringstream ss(str);
        if (ss >> number && !(ss >> str) && (number == 1 || number == 2 || number == 3 )) { //enter a number
            if (number == 1)
            {
                return 1;
            }
            else if (number == 2)
            {
                return 2;
            }
            else if (number == 3)
            {
                return 3;
            }
        }
        else
        {
            cout << "Invalid not a correct value. Try Again. " << endl;
        }
    }
    return 0;
}

/*
 * integerInput determines if the input is actually an integer of value 1-5
 * This is used in the menu function to enter a choice for selecting a menu.
 */
int integerInputSushi() {
    string str = "";
    int number = 0;
    bool cont = true;
    while (cont) {
        cout << "Enter a choice ";
        getline(cin, str); //grabs the line
        std::stringstream ss(str);
        if (ss >> number && !(ss >> str) && (number == 1 || number == 2)) { //enter a number
            if (number == 1) {
                return 1;
            } else if (number == 2) {
                return 2;
            }
        }
        else
        {
            cout << "Invalid not a correct value. Try Again. " << endl;
        }
    }
    return 0;
}


/*
 * chooseSize chooses a number between a certain range
 */
int chooseSize()
{
    string str = "";
    int number = 0;
    bool cont = true;
    while (cont) {
        cout << "Enter a choice ";
        getline(cin, str); //grabs the line
        std::stringstream ss(str);
        if (ss >> number && !(ss >> str) && (number > 0) && (number <= 99999)) { //enter a number between 0
            // and 99999
            return number;
        }
        else
        {
            cout << "Invalid not a correct value. Try Again. " << endl;
        }
    }
    return 0;
}

/*
 * chooseSizeTo100 chooses a number between 0 - 100
 */
int chooseSizeTo100()
{
    string str = "";
    int number = 0;
    bool cont = true;
    while (cont) {
        cout << "Enter a choice ";
        getline(cin, str); //grabs the line
        std::stringstream ss(str);
        if (ss >> number && !(ss >> str) && (number >= 0) && (number <= 101)) { //enter a number between 0 and 100
            return number;
        }
        else
        {
            cout << "Invalid not a correct value. Try Again. " << endl;
        }
    }
    return 0;
}

/*
 * stringInput gets string input only
 */
string stringInput()
{
    string str;
    getline(cin, str);
    return str;
}

/*
 * oneToContinue makes sure that the user enters 1 to continue the Zoo Tycoon game used for paying food cost
 * and special events.
 */
int oneToContinue() {
    string str = "";
    int number = 0;
    bool cont = true;
    while (cont) {
        cout << "Enter a choice ";
        getline(cin, str); //grabs the line
        std::stringstream ss(str);
        if (ss >> number && !(ss >> str) && (number == 1)) { //enter a number 1
            if (number == 1)
                return 1;
        }
        else
        {
            cout << "Invalid not a correct value. Try Again. " << endl;
        }
    }
    return 0;
}