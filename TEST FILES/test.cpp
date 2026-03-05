#include <iostream>
#include <cstdlib>
#include <cctype>
#include <ctime>
using namespace std;

int rollDice(){ 				
	int dice1, dice2, total;
			// Gives a new generated seed each time rand() is called

	dice1 = rand() % 6 + 1;  
	dice2 = rand() % 6 + 1;
	
	total = dice1 + dice2;

	return total; 				// Gives the total to be used when function is called
}

int main(){
    srand(time(0)); 	
    for(int i = 0 ; i < 5 ; i++){
        cout << rollDice() << endl;
    }

    return 0;
}