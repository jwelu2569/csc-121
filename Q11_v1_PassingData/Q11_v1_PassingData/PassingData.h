#pragma once
class PassingData
{
private:

public:
	void square1(int aNumber); // pass by value
	void square2(int& aNumber); // pass by reference
	void square3(int* aNumber); // pass by pointer
};