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
		 
	string name, cosplayChar, catchPhrase, border(50, '-'), prop;
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
●・○・●・○・●・○・●・○・●・○・●・○・●・○・●・○・●・○・●・○・●・○)";

	//Story Setup ... Madlibs that determine stats and name
	cout << "\n" << border << endl 
		 << "\nYou enter the convention lobby..."
		 << "\nThere are booths beyond your scope of vision"
		 << "\nCharacters posing for pictures at every corner"
		 << "\nEverything is perfect..."
		 << "\nUntil you see them.\n"
		 << "\n" << border << "\n"
		 << "\nBut first, what is your name? --> ";
	getline(cin, name);
	
	do{ //Allows you to choose your name
		cout << "\nAre you sure your name is " << name << " ?\n"
			 << "[Y/N] --> ";
		cin >> yesNo;
		yesNo = toupper(yesNo);

		while(cin.fail() || yesNo != 'Y' && yesNo != 'N'){ //User validation for name
			cin.clear();
			cin.ignore(100, '\n');
			cout << "\nPlease Enter a Valid Choice! --> ";
			cin >> yesNo;
			yesNo = toupper(yesNo);
		}
		cin.ignore(100, '\n');

		if(yesNo == 'N'){ //Chooses NEW name if you mistyped
			cout << "\nPlease enter your REAL name --> ";
			getline(cin, name);
		}
	}while(yesNo == 'N');

	cout << "\nNow, " << name << ", who are you cosplaying as? --> ";
	getline(cin, cosplayChar);

	do{ //Allows you to choose your cosplay character
		cout << "\n" << cosplayChar << "! Did I hear that right?\n"
		 << "[Y/N] --> ";
		cin >> yesNo;
		yesNo = toupper(yesNo);

		while(cin.fail() || yesNo != 'Y' && yesNo != 'N'){ //User validation for cosplay
			cin.clear();
			cin.ignore(100, '\n');
			cout << "\nPlease Enter a Valid Choice! --> ";
			cin >> yesNo;
			yesNo = toupper(yesNo);
		}
		cin.ignore(100, '\n');

		if(yesNo == 'N'){ //Chooses NEW cosplay if you mistyped
			cout << "\nI'm sorry! Who are you cosplaying as then? --> ";
			getline(cin, cosplayChar);
		}
	}while(yesNo == 'N');

	cout << "\n" << cosplayChar << ", SURELY you have a prop? A weapon?\n"
		 << "[Y/N] --> ";
	cin >> yesNo;
	yesNo = toupper(yesNo);

	do{ //Allows you to choose or reject a weapon
		while(cin.fail() || yesNo != 'Y' && yesNo != 'N'){ //User validation for weapon
			cin.clear();
			cin.ignore(100, '\n');
			cout << "\nPlease Enter a Valid Choice! --> ";
			cin >> yesNo;
			yesNo = toupper(yesNo);
		}
		cin.ignore(100, '\n');

		if(yesNo == 'Y'){ //Allows you to enter the name of your prop
			cout << "\nWhat is your prop?\n"
				 << "[Enter Name of Prop] --> ";
			getline(cin, prop);

			do{
				cout << "\nYour prop is " << prop << ", did I hear that right?"
					 << "\n[Y/N] --> ";
				cin >> yesNo;
				yesNo = toupper(yesNo);

				while(cin.fail() || yesNo != 'Y' && yesNo != 'N'){ //User validation for weapon
					cin.clear();
					cin.ignore(100, '\n');
					cout << "\nPlease Enter a Valid Choice! -->";
					cin >> yesNo;
					yesNo = toupper(yesNo);
				}
				cin.ignore(100, '\n');

				if(yesNo == 'N'){
					cout << "\nOh! I'm sorry, its very hard to hear in here!\n"
						 << "What is your prop? --> ";
					getline(cin, prop);
				}
				playerDamage = 20; // If player HAS a prop, attack stats are RAISED
			}while(yesNo == 'N');
		}else{
			cout << "\n Are you sure you don't have a prop?\n"
				 << "\n[Y/N] --> ";
			cin >> yesNo;
			yesNo = toupper(yesNo);

			while(cin.fail() || yesNo != 'Y' && yesNo != 'N'){ //User validation for weapon
					cin.clear();
					cin.ignore(100, '\n');
					cout << "\nPlease Enter a Valid Choice! -->";
					cin >> yesNo;
					yesNo = toupper(yesNo);
				}
			cin.ignore(100, '\n');

			if(yesNo == 'Y'){
				playerDamage = 10; //If player does NOT have a prop, attack stats stay neutral at 10
			}else{
				cout << "\nWhat is your prop?"
					 << "\n[Enter Name of Prop] --> ";
				getline(cin, prop);

				do{
					cout << "\nYour prop is " << prop << ", did I hear that right?"
						 << "\n[Y/N] --> ";
					cin >> yesNo;
					yesNo = toupper(yesNo);

					while(cin.fail() || yesNo != 'Y' && yesNo != 'N'){ //User validation for weapon
						cin.clear();
						cin.ignore(100, '\n');
						cout << "\nPlease Enter a Valid Choice! -->";
						cin >> yesNo;
						yesNo = toupper(yesNo);
					}
					cin.ignore(100, '\n');

					if(yesNo == 'N'){
						cout << "\nOh! I'm sorry, its very hard to hear in here!\n"
							 << "What is your prop? --> ";
						getline(cin, prop);
					}
					playerDamage = 20; // If player HAS a prop, attack stats are RAISED
				}while(yesNo == 'N');
			}
		}
	}while(yesNo == 'N');

	cout << "[PRESS ENTER TO CONTINUE STORY]";
	cin.ignore(100, '\n');

	cout << " " << border << endl
		 << "\nAs you were walking along the convention floor..."
		 << "\nYou see Them."
		 << "\nYour doppleganger. "
		 << "\nAnother " << cosplayChar << ". But their cosplay is significantly better than yours."
		 << "\nYou cant let them mog you...\n"
		 << border << endl
		 << "\n[PRESS ENTER TO CONTINUE]";
	cin.ignore(100, '\n');


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
