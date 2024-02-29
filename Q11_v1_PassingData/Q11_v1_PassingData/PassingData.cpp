#include "PassingData.h"
#include <iostream>
#include <cmath>
using namespace std;

void PassingData::square1(int aNumber)
{
	aNumber = pow(aNumber, 2);
	cout << "square1: aNumber = " << aNumber << endl;
}

void PassingData::square2(int& aNumber)
{
	aNumber = pow(aNumber, 2);
	cout << "square2: aNumber = " << aNumber << endl;
}

void PassingData::square3(int* aNumber)
{
	*aNumber = pow(*aNumber, 2);
	cout << "square3: aNumber = " << *aNumber 
		<< " stored at memory address: " 
		<< aNumber << endl;
}
