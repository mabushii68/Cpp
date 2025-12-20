// 비트 단위 연산자 Bitwise Operators

#include <iostream>
#include <bitset>

using namespace std;

int main() {

    // << left shift
    // >> right shift
    // ~, &, |, ^ (XOR은 없는데 Bitwise Operators XOR은 있음 (?))

    unsigned int a = 3;

    cout << std::bitset<8>(a) << endl;

    cout << std::bitset<8>(a << 1) << " " << (a << 1) << endl;
    cout << std::bitset<8>(a << 2) << " " << (a << 2) << endl;
    cout << std::bitset<8>(a << 3) << " " << (a << 3) << endl;
    cout << std::bitset<8>(a << 4) << " " << (a << 4) << endl;

    cout << std::bitset<8>(a << 4) << " " << (a << 4) << endl;

    unsigned int a = 0b1100;
    unsigned int b = 0b0110;

    cout << std::bitset<4>(a & b) << endl; // bitwise AND
    cout << std::bitset<4>(a | b) << endl; // bitwise OR
    cout << std::bitset<4>(a ^ b) << endl; // bitwise XOR

    return 0;
}