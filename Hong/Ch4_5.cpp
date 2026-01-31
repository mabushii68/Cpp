// 형변환 Type conversion

#include <iostream>
#include <typeinfo>

int main() 
{
    using namespace std;

    float a = 1.0f;
    double d = a; // numeric promotion

    double dd = 3;
    short s = 2; // numeric conversion

    int i = 30000;
    char c = i;

    cout << static_cast<int>(c) << endl;

    cout << typeid(4.0).name() << endl;

    return 0;
}

// int, unsigend int, long, unsigned long,
// long long, unsigned long long, float, double, 
// long double

// 우선순위임.. 그러니까 int 랑 unsigned int는 형변환이 막 스무스하게 되는건 아님 .ㅇ..ㅇ.ㅇ