#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    cout << ((a>0 && b>0) ? "1" : (a<0 && b>0) ? "2" : (a<0 && b<0) ? "3" : "4") << endl;

    return 0;
}