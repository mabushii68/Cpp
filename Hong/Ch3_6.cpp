// == 논리 연산자 logical operators

#include <iostream>

using namespace std;

int main() {

    // logical NOT : !
    bool x = true;
    cout << !x << endl;

    // logical AND : && (둘 다 true일 때만 true)
    bool y = true;
    bool z = false;
    cout << (y && z) << endl;

    // AND ex. 게임 캐릭터가 공격에 맞았을 때
    bool hit = true;
    int health = 10;

    if (hit == true && health < 20) {
        cout << "die" << endl;
    }
    else {
        health -= 20;
    }

    // logical OR : || (둘 중에 하나만 true이면 true)
    bool a = true;
    bool b = false;
    cout << (a || b) << endl;

    // short circuit evalutaion
    int c = 2;
    int d = 2;

    if (c == 1 && d++ == 2) {
        // do something 
    }

    cout << d << endl; // 2 => AND operator 입장에선 왼쪽 계산하고 false이면 오른쪽 계산 안 함. 그래서 y++ 계산 X

    // De Morgan's Law (둘이 같지 않음)
    !(a && b);
    !a && !b;

    // XOR 
    // false false : false
    // false true : true
    // true false : true
    // true true : false

    bool v1 = true;
    bool v2 = false;
    bool v3 = false;

    bool r1 = v1 || v2 && v3;
    bool r2 = (v1 || v2) && v3; // 같겠지 ~ ㅇㅈ ? 
    // &&가 ||보다 우선순위 높대 아
    bool r3 = v1 || (v2 && v3); // 때문에 실제로는 이렇게 보임;
    cout << r1 << endl; // 1
    cout << r2 << endl; // 0 

    return 0;
}