#include "Algos.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream inStream{ "myData.txt" }; // put text from myData.txt into inStream

	Algos a;
	// int someNumbers[10] = { 10, 15, 12, 18, 6, 2, 1, -20, 0, 100 };
	int* someNumbers = new int[10];

	for (int i = 0; i < 10; i++)
	{
		inStream >> someNumbers[i];
	}

	char someChars[10] = { 'u', 'i', 'f', 'x', 'e', 'l', 'p', 'o', 'a', 'r' };
	string someStrings[10]{ "Hi", "how", "was", "your", "day", "today", "at", "the", "dog", "park" };
	int sortedNumbers[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	int userNum = -1;
	int answer = -1;
	int c = 5;

	c = a.menu(c);

	while (c > 0 || c < 6)
	{
		if (c == 1)
		{
			cout << "Enter the number looking for: ";
			cin >> userNum;

			answer = a.linearSearch(userNum, someNumbers, 10);

			while (answer != -1) // linear search
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
			cout << userNum << " not found in array \n";
		}

		else if (c == 2) // binary search
		{
			cout << "Enter the number looking for: ";
			cin >> userNum;

			answer = a.binarySearch(userNum, sortedNumbers, 0, 9);
			cout << endl << userNum << " found at index " << answer << endl;
		}

		else if (c == 3) // bubble sort
		{
			cout << "Integer array before sorting: \n";
			for (int i = 0; i < 10; i++)
			{
				cout << someNumbers[i] << " ";
			}
			cout << endl;

			a.bubbleSortPointer(someNumbers, 10); // bubbleSort changed to pointer version

			cout << "Integer array after sorting: \n";
			for (int i = 0; i < 10; i++)
			{
				cout << someNumbers[i] << " ";
			}
			cout << endl;

			cout << "Character array before sorting: \n";
			for (int i = 0; i < 10; i++)
			{
				cout << someChars[i] << " ";
			}
			cout << endl;

			a.bubbleSort(someChars, 10);

			cout << "Character array after sorting: \n";
			for (int i = 0; i < 10; i++)
			{
				cout << someChars[i] << " ";
			}
			cout << endl;

			cout << "String array before sorting: \n";
			for (int i = 0; i < 10; i++)
			{
				cout << someStrings[i] << " ";
			}
			cout << endl;

			a.bubbleSort(someStrings, 10);

			cout << "String array after sorting: \n";
			for (int i = 0; i < 10; i++)
			{
				cout << someStrings[i] << " ";
			}
			cout << endl;
		}

		else if (c == 4) // selection sort
		{
			cout << "Integer array before sorting: \n";
			for (int i = 0; i < 10; i++)
			{
				cout << someNumbers[i] << " ";
			}
			cout << endl;

			a.selectionSortPointer(someNumbers, 10);

			cout << "Integer array after sorting: \n";
			for (int i = 0; i < 10; i++)
			{
				cout << someNumbers[i] << " ";
			}
			cout << endl;
		}

		else if (c == 5)
		{
			break;
		}

		else
		{
			cout << "\nPlease select one of the available options \n\n";
		}
		cout << endl;
		c = a.menu(c);
	}
	delete[] someNumbers; // eliminates memory leak
	someNumbers = nullptr; // eliminates dangling pointer

	return 0;
}