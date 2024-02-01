#include "RNMaths.h"
#include <cstdlib> // provides rand(), srand()
#include <iostream>
using namespace std;

void RNMaths::generateRN()
{
	int minValue = 450, maxValue = 6000;
	// int aNumber = -1;

	srand(time(0)); // generator seeded with the current seconds since 
					// epoc (1st January, 1970)
	for (int i = 0; i < 20; i++)
	{
		myNumbers[i] = rand() % (maxValue - minValue + 1) + minValue; // e.g. generates any random number between 501 and 600 
																	// (1 through 100, +500)
	}
}

void RNMaths::calcTotal()
{
	total = 0;
	for (int i = 0; i < 20; i++)
	{
		total = total + myNumbers[i];
	}
}

void RNMaths::addTenTotal()
{
	for (int i = 0; i < 20; i++)
	{
		myNumbers[i] = myNumbers[i] + 10;
		cout << myNumbers[i] << endl;
		total = total + 10;
	}
}

void RNMaths::displayArrayTotal()
{
	for (int i = 0; i < 20; i++)
	{
		cout << myNumbers[i] << endl;
}
	cout << "\nGrand total: " << total << endl;
}
