#include <iostream>
#include <bitset>

using namespace std;

int main() {
    unsigned int a = 5;
    a = a << 1;
    cout << a << endl; 
    cout << std::bitset<8>(a) << endl;

    return 0;
}