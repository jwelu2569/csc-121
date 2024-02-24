#include "InterestEarned.h"
#include <iostream>
#include <cmath>
using namespace std;

void InterestEarned::calculateIE()
{
	double rate = 0.0; // input for % rate
	double annualRate = 0.00;
	int t = 0; // times compounded
	double principal = 0.0;
	double interest = 0.0;
	double balance = 0.0;

	cout << "Enter principal, annual interest rate, and the number of times interest is compounded: ";
	cin >> principal >> annualRate >> t; // input for assignment is "1000 4.25 12"

	rate = annualRate / 100; // converting rate to decimal value
	balance = principal * pow((1 + (rate / t)), t);
	interest = balance - principal;

	cout << "Interest Rate: " << annualRate << "%" << endl;
	cout << "Times Compounded: " << t << endl;
	cout << "Principal: $" << principal << endl;
	cout << "Interest: $" << interest << endl;
	cout << "Final Balance: $" << balance << endl;

}
