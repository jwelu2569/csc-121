#include "ChooseCharacter.h"
#include <iostream>
using namespace std;

void ChooseCharacter::displayMenu()
{
	int choice = 0;

	cout << "1. Enter a digit or a letter. \n";
	cout << "2. Quit \n";
	cin >> choice;

	if (choice == 1)
	{
		cout << "Your digit/letter: ";
		showCharacter();
	}
	else if (choice != 2)
	{
		cout << "Please choose 1 or 2.\n";
		displayMenu();
	}
	
}
void ChooseCharacter::showCharacter()
{
	char ch = 0;

	cin >> ch;

	if (isdigit(ch))
		cout << "You entered a digit.\n";
	else if (isupper(ch))
		cout << "You entered an uppercase letter.\n";
	else if (islower(ch))
		cout << "You entered a lowercase letter.\n";
	else
		cout << "That is not a digit or a letter.\n";

	displayMenu();
}