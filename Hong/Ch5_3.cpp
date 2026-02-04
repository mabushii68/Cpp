// switch-case

#include <iostream>

using namespace std;

enum class Colors
{
    BLACK,
    WHITE,
    RED,
    GREEN,
    BLUE,
}; 

void printColorName(Colors color)
{

    // if (color == Colors::BLACK)
    // {
    //     cout << "Black" << endl;
    // }

    // else if (color == Colors::WHITE)
    // {
    //     cout << "White" << endl;
    // }

    // else if (color == Colors::RED)
    // {
    //     cout << "RED" << endl;
    // }

    switch (static_cast<int>(color))
    {
    case 0:
        cout << "Black" << endl;
        break;
    case 1:
        cout << "White" << endl;
        break;
    }
}

int main()
{
    // printColorName(Colors::BLACK);

    int x;
    cin >> x;

    {
        switch (x)
        {
        case 0:
            cout << "Zero";
            break; // 의도적으로 break를 안 쓰는 경우도 있음
        case 1:
            cout << "One";
            break;
        case 2:
            cout << "Two";
            break;
        }
        
        cout << endl;
    }

    return 0;
}