// This menu-driven program uses an if/else statement to carry
// out the correct set of actions based on the user's menu choice.
#include "HealthCM.h"
#include <iostream>
#include <iomanip>
using namespace std;

void HealthCM::displayRate()
{
	// Display the menu and get the user's choice
	cout << " Health Club Membership Menu\n\n";
	cout << "1. Standard Adult Membership\n";
	cout << "2. Child Membership\n";
	cout << "3. Senior Citizen Membership\n";
	cout << "4. Family and Friends Membership\n";
	cout << "5. Quit the Program\n\n";
	cout << "Enter your choice: ";
	cin >> choice;

	if (choice > 0 && choice < 5)
	{
		cout << "For how many months? ";
		cin >> months;
	}
}

void HealthCM::calcHCM()
{
	// Constants for membership rates
	const double ADULT_RATE = 120.0;
	const double CHILD_RATE = 60.0;
	const double SENIOR_RATE = 100.0;
	const double FANDF_RATE = 10.0;

	// Set the numeric output formatting
	cout << fixed << showpoint << setprecision(2);

	// Use the menu selection to execute the correct set of actions
	if (choice == 1)
	{
		charges = months * ADULT_RATE;
	}
	else if (choice == 2)
	{
		charges = months * CHILD_RATE;
	}
	else if (choice == 3)
	{
		charges = months * SENIOR_RATE;
	}
	else if (choice == 4)
	{
		charges = months * FANDF_RATE;
	}
}

void HealthCM::displayFee()
{
	if (choice > 0 && choice < 5)
	{
		cout << "\nThe total charges are $" << charges << endl;
	}
	else if (choice != 5)
		{
			cout << "\nThe valid choices are 1 through 5.\n"
				<< "Run the program again and select one of those.\n";
	}
	cout << "\nHave a Great Day!\n";
}
