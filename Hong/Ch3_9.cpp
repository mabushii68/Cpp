// 비트 플래그, 비트 마스크 사용법

#include <iostream>
#include <bitset>

using namespace std;

int main() { 
    bool item1_flag = false;
    bool item2_flag = false;
    bool item3_flag = false;
    bool item4_flag = false;
    // ...

    unsigned char items_flag = 0;
    cout << bitset<8>(items_flag) << endl; // 이렇게 하면 1bit로 8개의 아이템 상태 변경 가능..!!

    // event!
    item1_flag = true;

    // die! item2 los
    item2_flag = false;

    if (item3_flag == true) {
        // event
    }

    if (item3_flag == true && item4_flag == false) {
        item3_flag = false;
        item4_flag = true;
    }

    return 0;
}