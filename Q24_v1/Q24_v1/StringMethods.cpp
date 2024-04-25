#include <string>
#include <iostream>
using namespace std;

int main()
{
	string myFullName = "Joshua Welu";
	cout << "My full name is: " << myFullName << endl;

	myFullName = "Welu Joshua";
	cout << "My full name is: " << myFullName << endl;

	string appendedStr = myFullName;
	appendedStr.append(" CSC 121 Final Lecture on String Methods");
	cout << "The appended string is: " << appendedStr << endl;

	appendedStr.replace(20, 5, "Class");
	cout << "The replaced string is: " << appendedStr << endl;

	cout << "Number of characters in the string: " << appendedStr.length() << endl;

	return 0;
}