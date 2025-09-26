#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    int prize = 0;
    int maxVal = 0;

    cin >> x >> y >> z;

    // 1) x = y = z  (잘못된 표현)  -->  (x == y) && (y == z)
    if ((x == y) && (y == z)) {
        prize = 10000 + x * 1000;
    }
    else {
        // 2) x = y != z  같은 식의 연쇄 비교/대입 금지
        //   -> 쌍 비교로 분기
        if (x == y) {
            prize = 1000 + x * 100;
        } else if (x == z) {
            prize = 1000 + x * 100;
        } else if (y == z) {
            prize = 1000 + y * 100;
        } else {
            // 3) 모두 다를 때: 최댓값을 찾아서 * 100
            maxVal = x;
            if (y > maxVal) maxVal = y;
            if (z > maxVal) maxVal = z;
            prize = maxVal * 100;
        }
    }

    cout << prize << '\n';
    return 0;
}
