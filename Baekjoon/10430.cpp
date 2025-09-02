#include <iostream>

using namespace std;

int main() {

	int a, b, c;

	cin >> a;
	cin >> b;
	cin >> c;

	int x = (a + b) % c;
	int y = ((a % c) + (b % c)) % c;
	int z = (a * b) % c;
	int t = ((a % c) * (b % c)) % c;

	cout << x << endl;
	cout << y << endl;
	cout << z << endl;
	cout << t << endl;

	return 0;
}