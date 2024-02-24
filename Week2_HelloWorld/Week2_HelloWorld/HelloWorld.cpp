#include "HelloWorld.h"
#include <iostream>
using namespace std;

void HelloWorld::sayHelloWorld()
{
	cout << "Hello " << myFirstName << ", nice to meet you!\n";

}

void HelloWorld::askName()
{
	cout << "Please enter your first name: ";
	cin >> myFirstName;

}

void HelloWorld::askAge()
{
	cout << "Please enter your age: ";
	cin >> myAge;
	cout << "You're " << myAge << " years old. That's nice!\n";
}
