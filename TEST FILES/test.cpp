#include <iostream>
#include <cstdlib>
#include <cctype>
#include <ctime>
using namespace std;

int main(){
    string border(50, '-'), name = "Grace" , otherName = "John";
    int enemyDamage, playerDamage, enemyHealth, playerHealth ,defense;
    playerDamage = 20;
    srand(time(0));  

    for(int i = 0 ; i < 5 ; i++){
        enemyDamage = (rand() % 30 + 10);
        cout << enemyDamage << "\n";

        defense = (enemyDamage * 1.75) - enemyDamage ;
        cout << defense << endl;
    }
    playerHealth = playerDamage * 2;
    
    return 0;
}