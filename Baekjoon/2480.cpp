#include <iostream>
using namespace std;
 
int main() {
 
	int a, b, c;
	cin >> a >> b >> c;
	// 만약 모든 변수가 다른 경우
	if (a != b && b != c && a != c) {
		int max;
		// a > b
		if (a > b) {
			// c > a > b
			if (c > a) {
				max = c;
			}
			// a > (b, c)
			else {
				max = a;
			}
		}
		// b > a
		else {
			// c > b > a
			if (c > b) {
				max = c;
			}
			// b > (a, c)
			else {
				max = b;
			}
		}
		cout << max * 100;
	}
	// 적어도 한 쌍 이상의 서로 같은 변수가 존재할 경우
	else {
		// 3개의 변수가 모두 같은 경우
		if (a == b && a == c) {
			cout << 10000 + a * 1000;
		} else {
			// a가 b 혹은 c랑만 같은 경우
			if (a == b || a == c) {
				cout << 1000 + a * 100;
			}
			// b가 c랑 같은 경우
			else {
				cout << 1000 + b * 100;
			}
		}
	}
	return 0;
}