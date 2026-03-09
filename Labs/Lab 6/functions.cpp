/*************************************
* Name          : Grace Brown
* Last Edited   : 7 March 1016
* File Name     : functions.cpp
* Purpose       : functions for Lab 6
**************************************/

#include "lab6.h"

/*
    Return Type : Integer
    Name        : displayMenu
    Parameters  : NONE
    Use         : displays menu options and allows user choice
    Return      : user choice
*/
int displayMenu(){
    int choice;
    cout << "\n┌──────────── ⋆⋅☆⋅⋆ ────────────┐"
         << "\n|  Choose an Area to Calculate  |"
         << "\n|-------------------------------|"
         << "\n| 1.) Square                    |"
         << "\n| 2.) Rectangle                 |"
         << "\n| 3.) Parallelogram             |"
         << "\n| 4.) Circle                    |"
         << "\n| 4.) EXIT                      |"
         << "\n└──────────── ⋆⋅☆⋅⋆ ────────────┘\n"
         << "\nEnter Choice Here --> ";
    cin >> choice;

    while(cin.fail() || (choice > 5 || choice < 1)){
        if(cin.fail()){
            cout << "\nPlease enter an Integer! --> ";
        }else{
            cout << "\nPlease enter an integer 1-5! --> ";
        }
        cin.clear();
        cin.ignore(100, '\n');

        cin >> choice;
    }

    return choice;
}

/*
    Return Type : Double
    Name        : areaSquare
    Parameters  : (double)side 
    Use         : Accepts user input from main and calculates the area of the square based on the input
    Return      : calculated solution for user's square
*/
double areaSquare(double side){

    return 0;
} 

/*
    Return Type : Double
    Name        : areaRectangle
    Parameters  : (double)height, (double)width
    Use         : Accepts user input from main and calculates area of rectangle based on input
    Return      : calculated solution for user's rectangle
*/
double areaRectangle(double height, double width){

    return 0;
}

/*
    Return Type : Double
    Name        : areaParallelogram
    Parameters  : (double)base, (double)height
    Use         : Accepts user input from main and calculates araea based on input
    Return      : calculated solution for user's parallelogram
*/
double areaParallelogram(double base, double height){

    return 0;
}

/*
    Return Type : Double
    Name        : areaCircle
    Parameters  : (double)radius
    Use         : Accepts user inptu from main and calculated area based on input AND global constant PI
    Return      : calculated solution for user's rectangle
*/
double areaCircle(double radius){

    return 0;
}