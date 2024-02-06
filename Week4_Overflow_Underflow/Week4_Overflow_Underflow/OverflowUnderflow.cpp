#pragma once

#include "OverflowUnderflow.h"
#include <iostream>
using namespace std;

void OverflowUnderflow::overflowExample()
{
	aNumber = aNumber + 1;
	cout << "aNumber = " << aNumber << endl;
}

void OverflowUnderflow::underflowExample()
{
	aNumber = aNumber - 1; 
	cout << "aNumber = " << aNumber << endl;
}

void OverflowUnderflow::scientificUnderflow()
{
	float a1Number = 3.0E-47; // 3.0 * 10^47
	cout << "a1Number = " << a1Number << endl;
}
