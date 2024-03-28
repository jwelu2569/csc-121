#include "InterestEarned.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void InterestEarned::calcFinalBalance()
{
	double principal = 0, rate = 0, finalBalance = -1;
	int t = -1; // T, number of compounding per year
	// e.g. t - 12 if compounded monthly
	cout << "Enter Principal, Rate (in %), Compounds per year: ";
	cin >> principal >> rate >> t;

	rate = rate / 100; //convert user-typed rate from % to decimal

	finalBalance = principal * pow((1 + rate / t), t);

	cout << fixed << showpoint << setprecision(2);
	cout << endl << endl;
	cout << "---------------------------------------------" << endl;

	cout << left << setw(26) << "Interest Rate: " << rate * 100 << "%" << endl;
	cout << left << setw(26) << "Times Compounded: " << t << endl;
	cout << left << setw(22) << "Principal: " << "$ " << principal << endl;
	cout << left << setw(22) << "Interest: " << "$ " << finalBalance - principal << endl;
	cout << left << setw(22) << "Final Balance: " << "$ " << finalBalance << endl;
}