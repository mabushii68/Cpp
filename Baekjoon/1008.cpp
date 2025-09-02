#include <iostream>

using namespace std;

int main()
{
    double a, b;

    cin >> a >> b;

    cout.precision(15); // 소수점 이하 몇 자리를 표시할 것인가 (15자리)
    cout << fixed; // 부동 소수점 값을 고정 소수점 표기법으로 변경
    cout << a / b << endl;
}