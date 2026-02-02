// 영역 제한 열거형 클래스

#include <iostream>

// int main()
// {
//     using namespace std;

//     enum Color
//     {
    
//         RED,
//         BLUE,

//     }; 

//     enum Fruit
//     {
    
//         BANANA,
//         APPLE,
        
//     };

//     Color color = RED;
//     Fruit fruit = BANANA;

//     if (color == fruit)
//     {
//         cout << "Color is fruit ? " << endl; // 같다고 나옴. enum은 내부적으로 int형이기 때문
//     }

//     return 0;

// }

int main()
{
    using namespace std;

    enum class Color
    {
    
        RED,
        BLUE,

    }; 

    enum class Fruit
    {
    
        BANANA,
        APPLE,
        
    };

    Color color = Color::RED;
    Fruit fruit = Fruit::BANANA;

    // if (color == fruit) 영역 제한 때문에 비교 불가
    // {
    //     cout << "Color is fruit ? " << endl; 
    // }

    return 0;

}