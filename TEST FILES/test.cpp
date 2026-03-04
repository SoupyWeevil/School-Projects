#include <iostream>
#include <cstdlib>
#include <cctype>
#include <ctime>
using namespace std;

int test(int x, int y);

int main(){
    int x, y;
    cout << "Please enter a number: ";
    cin >> x;
    cout << "\nPlease enter a number again: ";
    cin >> y;

    cout << "the sum of x and y is " << test(x, y) << endl;    
    return 0;
}

int test(int x, int y){
    int sum = x + y;

    return sum;

}