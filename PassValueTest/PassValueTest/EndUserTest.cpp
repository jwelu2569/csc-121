#include "PassValue.h"
#include <iostream>
using namespace std;
int main()
{
	int value = 4;
	cout << "In main, value is " << value << endl;
	PassValue p;
	p.doubleNum(value);
	cout << "Now back in main, value is " << value << endl;

	cout << "\nIn main, value is " << value << endl;
	p.doubleNum2(&value);
	cout << "Now back in main, value is " << value << endl;
	return 0;
}
