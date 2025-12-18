#include <iostream>
using namespace std;

// or
int getPrice(bool onSale) {
    if (onSale) return 10;
    else return 100;
}

int main() {

    float a;

    cout << sizeof(float) << endl;
    cout << sizeof(a) << endl;

    // comma operator

    int x = 3;
    int y = 10;
    int z = (++x, ++y);
    cout << x << " " << y << " " << z << endl;
    
    // conditional operator (arithmetric if)
    
    /*
    bool onSale = true;
    int price;

    if (onSale) {
        price = 10;
    }
    else {
        price = 100;
    }

    cout << price << endl;
    */

    bool onSale = true;
    const int price = (onSale == true) ? 10 : 100; // const로 하고 싶으면 if문 X

    cout << price << endl;


    return 0;
}