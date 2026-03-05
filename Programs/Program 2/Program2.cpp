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
using namespace std;

//************************* P R O T O T Y P E S ****************************************//

int rollDice();
int displayMenuChoice();
int luckyDice(string player);

//*************************** M A I N **************************************************//
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
//**************************************** F U N C T I O N S ***************************************** */
int displayMenuChoice(){ 		//allows player to choose which game function to play
	int choice;
	
	cout << "\n◤━━━━━━━━━━━━━━━━━━━━━━━━━◥\n"
		 << setw(5) << " " << "► SELECTION MENU ◄\n" << endl
		 << setw(3) << "1" << ".) Roll Call\n"
		 << setw(3) << "2" << ".) Over Under\n"
		 << setw(3) << "3" << ".) Lucky Dice\n"
		 << setw(3) << "4" << ".) Quit"
		 << "\n◣━━━━━━━━━━━━━━━━━━━━━━━━━◢\n"
		 << "Please Select Your Choice --> ";
	cin >> choice;
	
	//Validation loop for choice (using cin.fail() from module 6 slides failbit)
	while(cin.fail() || choice > 4 || choice < 1){ 
		if(cin.fail()){
			cout << "\nThats not a Number! Please select a valid option --> ";
		}else{
			cout << "\nPlease select a number 1-4 --> ";
		}
		cin.clear();
		cin.ignore(100, '\n');
		cin >> choice;
	}
	cin.ignore(100, '\n');
	return choice;
}
//Simulated rolling two dice -- called every time total of the two dice needs to be determined
int rollDice(){ 				
	int dice1, dice2, total;
	srand(time(0)); 			// Gives a new generated seed each time rand() is called
	dice1 = rand() % 6 + 1;  
	dice2 = rand() % 6 + 1;
	total = dice1 + dice2;

	return total; 				// Gives the total to be used when function is called
}

int luckyDice(string player){ 	//Do-While loop for user choice to continue rolling
	srand(time(0)); 
	int dice1, dice2, accumulatedTotal, turn = 1;	
	char yesNo;					//Allows user to choose if they continue rolling
	do{							//Continues rolling BY USERS CHOICe
		int diceTotal;			// Stores temp dice total value to be added to accumulator
		string border(20, '-');

		
		cout << border << endl
			 << "Turn " << turn << "... \n";
		turn++; 				//Ensures turn number is updated each loop
		dice1 = rand() % 6 + 1;
		dice2 = rand() % 6 + 1;
		
		if(dice1 == dice2){		//If branches based on if dice are equal or not
			cout << "Oops! You rolled double " << dice1 << "'s!\n"
				 << "You lost all your points for this round!\n";
			accumulatedTotal = 0; //Automatically sets accumulated total to 0 -- ends round
		}else{
			cout << "You Rolled a " << dice1 << " and a " << dice2 << "!\n";
			diceTotal = dice1 + dice2;
			accumulatedTotal += diceTotal; //Adds running total to accumulator for total overall points
		}

		cout << "\nYour new total is " << accumulatedTotal << "!\n";

		if(accumulatedTotal > 0){  			// Allows user to keep plying IF they havent rolled a double
			cout << "Would you like to test your luck and ROLL AGAIN?\n"
				 << "[Y/N] --> ";
			cin >> yesNo;
			yesNo = toupper(yesNo);

			while(cin.fail() || yesNo != 'Y' && yesNo != 'N'){	//User Validation loop
				cin.clear();
				cin.ignore(100, '\n');
				cout << "Please enter a valid choice! --> ";
				cin >> yesNo;
				yesNo = toupper(yesNo);
			}
		}
	}while(yesNo == 'Y' && accumulatedTotal > 0); //Continues as long as player wants to keep playing OR total is above 0

	return accumulatedTotal;
}
