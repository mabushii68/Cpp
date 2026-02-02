// 열거형 enumerated types

#include <iostream>
#include <typeinfo>

int computeDamage(int weapon_id)
{
    if (weapon_id == 0) 
    {
        return 1;
    }

    if (weapon_id == 1) 
    {
        return 2;
    }

    // ...
}

enum Color
{
    COLOR_BLACK,
    COLOR_RED,
    ///....
}; 

enum Feeling
{
    COLOR_BLACK // 안됨 ㅋㅋ redifinition ㅇㅇ ㅋㅋ
};

int main() 
{

    using namespace std; 

    // Color paint = COLOR_BLACK;
    Color house(COLOR_RED);
    Color apple{COLOR_RED};

}