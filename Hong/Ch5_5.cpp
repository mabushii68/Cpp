// 반복문 while

#include <iostream>

int main()
{
    using namespace std;

    cout << "While loop test" << endl;

    unsigned count = 0;

    while (count >= 0)
    {
        if (count == 0) cout << "zero";
        else cout << count << " ";

        count--;

    }
    return 0;
}