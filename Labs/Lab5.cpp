/***************************
* Name       : Grace Brown *
* Last Edited: 26 Feb 2026 *
* File Name  : Lab5.cpp    *
* Purpose    :  		   *
***************************/

#include <cstdlib>
#include <iostream>
#include <string>
#include <ctime>
#include <cctype>
using namespace std;

int main(){
	
	/*CONCEPT : INCEL DUEL!
		 You are at an anime convention
		 You are wearing a poorly made cosplay of your favorite anime character
		 You find another person ALSO wearing a cosplay of the SAME CHARACTER
		 You have to fight -- NERD STYLE -- to determine who TRULY deserves to embody the character
		 */
		 
	string name, cosplayChar, catchPhrase;
	int playerHealth, enemyHealth, playerDamage, enemyDamage, menuChoice, rageMultiplier, defense, randChance;
	char yesNo;
	
	srand(time(0)); 
	//Ascii Art -- Once again using this reference https://stackoverflow.com/questions/37765925/ascii-art-in-c
	cout << R"(
●・○・●・○・●・○・●・○・●・○・●・○・●・○・●・○・●・○・●・○・●・○
      _____                 _                            
     /  __ \               | |                           
     | /  \/ ___  ___ _ __ | | __ _ _   _                
     | |    / _ \/ __| '_ \| |/ _` | | | |               
     | \__/\ (_) \__ \ |_) | | (_| | |_| |               
      \____/\___/|___/ .__/|_|\__,_|\__, |               
                     | |             __/ |               
                     |_|            |___/                
 _____             _                                     
/  __ \           | |                                    
| /  \/ ___  _ __ | |_ _ __ _____   _____ _ __ ___ _   _ 
| |    / _ \| '_ \| __| '__/ _ \ \ / / _ \ '__/ __| | | |
| \__/\ (_) | | | | |_| | | (_) \ V /  __/ |  \__ \ |_| |
 \____/\___/|_| |_|\__|_|  \___/ \_/ \___|_|  |___/\__, |
                                                    __/ |
                                                   |___/ 
●・○・●・○・●・○・●・○・●・○・●・○・●・○・●・○・●・○・●・○・●・○
	)";

	//Story Setup ... Madlibs that determine stats and name
	
	//Player info and stats
	
	//story continues -- enemy appears
	
	//RANDOMIZER FOR ENEMY STATS
	//Enemy stats
	
	//DO WHILE GAME LOOP
	do{
			cout << "\n╔───────────────────────╗"
				 << "\n|   WHAT WILL YOU DO?   |"
				 << "\n|-----------------------|"
				 << "\n| 1.) Attack            |"
				 << "\n| 2.) Defend            |"
				 << "\n| 3.) Rummage Bag       |" // This one offers a randomizer for a boost
				 << "\n| 4.) Give Up           |" // Automatically sets player health to 0
				 << "\n╚───────────────────────╝\n"
				 << "\n Enter Choice Here --> ";
			cin >> menuChoice;

	//user validation
		while(cin.fail() || menuChoice < 1 || menuChoice > 4){
			if(cin.fail()){
				cout << "\nPlease enter a NUMBER! --> ";
			}else{
				cout << "\nPlease enter a value in range! --> ";
			}
			cin.clear();
			cin.ignore(100, '\n');

			cin >> menuChoice;
		}
		
	//switch case for choices
		switch(menuChoice){
			case 1:

				break;
			case 2:

				break;
			case 3:

				break;
		}
	
	//Display results of choice
	
	// KEEP LOOPING UNTIL DEATH OR QUIT
	}while(playerHealth > 0 || enemyHealth > 0);

	if(playerHealth <= 0){ //Death Sequence for player

	}else if(enemyHealth <= 0){ //Death Sequence for Enemy

	}
	
	
	return 0;
}
