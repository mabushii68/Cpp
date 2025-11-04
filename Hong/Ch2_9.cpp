#include <iostream>
using namespace std;

void printNumber(const int& my_number)
{
    // my_number = 123; // 변경 불가능
    int n = my_number;
    cout << my_number << endl;
}

int main() {

    printNumber(123);

    const double gravity{9.8};

    // gravity = 1.2; // const 선언시 변경 불가능! (대부분의 경우)

    return 0;

}

int main() {
    
    const int price_per_item = 30; // macro define 하는 것보다는 훨씬 바람직
    int num_item = 123;
    int price = num_item * price_per_item;

    constexpr int my_const(123); // 컴파일 타임의 값이 완전히 결정되는 상수라는 것을 컴파일 하면서 체크하겠다는 의미

    int number; 
    cin >> number;

    const int special_number(number); // 얘는 런타임 시점 때 할당됨

}