#include "AsciiTest.h"
#include <iostream>
using namespace std;

void AsciiTest::doSomething()
{
	int myNumbers[26] = { 0 }; //myNumbers is an array of 26 integers
	// where each integer initialized to 0, index goes from 0 to 25
	char c = 'A';
	char bell = static_cast<char>(7);
	int j = 0;

	j = 97;
	for (int i = 0; i < 26; i++)
	{
		myNumbers[i] = j;
		j++;
	}
	for (int i = 0; i < 26; i++)
	{
		cout << myNumbers[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 26; i++)
	{
		cout << static_cast<char>(myNumbers[i]) << " ";
	}

	cout << endl;
	cout << bell << endl;
}

void AsciiTest::convertDigitSmallLetters()
{
	// Convert 0-9 to a-j
	int i = '0'; // i = 48

	for (int j = 0; j < 10; j++)
	{
		cout << static_cast<char>(i) << ":" << static_cast<char>(i + 49) << " ";
		i++;
	}
	cout << endl;
}

void AsciiTest::capitalizeSmallLetters()
{
	int i = 'a'; // i = 97

	for (int j = 0; j < 26; j++)
	{
		cout << static_cast<char>(i) << ":" << static_cast<char>(i - 32) << " ";
		i++;
	}
	cout << endl;

}

void AsciiTest::smallLettersCapital()
{
	int i = 'A'; // i = 97

	cout << endl;

	for (int j = 0; j < 26; j++)
	{
		cout << static_cast<char>(i) << ":" << static_cast<char>(i + 32) << " ";
		i++;
	}
	cout << endl;
}
