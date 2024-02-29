#include "PassingData.h"
#include <iostream>
using namespace std;

void PassingData::foo1(int aNumber)
{
	aNumber = aNumber * 2;
	cout << "foo1: aNumber = " << aNumber << endl;
}

void PassingData::foo2(int& aNumber)
{
	aNumber = aNumber * 2;
	cout << "foo2: aNumber = " << aNumber << endl;
}

void PassingData::foo3(int* aNumber)
{
	*aNumber = *aNumber * 2;
	cout << "foo3: aNumber = " << *aNumber 
		<< " stored at memory address: "
		<< aNumber << endl;
}
