/************************************
* Editor      : Grace Brown			*
* Last Edited : 5 March 2026    	*
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
	
	srand(time(0)); //CREATES UNQIUE UNIX TIMESTAMP SEED 
	string playerName; // used in lucky dice game
	int choice; //Holds the return value for displayMenuChoice()
	cout << "\n┏━━━━━━━━━━✦❘༻༺❘✦━━━━━━━━━━━┓"
	 	 << "\n    Welcome to Dice Casino     "
		 << "\n ----------------------------- "
		 << "\n   Here you can choose one     "
		 << "\n  of three unique dice games   "
		 << "\n ----------------------------- "
		 << "\n┗━━━━━━━━━━✦❘༻༺❘✦━━━━━━━━━━━┛\n"
		 << "\n[ENTER TO CONTINUE]\n";
	cin.ignore(100, '\n');

	gameDescription(); //Gives rules to game


	do{ // creates game loop! ends if player enters 4
		cout << "\n[ENTER TO CONTINUE]\n";
		cin.ignore(100, '\n');

		choice = displayMenuChoice(); //assigns the return of function to choice variable
		
		switch(choice){ //uses function return to command switch
			case 1:  // ROLL CALL
				int num; //holds user guess
				cout << "\nWhat do you think the total of the two dice will be?\n"
					 << "--> ";
				cin >> num;

				while(cin.fail()){
					cin.clear();
					cin.ignore(100, '\n');

					cout << "\nPlease enter an integer! --> ";
					cin >> num;
				}
				cin.ignore(100, '\n');

				if(num == rollDice()){
					cout << "\n☄. *. ⋆\n"
						 << "\nCongratulations! You win."
						 << "\n☄. *. ⋆\n";
				}else{
					cout << "\n☄. *. ⋆\n"
						 << "Ah! So sorry! Not the answer :("
						 << "\n☄. *. ⋆\n";
				}
				break;

			case 2:  // OVER UNDER
				char guess; //holds user guess
				int firstRoll, secondRoll; // holds stationary diceRoll returns... prevents randomization each call!
				
				firstRoll = rollDice();
				secondRoll = rollDice();

				cout << "\nThe first Roll was " << firstRoll << "."
					 << "\nWill the next roll be OVER, UNDER, or MATCH?!"
					 << "\n---------------"
					 << "\n CHOICE - TYPE"
					 << "\n---------------"
					 << "\n OVER   -  o   "
					 << "\n UNDER  -  u   "
					 << "\n MATCH  -  m   "
					 << "\n---------------\n"
					 << "\n--> ";
				cin >> guess;
				guess = toupper(guess); //converts Guess to UPPER for standardization https://cplusplus.com/reference/cctype/

				while(cin.fail() || (guess != 'O' && guess != 'U' && guess != 'M')){ //user validation
					cin.clear();
					cin.ignore(100, '\n');

					cout << "Please enter a valid choice! [o, u, m] --> ";
					cin >> guess;
					guess = toupper(guess);
				}
				cin.ignore(100, '\n');

				switch(guess){ //brings guess letter to a comparison statement
					case 'O':
						if(firstRoll < secondRoll){ //compares value of both rolls
							cout << "\n☄. *. ⋆\n"
								 << "Congratulations! You right :)"
								 << "\n☄. *. ⋆\n";
						}else{
							cout << "\n☄. *. ⋆\n"
								 << "Ah! So sorry. Wrong."
								 << "\nThe second roll was " << secondRoll << "."
								 << "\n☄. *. ⋆\n";
						}
						break;

					case 'U':
						if(firstRoll > secondRoll){ //compares value of both rolls
							cout << "\n☄. *. ⋆\n"
								 << "Congratulations! You right :)"
								 << "\n☄. *. ⋆\n";
						}else{
							cout << "\n☄. *. ⋆\n"
								 << "Ah! So sorry. Wrong."
								 << "\nThe second roll was " << secondRoll << "."
								 << "\n☄. *. ⋆\n";
						}
						break;

					case 'M':
						if(firstRoll == secondRoll){ //compares value of both rolls
							cout << "\n☄. *. ⋆\n"
								 << "Congratulations! You right :)"
								 << "\n☄. *. ⋆\n";
						}else{
							cout << "\n☄. *. ⋆\n"
								 << "Ah! So sorry. Wrong."
								 << "\nThe second roll was " << secondRoll << "."
								 << "\n☄. *. ⋆\n";
						}
						break;
				}
				break;
		
			case 3:  // LUCKY DICE
				int playerCount;
				cout << "\nHow many players are there? --> ";
				cin >> playerCount;

				while(cin.fail() || playerCount <= 0 ){
					if(cin.fail()){
						cout << "\nPlease enter a number\n!";
					}else{
						cout <<"\nPlease enter more than 0 players! --> ";
					}
					cin.clear();
					cin.ignore(100, '\n');

					cin >> playerCount;
				}
				
				

				cout << "\nPlease enter Player Name --> ";
				getline(cin, playerName);
				luckyDice(playerName);
				break;
		}

	}while(!(choice == 4));
	return 0;
}