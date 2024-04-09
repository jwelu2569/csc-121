#pragma once
#include <string>
using namespace std;
// Person class
class Person
{
private:
    string name = " ";
    int age = -1;
public:
    Person(string name1, int age1) // overloaded constructor
    {
        name = name1;
        age = age1;
    }
    int getAge() { return age; }
    string getName() { return name; }
};