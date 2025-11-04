// Char.. ASCILL TABLE로 숫자와 문자를 대응

#include <iostream>
using namespace std;

// int main() {
//     char c1(65);
//     char c2('A'); // single quote .. 문자열을 쓸 때는 double quote

//     cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl; 

//     // c-style casting
//     cout << (char)65 << endl;
//     cout << (int)'A' << endl;

//     // cpp-style casting
//     cout << char(65) << endl;
//     cout << int('A') << endl;

//     cout << static_cast<char>(65) << endl;
//     cout << static_cast<int>('A') << endl;
    
// }

// int main() {
//     char c1(65);

//     cin >> c1;
//     cout << c1 << " " << static_cast<int>(c1) << endl;

//     cin >> c1;
//     cout << c1 << " " << static_cast<int>(c1) << endl;

//     return 0;
// }

int main() {
    cout << "This is first line \a second line" << endl;

    wchar_t c; // 얘 쓰지 마셈
    char32_t c2; // 유니코드... 

    cout << "Hello, \u0444!\n";

    return 0;
}