/*************************************
* Name          : Grace Brown
* Last Edited   : 7 March 1016
* File Name     : Lab6.cpp
* Purpose       : Main function for Lab 6
**************************************/

#include "lab6.h"

int main(){
    int choice; //holds return for displayMenu()
    do{ //Begins "gameplay" loop
        double length, width, height, radius, base;
        choice = displayMenu(); 

        switch(choice){ //takes return from menu and splits into different case functions
            case 1: //calls SQUARE
                cout << "\nPlease enter the length of the side -->  ";
                cin >> length;
                areaSquare(length);
                break;
            case 2: //calls RECTANGLE
                cout << "\nPlease enter the Length and Width (Seperated by a space) --> ";
                cin >> length >> width;
                areaRectangle(length, width);
                break;
            case 3: //calls PARALLELOGRAM
                cout << "\nPlease enter the Base and Height (Seperated by a space) --> ";
                cin >> base >> height;
                areaParallelogram(base, height);
                break;
            case 4: //calls CIRCLE
                cout << "\nPlease enter the Radius of your Circe --> ";
                cin >> radius;
                areaCircle(radius);
                break;
        }
    }while(choice != 5); //continues to cycle loop until EXIT is chosen
    return 0;
}


