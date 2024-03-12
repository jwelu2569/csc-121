#include "SimpleStat.h"
#include <iostream>
using namespace std;
// Client Program

/*************************************
 *                main               *
 *************************************/
int main()
{
	int num1;
	//SimpleStat statHelper;
	SimpleStat s1(0, 0, 0, 0);

	cout << "Please enter the set of non-negative integer \n";
	cout << "values you want to average. Separate them with \n";
	cout << "spaces and enter -1 after the last value. \n\n";

	cin >> num1;
	while (num1 >= 0)
	{
		s1.addNumber(num1); // sum = 10, largest = 10
		cin >> num1;
	}
	cout << "\nYou entered " << s1.getCount() << " values. \n";
	cout << "The largest value was " << s1.getLargest() << endl;
	cout << "The smallest value was " << s1.getSmallest() << endl;
	cout << "The average value was " << s1.calcAverage() << endl;

	return 0;
}