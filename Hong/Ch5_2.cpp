// 조건문 if

#include <iostream>

int min(int x, int y)
{
    return (x > y) ? y : x;
}

int main() 
{
    using namespace std;

    int x;
    cin >> x;
    if (x > 10)
    {
        ; // null statement
    }
    return 0;
}