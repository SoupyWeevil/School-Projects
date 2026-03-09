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
        choice = displayMenu(); 

        switch(choice){ //takes return from menu and splits into different case functions
            case 1: //calls SQUARE

                break;
            case 2: //calls RECTANGLE

                break;
            case 3: //calls PARALLELOGRAM

                break;
            case 4: //calls CIRCLE
            
                break;
        }
    }while(choice != 5); //continues to cycle loop until EXIT is chosen
    return 0;
}


