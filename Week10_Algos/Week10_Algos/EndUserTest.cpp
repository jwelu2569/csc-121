#include "Algos.h"
#include <iostream>
using namespace std;

int main()
{
	Algos a;
	int someNumbers[10] = { 10, 15, 12, 18, 6, 2, 1, -20, 0, 100 };
	int userNum = -1;
	int answer = -1;

	cout << "Enter the number looking for: ";
	cin >> userNum;

	answer = a.linearSearch(userNum, someNumbers, 10);

	while (answer != -1)
	{
		for (int i=0; i<10; i++)
		{
			cout << someNumbers[i] << " ";
		}
		cout << endl << userNum << " found at index " << answer << endl;
		cout << "\nNext number: ";
		cin >> userNum;
		answer = a.linearSearch(userNum, someNumbers, 10);
	}
	cout << userNum << " not found in array";

	return 0;
}