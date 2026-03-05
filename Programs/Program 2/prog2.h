/*
 function definitions for Program2.cpp
*/

#include <string>

#ifndef prog2

#define prog 2

int displayMenuChoice(); //Shows menu choices and allows user selection... returns the user selection as an int
int rollDice(); //Generates two unique random dice numbers and returns the total
int luckyDice(std::string player); //Allows seperate users to roll dice repeatedly -- has seperate dice-roll mechanic then rollDice()

#endif