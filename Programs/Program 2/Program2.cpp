/************************************
* Editor      : Grace Brown			*
* Last Edited : 2 March 2026    	*
* File Name   : prog2.cpp			*
* Purpose     : Player gets to TEST *
*				their luck in a fun *
*				game of dice!		*
************************************/

#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include "prog2.h"
using namespace std;

int main(){ 					
	int choice;
	cout << "\n┏━━━━━━━━━━✦❘༻༺❘✦━━━━━━━━━━━┓"
	 	 << "\n    Welcome to Dice Casino     "
		 << "\n ----------------------------- "
		 << "\n   Here you can choose one     "
		 << "\n  of three unique dice games   "
		 << "\n ----------------------------- "
		 << "\n┗━━━━━━━━━━✦❘༻༺❘✦━━━━━━━━━━━┛\n";

	do{
		choice = displayMenuChoice(); 
		
		switch(choice){
			case 1:  // ROLL CALL
				cout << "\nchoice one works\n";
				break;

			case 2:  // OVER UNDER
				break;

			case 3:  // LUCKY DICE
				break;
		}
	}while(!(choice == 4));
	return 0;
}