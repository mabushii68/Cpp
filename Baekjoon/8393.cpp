#include <iostream> 
using namespace std;

int main(int argc, char *argv[]) {
    
    int n;
    int sum = 0;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }
    cout << sum;
    return 0;
}

// 1 + 2 + 3 + ... + n