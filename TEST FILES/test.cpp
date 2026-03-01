#include <iostream>
#include <cstdlib>
#include <cctype>
#include <ctime>
using namespace std;

int main(){
    string border(50, '-'), name = "Grace" , otherName = "John";
    int enemyDamage, playerDamage, enemyHealth, playerHealth;
    playerDamage = 20;
    srand(time(0));  

    for(int i = 0 ; i < 5 ; i++){
        enemyDamage = (rand() % 11 + 10);
        cout << enemyDamage << "\n";
    }
    playerHealth = playerDamage * 2;

    cout << "\n" << border << endl
		 << "\n┌────── ⋆⋅☆⋅⋆ ──────┐"
		 << "\n|    -- STATS --    |"
		 << "\n| ★  • • • • • •  ★ |"
		 << "\n| You --            |"
         << "\n|     HEALTH: " << playerHealth << "    |"
         << "\n|     ATTACK: " << playerDamage << "    |"
         << "\n| ★  • • • • • •  ★ |"
         << "\n| Enemy --          |"
         << "\n|     HEALTH: " << enemyHealth << "    |"
         << "\n|     ATTACK: " << enemyDamage << "    |"
         << "\n└────── ⋆⋅☆⋅⋆ ──────┘\n";
         



    return 0;
}