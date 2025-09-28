#include <iostream>

int main() {
    using namespace std;

    bool bValue = false;
    char chValue = 'A';
    float fValue = 3.141592f;
    double dValue = 3.141592;

    int i = (int)3.1415; // copy initialization
    int j = static_cast<int>(3.1415);
    int a(123); // direct initializaiton
    int b{ 123 }; // uniform initializaiton

    return 0;
}