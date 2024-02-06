#pragma once
#include "CharString.h"
#include <iostream>
#include <string>
using namespace std;

void CharStrings::method1() // >>
{
	string myWord = "";

	cout << "Enter any word: ";
	cin >> myWord;
	cout << "Word entered is: " << myWord << endl;
}

void CharStrings::method2() // getline()
{
	string mySentence = "";

	cout << "Enter any sentence: ";
	getline(cin, mySentence);
	cout << "Word entered is: " << mySentence << endl;
}

void CharStrings::method3() // get()
{
	string myWord = "";
	char aLetter = '\0'; // null character

	cout << "Enter any word: ";
	aLetter = cin.get();
	cout << "Letter entered is: " << aLetter << endl;
	aLetter = cin.get();
	cout << "Letter entered is: " << aLetter << endl;
}

void CharStrings::method3_v2()
{
	string myWord = "";
	char aLetter = '\0'; // null character

	cout << "Enter any word: ";

	for (int i = 0; i < 5; i++)
	{
		aLetter = cin.get();
		cout << aLetter;
	}
	cout << endl;
}

void CharStrings::method3_v3()
{
	string myWord = "";
	char aLetter = '\0'; // null character

	cout << "Enter any word: ";

	while (aLetter != '\n')
	{
		aLetter = cin.get();
		cout << aLetter;
	}
	cout << endl;
}
