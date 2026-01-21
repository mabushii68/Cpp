// auto 키워드와 자료형 추론

#include <iostream>

auto add(int x, int y) -> int
{
    return x + double(y);
}

int main() 
{

    int a = 123; // 중복된 정보가 있음. 아무래도 참교육을 해야할듯.
    auto b = 123;
    auto c = 1 + 2.0;
    auto d = 123.0;
    auto result = add(1,2);

    return 0;

}