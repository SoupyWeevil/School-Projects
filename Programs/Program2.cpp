/************************************
* Editor      : Grace Brown			*
* Last Edited : 25 Feb 2026			*
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


int displayMenuChoice(){ //Switch statment menu choices -- allows player to choose which game function to play
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

int rollDice(){ 		//Simulated rolling two dice -- called every time total of the two dice needs to be determined
	int dice1, dice2, total;
	
	return total;
}

int luckyDice(string player){ //If statement branches for player risk -- allows player to keep rolling until double
	int total;
	
	return total;
}

//****************************************************************************************//
int main(){ 			//Main gameplay loop -- calls each of the dice functions
	

	return 0;
}