#include "ReturnValuesExamples.h"
#include <iostream>
using namespace std;

int main()
{
	char c = 'n';
	char c1;
	char* c2;
	ReturnValuesExamples r;

	c1 = r.foo1(c);
	cout << "Using foo1: " << c << " converted to " << c1 << endl;

	c1 = r.foo2(c);
	cout << "Using foo2: " << c << " converted to " << c1 << endl;

	c2 = r.foo3(c);
	cout << "Using foo3: " << c << " converted to " << *c2 << endl;

	c1 = r.foo4(c);
	cout << "Using foo4: " << c << " converted to " << c1 << endl;

	return 0;
}