#include <iostream> 

using namespace std;

int main()
{
    int x = 5;

    cout << x << endl;
    cout << &x << endl; // & : address of operator
    cout << (int)&x << endl;

    // de-reference operator (*) 
    // 포인터가 간접적으로 저기에 뭐 있어요! 하면
    // de-reference가 직접적으로 확인해줌

    cout << *(&x) << endl; 

    return 0;
}