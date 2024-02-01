#include "RNMaths.h"
#include <cstdlib> // provides rand(), srand()
#include <iostream>
using namespace std;

void RNMaths::generateRN()
{
	// int aNumber = -1;
	int total = 0; // running total of all the random numbers
	int myNumbers[20]; // array of 20 int
						// array saves numbers for later use

	srand(time(0)); // generator seeded with the current seconds since 
					// epoc (1st January, 1970)
	for (int i = 0; i < 20; i++)
	{
		myNumbers[i] = rand();
		cout << "Random Number " << i + 1 << ": " << myNumbers[i] << endl;
	}

	for (int i = 0; i < 20; i++)
	{
		total = total + myNumbers[i];
	}
	cout << "\nGrand total: " << total << endl;

	// quiz: write a new for loop to do:
	// 1. add 10 to each of the array elements
	// 2. find the new total
	// 3. cout the new total
	// 4. compare the old total vs new total: is it 200 more?

	cout << endl;
	for (int i = 0; i < 20; i++)
	{
		myNumbers[i] = myNumbers[i] + 10;
		cout << "Random Number " << i + 1 << " + 10: " << myNumbers[i] << endl;
		total = total + 10;
	}
	cout << "\nNew Grand Total: " << total << endl;

}