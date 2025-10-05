#include <iostream>

using namespace std;


void my_function() {

}

int main() {

    // void my_void; 안됨 ㅋㅋ

    int i = 123;
    float f = 123.456f;

    void *my_void;

    my_void = (void*)&i;
    my_void = (void*)&f;

    return 0;

}

