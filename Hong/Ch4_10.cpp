// 구조체 struct

#include <iostream>
#include <string>

using namespace std;

struct Person
{
    double height;
    float weight;
    int age;
    string name;

    void print()
    {
    cout << height << " " << weight << " " << age << " " << name;
    cout << endl;
    }
};

void printPerson(Person ps)
{
    cout << ps.height << " " << ps.weight << " " << ps.age << " " << ps.name;
    cout << endl;
}


int main() 
{
    Person me{2.0, 100.0, 20, "Jack Jack"};
    printPerson(me);
    me.print();

    /*
    me.age = 20;
    me.name = "Jack Jack";
    me.height = 2.0;
    me.weight = 100.0;
    */
    
    Person mom;
    Person dad;

    return 0;
}

struct Employee // sizeof(Employee) --> 2 + (2) + 4 + 8 = 16 // "padding"
{
    short id; // 2 bytes
    int age; // 4 bytes
    double wage; // 8 bytes
};
