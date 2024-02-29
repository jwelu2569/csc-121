#include "PassingData.h"
#include <iostream>
using namespace std;

int main()
{
	PassingData p;
	int i = 10;

	p.square1(i);
	cout << "main: line 9: i = " << i << endl << endl;
	p.square2(i);
	cout << "main: line 13: i = " << i << endl << endl;
	p.square3(&i); // addressOf operator to get the memory
				// where i value is stored
	cout << "main: line 15: i = " << i << endl;

	return 0;
}