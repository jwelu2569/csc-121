#include "MyUtility.h"
#include "Info.h"
#include <iostream> // cin, cout
#include <fstream> // ifstream, ofstream 
#include <cctype>  // for toupper
#include <string> // for getline, string
using namespace std;

void MyUtility::writeRecord()
{
	Info person;
    char response; // User response, types y or Y to continue
    string input;  // Used to read strings

	// Create file object and open file
	fstream people("people3.dat", ios::out | ios::binary);
	if (!people)
	{
		cout << "Error opening file. Program aborting.\n";
	}
    do
    {
        cout << "Enter person information:\n";
        cout << "Name: ";
        getline(cin, input);
        strcpy_s(person.name, input.c_str());  // c_str method converts a string
        // datatype into a "c_string" which is an array of characters, but 
        // ending with a null character '\0'. Every cstring ends with a \0
        cout << "Age: ";
        cin >> person.age;
        cin.ignore(); // Skip over remaining newline
        cout << "Address line 1: ";
        getline(cin, input);
        strcpy_s(person.address1, input.c_str());
        // cout << "Address line 2: ";
        // getline(cin, input);
        // strcpy_s(person.address2, input.c_str());
        cout << "Phone: ";
        getline(cin, input);
        strcpy_s(person.phone, input.c_str());
        people.write(reinterpret_cast<char*>(&person), // person is an object
            // of the person object, so &person is a pointer to a person object
            sizeof(person));
        cout << "Do you want to enter another record? ";
        cin >> response;
        cin.ignore();
    } while (toupper(response) == 'Y');

    // Close file
    people.close();
}

void MyUtility::readRecord()
{
    Info person;
    char response; // User response, types y or Y to continue
    string input;  // Used to read strings

    // Create file object and open file for binary reading
    fstream people("people3.dat", ios::in | ios::binary);
    if (!people)
    {
        cout << "Error opening file. Program aborting.\n";
    }

    // Label the output
    cout << "Here are the people in the file:\n\n";

    // Read one structure at a time and echo to screen
    people.read(reinterpret_cast<char*>(&person),
        sizeof(person));
    while (!people.eof())
    {
        cout << "Name: ";
        cout << person.name << endl;
        cout << "Age: ";
        cout << person.age << endl;
        cout << "Address line 1: ";
        cout << person.address1 << endl;
        // cout << "Address line 2: ";
        // cout << person.address2 << endl;
        cout << "Phone: ";
        cout << person.phone << endl;
        cout << "\nStrike any key to see the next record.\n";
        cin.get(response);
        people.read(reinterpret_cast<char*>(&person),
            sizeof(person));
    }
    people.close();
}
