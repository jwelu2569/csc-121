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
	for (int i = 0; i < 25; i++)
	{
		myNumbers[i] = rand() % (maxValue - minValue + 1) + minValue; // e.g. generates any random number between 501 and 600 
																	// (1 through 100, +500)
	}
}

void RNMaths::calcTotal()
{
	total = 0;
	for (int i = 0; i < 25; i++)
	{
		total = total + myNumbers[i];
	}
}

void RNMaths::calcAverage()
{
	for (int i = 0; i < 25; i++)
	{
		myNumbers[i] = myNumbers[i];
		totalAverage = static_cast<double> (total) / 25;

	}
}

void RNMaths::displayArrayTotalAverage()
{
	for (int i = 0; i < 25; i++)
	{
		cout << "Random number " << i + 1 << ": " << myNumbers[i] << endl;
}
	cout << "\nGrand total: " << total << endl;
	cout << "\nAverage of Numbers Generated: " << totalAverage << endl;

}
