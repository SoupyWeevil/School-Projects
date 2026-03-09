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

int displayMenu(); // displays menu, allows user choice, RETURNS user choice
double areaSquare(double side);  //calculated area of square based on user input
double areaRectangle(double height, double width); //calculates area of rectangle based on user input
double areaParallelogram(double base, double height); //calculates area of parallelogram based on user input
double areaCircle(double radius); //calculates area of circle based on user input


#endif