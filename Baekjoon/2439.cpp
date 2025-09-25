#include <iostream>

using namespace std;

int main() {

    int N;
    cin >> N;

    for (int i = 1; i <= N; ++i) { // 1부터 4까지 돈다

        for (int j = 0; j < N - i; ++j) { // 0부터 2까지 돈다
            cout << " ";
        }

        for (int j = 0; j < i; ++j) {
            cout << "*";
        }

        cout << "\n";
    }
}