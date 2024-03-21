#include "Algos.h"
#include <iostream>
using namespace std;

int main()
{
	Algos a;
	int someNumbers[10] = { 10, 15, 12, 18, 6, 2, 1, -20, 0, 100 };
	int sortedNumbers[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	int userNum = -1;
	int answer = -1;
	int choice = 0;

	a.menu(choice);

	cout << "Enter the number looking for: ";
	cin >> userNum;

	if (choice == 1)
	{
		answer = a.linearSearch(userNum, someNumbers, 10);

		while (answer != -1)
		{
			for (int i = 0; i < 10; i++)
			{
				cout << someNumbers[i] << " ";
			}
			cout << endl << userNum << " found at index " << answer << endl;
			cout << "\nNext number: ";
			cin >> userNum;
			answer = a.linearSearch(userNum, someNumbers, 10);
		}
		cout << userNum << " not found in array";
	}

	if (choice == 2)
	{
		answer = a.binarySearch(userNum, sortedNumbers, 0, 9);
		cout << endl << userNum << " found at index " << answer << endl;
	}

	if (choice == 3)
	{
		cout << "Array before sorting: \n";
		for (int i = 0; i < 10; i++)
		{
			cout << someNumbers[i] << " ";
		}
		cout << endl;

		a.bubbleSort(someNumbers, 10);

		cout << "Array after sorting: \n";
		for (int i = 0; i < 10; i++)
		{
			cout << someNumbers[i] << " ";
		}
		cout << endl;
	}

	if (choice == 5)
	{
		return 0;
	}
	else a.menu(choice);
}