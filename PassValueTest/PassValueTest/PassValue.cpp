#include "PassValue.h"
// This program uses a reference variable as a function parameter.
#include <iostream>
using namespace std;
// Function prototype. The parameter is a reference variable.
/**************************************************************
* doubleNum *
* This function's parameter is a reference variable. The & *
* tells us that. This means it receives a reference to the *
* original variable passed to it, rather than a copy of that *
* variable's data. The statement refVar *= 2 is doubling the *
* data stored in the value variable defined in main. *
**************************************************************/
void PassValue::doubleNum(int& refVar)
{
	refVar *= 2;
	cout << "Now calling doubleNum..." << refVar << endl;
}
void PassValue::doubleNum2(int* refVar)
{
	*refVar *= 2;
	cout << "Now calling doubleNum2..." << *refVar << endl;
}
