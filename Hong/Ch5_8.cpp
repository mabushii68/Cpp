// break, continue

#include <iostream>

using namespace std;

int main()
{
    int count = 0;
    while (true)
    {
        cout << count << endl;
        if (count == 10) break;
        count ++;
    }
    return 0;
}

void breakOrReturn()
{
    while (true)
    {
        char ch;
        cin >> ch;

        if (ch == 'b')
            break;

        if (ch == 'r')
            return;
    }

    cout << "Hello" << endl;
    
}

int main2()
{
    for (int i = 0; i < 10; ++i)
    {
        if (i % 2 == 0) continue;

        cout << i << endl;
    }
    return 0;
}

int main3()
{
    int count(0);

    do 
    {
        if (count == 5)
            continue;

        cout << count << endl;

        count++;
    }
    while (count < 10); // while (++count < 10);

    return 0; 
}