#include <iostream>

using namespace std;

int main()
{
    // memory leak
    while (true) 
    {
        int *ptr = new int;

        cout << ptr << endl;
    }

    // delete 필수
}