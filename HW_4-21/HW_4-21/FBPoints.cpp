#include "FBPoints.h"
#include "FBPoints.h"
#include <iostream>
using namespace std;

void FBPoints::displaySubstance()
{
	cout << "Ethyl Alcohol\nMercury\nOxygen\nWater\n\n";
	cout << "Please enter a temperature (in degrees Fahrenheit) to find out which the above substances will boil or freeze: ";
	cin >> temp;
}

void FBPoints::findTemp()
{
	const int ethylFreeze = -173,
		ethylBoil = 172,
		mercuryFreeze = -38,
		mercuryBoil = 676,
		oxygenFreeze = -362,
		oxygenBoil = -306,
		waterFreeze = 32,
		waterBoil = 212;

	if (temp <= ethylFreeze)
	{
		cout << "Ethyl Alcohol will freeze at this temperature\n";
	}
	if (temp >= ethylBoil)
	{
		cout << "Ethyl Alcohol will boil at this temperature\n";
	}
	if (temp <= mercuryFreeze)
	{
		cout << "Mercury will freeze at this temperature\n";
	}
	if (temp >= mercuryBoil)
	{
		cout << "Mercury will boil at this temperature\n";
	}
	if (temp <= oxygenFreeze)
	{
		cout << "Oxygen will freeze at this temperature\n";
	}
	if (temp >= oxygenBoil)
	{
		cout << "Oxygen will boil at this temperature\n";
	}
	if (temp <= waterFreeze)
	{
		cout << "Water will freeze at this temperature\n";
	}
	if (temp >= waterBoil)
	{
		cout << "Water will boil at this temperature\n";
	}
}
