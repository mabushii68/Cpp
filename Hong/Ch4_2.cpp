// 전역 변수, 정적 변수, 내부 연결, 외부 연결 

#include <iostream>

using namespace std;

// int value = 123;

// int main() {

//     cout << value << endl;

//     int value = 1;

//     cout << value << endl; // 흠 저 위에 있는 걸 사용할 수는 없나? >> 글로벌 스코프 연산자 ..
//     cout << ::value << endl; // 123

//     return 0;
// }

// void doSomething() {

//     static int a = 1; // static이랑 전역 변수로 하는 거랑 결과가 같음..
//     // 메모리가 static이다. 메모리가 정적으로 선언이 된다. 
//     // static은 변수를 선언하고 그걸 기억하고 있다가 다시 그걸 재사용함. 그래서 전역 변수로 선언하는 거랑 결과가 같은 것
//     // static은 초기화가 무조건 되어야 한다.
//     ++a;
//     cout << a << endl;

// }

// int main() {

//     doSomething();
//     doSomething();

// }

// forward declaration
// extern void doSomething();

// int main() {

//     doSomething();

//     cout << doSomething << endl;

//     return 0;
// }

/*

    int g_x; // external linkage
    static int g_x; // internal linkage
    const int g_x; // X

    extern int g_z;
    extern const int g_z;

    int g_y(1);
    static int g_y(1);
    const int g_y(1);

    extern int g_w(1); // 이러면 다른 곳에서는 초기화 하면 안 됨
    extern const int g_w(1);

*/