#include "RestaurantBill.h"
#include <iostream>
using namespace std;

void RestaurantBill::displayData()
{
	double mealCharge = 44.50;
	double mealTax = 0.0675;
	double mealTip = 0.15;
	double totalTax = 0.0;
	double totalPrice = 0.0;
	double totalTip = 0.0;

	totalTax = mealTax * mealCharge;
	totalTip = mealTip * mealCharge;
	totalPrice = mealCharge + totalTax + totalTip;

	cout << "Meal Cost: " << mealCharge << endl;
	cout << "Tax Amount: " << totalTax << endl;
	cout << "Tip Amount: " << totalTip << endl;
	cout << "Total Bill: " << totalPrice << endl;
}
