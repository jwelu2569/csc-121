#include "SalesTax.h"
#include <iostream>
using namespace std;

void SalesTax::displayData()
{
	double purchasePrice = 95;
	double stateSalesTax = 0.065;
	double countySalesTax = 0.02;
	double totalTax = 0.0;
	double totalPrice = 0.0;

	totalTax = (stateSalesTax + countySalesTax) * purchasePrice;
	totalPrice = purchasePrice + totalTax;

	cout << "Purchase Price: " << purchasePrice << endl;
	cout << "Total Tax: " << totalTax << endl;
	cout << "Total Price: " << totalPrice << endl;
}