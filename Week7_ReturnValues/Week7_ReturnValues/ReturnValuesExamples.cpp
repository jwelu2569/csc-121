#include "ReturnValuesExamples.h"
#include <iostream>
using namespace std;

// Pass a small letter, return a Capital letter
char ReturnValuesExamples::foo1(char aLetter)
{
	int temp;

	temp = static_cast<int>(aLetter);
	temp = temp - 32;
	return static_cast<char>(temp);
}

// Pass a small letter, return a Capital letter
char& ReturnValuesExamples::foo2(char aLetter)
{
	char temp = aLetter;

//	temp = static_cast<int>(aLetter);
	temp = temp - 32;
	return temp;
}

// Pass a small letter, return a Capital letter
char* ReturnValuesExamples::foo3(char aLetter)
{
	char temp = aLetter;
	temp = temp - 32;
	return &temp;
}

char& ReturnValuesExamples::foo4(char& aLetter)
{
	char temp = aLetter;
	temp = temp - 32;
	return temp;
}
