// 문자열 std string 소개

#include <iostream>
#include <string>

using namespace std;

int main() 
{
    const char my_strs[] = "Hello World";
    const string my_hello = "Hello World";

    cout << my_hello << endl;

    ///////////////////////////

    cout << "Your name ? :";
    string name;
    getline(cin, name);

    cout << "Your age ? : ";
    string age;
    getline(cin, age);

    //////////////////////////

    string a("Hello , ");
    string b("World");
    string hw = a + b; // append

    hw += "I'm good";

    return 0;
}

// 스트링 스트링 ~