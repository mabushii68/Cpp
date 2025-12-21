// 비트 플래그, 비트 마스크 사용법

#include <iostream>
#include <bitset>

using namespace std;

int main() { 
    bool item1_flag = false;
    bool item2_flag = false;
    bool item3_flag = false;
    bool item4_flag = false;
    // ... 이렇게 하지말고. unsigned char 하나로 관리 가능

    const unsigned char opt0 = 1 << 0; 
    const unsigned char opt1 = 1 << 1;
    const unsigned char opt2 = 1 << 2;
    const unsigned char opt3 = 1 << 3;
    // opt4, 5, 6, 7, ...   

    cout << bitset<8>(opt0) << endl;
    cout << bitset<8>(opt1) << endl;
    cout << bitset<8>(opt2) << endl;
    cout << bitset<8>(opt3) << endl;

    // unsigned char items_flag = 0;
    // cout << bitset<8>(items_flag) << endl; // 이렇게 하면 1bit로 8개의 아이템 상태 변경 가능..!!

    unsigned char items_flags = 0;
    cout << "No item" << bitset<8>(items_flags) << endl;

    // item0 on
    items_flags |= opt0;
    cout << "Item0 obtainted : " << bitset<8>(items_flags) << endl;

    // item3 on
    items_flags |= opt3;
    cout << "Item3 obtainted : " << bitset<8>(items_flags) << endl;

    // item3 lost
    items_flags &= ~opt3;
    cout << "Item3 lost : " << bitset<8>(items_flags) << endl;

    // has item1 ?
    if (items_flags & opt1) {
        cout << "Has item1" << endl;
    }


    // obtain item2, 3
    items_flags |= (opt2 | opt3);
    cout << bitset<8>(opt2 | opt3) << endl;
    cout << "Item2, 3 obtained" << bitset<8>(items_flags) << endl;

    if ((items_flags & opt2) && !(items_flags & opt1)) {
        items_flags ^= opt2;
        items_flags ^= opt1; 
        // items flags ^= (opt1 | opt2);
    }
    cout << bitset<8>(items_flags) << endl;

    // 예제
    // glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    unsigned int pixel_color = 0xDAA520;
    cout << bitset<32>(pixel_color) << endl;
    
    unsigned char red, green, blue;

    return 0;
}