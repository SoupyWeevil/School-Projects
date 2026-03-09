/*************************************
* Name          : Grace Brown
* Last Edited   : 7 March 1016
* File Name     : lab6.h
* Purpose       : functions and constant declaration
                  for lab 6
**************************************/

#ifndef LAB_SIX_H

#define LAB_SIX_H

#include <iostream>
#include <string>
using namespace std;

const double PI = 3.14159;

void displayMenu(); // displays menu, allows user choice, RETURNS user choice
double areaSquare(double side); 
double areaRectangle(double height, double width);
double areaParallelogram(double base, double height);
double areaCircle(double radius);


#endif