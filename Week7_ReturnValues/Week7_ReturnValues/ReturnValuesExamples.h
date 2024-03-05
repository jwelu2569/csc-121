#pragma once
class ReturnValuesExamples
{
private:

public:
	char foo1(char aLetter); // Return by value
	char& foo2(char aLetter); // Return by reference
	char* foo3(char aLetter); // Return by pointer
	char& foo4(char& aLetter); // Return by reference

};