// 반복문 for

#include <iostream>

using namespace std;

int main()
{
    for (int count = 0; count < 10; ++count) // iteration
    {
        cout << count << endl;
    }
}

int pow(int base, int exponent)
{
    int result = 1;

    for (int count = 0; count < exponent; ++count)
    {
        result *= base;

        return result;
    }
}

int main2()
{
    cout << pow(2, 4) << endl;
}

int main3()
{
    for (int count = 9; count >= 0; count -= 2)
    {
        cout << count << endl;

    }
}

int main4()
{
    for (int i = 0, j = 0; i < 10; ++i, --j)
    {
        cout << i << " " << j << endl;
    }
}

int main5() 
{
    for (int j = 0; j < 9; ++j)
        for (int i = 0; i < 9; ++i)
        {
            cout << i << " " << j << endl;
        }
}

int main6()
{
    for (unsigned int i = 9; i >= 0; --i)
    {
        cout << i << endl;
    }

    return 0;
}