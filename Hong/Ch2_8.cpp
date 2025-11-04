#include <iostream>
using namespace std;

int main() {

    // Decimal : 0 1 2 3 4 5 6 7 8 9 10
    // Octal   : 0 1 2 3 4 5 6 7 10 11 12 13
    // Hexa    : 0 1 2 3 4 5 6 7 8 9 A B C D E F 10 

    int x = 012; // Decimal 10, 8진수로 표현하고 싶을 때 0을 붙임
    cout << x << endl;

    int y = 0xF;
    cout << y << endl;
}