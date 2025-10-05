#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

int main() {

    short s = 1;
    int i = 1;
    long l = 1;
    long long ll = 1;

    cout << sizeof(short) << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(long) << endl;
    cout << sizeof(long long) << endl;

    cout << pow(2, sizeof(short) * 8) << endl;

    s = 32767;
    s = s + 1; // overflow

    cout << "32768 나와야 되지 않을까..? : " << s << endl;

    return 0;

}