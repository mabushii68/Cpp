#include <iostream>

using namespace std;

int main() {

int a, b;
int c[4] = {};

cin >> a >> b;

c[0] = a * (b % 10);
c[1] = a * (b % 100 / 10);
c[2] = a * (b / 100);
c[3] = a * b;

cout << c[0] << endl << c[1] << endl << c[2] << endl << c[3] << endl;
}