#include <iostream>

using namespace std;

int main() {

    int x, t, a, b;

    cin >> x;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        x -= a * b;
    }

    if (x == 0) {
        cout << "Yes";
    }

    else {
    cout << "No";
    }
    
    return 0;
}

// 첫째 줄 : 영수증에 적힌 총 금액 X
// 둘째 줄 : 영수증에 적힌 구매한 물건의 종류의 수 N
// 이후 N개의 줄에는 각 물건의 가격 a와 개수 b가 공백을 사이에 두고 주어진다.