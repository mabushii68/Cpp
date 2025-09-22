// A와 B를 입력받음
// A + B 출력

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) { 

    int A, B, T;
    cin >> T;

    for (int i = 1; i <= T; i++) {
        cin >> A >> B;
        cout << A + B << endl;
    }
    return 0;
}