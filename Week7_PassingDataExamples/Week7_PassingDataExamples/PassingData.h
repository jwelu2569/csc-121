#pragma once
class PassingData
{
private:

public:
	void foo1(int aNumber); // pass by value
	void foo2(int& aNumber); // pass by reference
	void foo3(int* aNumber); // pass by pointer
	// Write a method called square which takes an argument and squares it
	// demonstrate pass by value, pass by reference, pass by pointer, confirming the result is squared.
	// cout result in main and in square method.
	// class name could be anything
};