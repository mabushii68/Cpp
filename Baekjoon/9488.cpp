#include <iostream>

using namespace std;

int main() 
{
    int a;
    
    cin >> a;

    cout << ((a>=90 && a<=100) ? "A" : (a>=80 && a<=89) ? "B" :
    (a>=70 && a<=79) ? "C" : (a>=60 && a<=69) ? "D" : "F");

    return 0;
}