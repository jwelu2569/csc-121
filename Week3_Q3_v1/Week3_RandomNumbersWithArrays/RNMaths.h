#pragma once

class RNMaths
{
private:
	int myNumbers[25]; // array of 20 int
					// array saves numbers for later use
	int total = 0; // running total of all the random numbers
	double totalAverage = 0.0;

public:
	void generateRN();
	void calcTotal();
	void calcAverage();
	void displayArrayTotalAverage();
};

// quiz 2/1/24:
// add new method to calculate the average of the 25 random numbers
// call the method: calcAverage()
// change the displayArrayTotal() method, call it: displayArrayTotalAverage()
// test it from EndUserTest()

// Don't call addTenTotal(), remove it from main()