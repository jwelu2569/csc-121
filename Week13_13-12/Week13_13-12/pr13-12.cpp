//This program demonstrates the use of a structure variable to 
//store a record of information to a file. 
#include <iostream> // cin, cout
#include <fstream> // ifstream, ofstream 
#include <cctype>  // for toupper
#include <string> // for getline, string
using namespace std;

const int NAME_SIZE = 51, ADDR_SIZE = 51, PHONE_SIZE = 14; // named constants
class Info // 171 bytes approx.
{
public:
    char name[NAME_SIZE]; // 51 bytes
    int age; // 4 bytes
    char address1[ADDR_SIZE]; // 51 bytes
  //  char address2[ADDR_SIZE]; // 51 bytes
    char phone[PHONE_SIZE]; // 14 bytes
};

int main1() {
    Info person;   // Store information about a person
    //cout << "Size of Info structure: " << sizeof(person) << endl;
    char response; // User response, types y or Y to continue
	string input;  // Used to read strings

    // Create file object and open file
    fstream people("people3.dat", ios::out | ios::binary);
    if (!people) 
    {
        cout << "Error opening file. Program aborting.\n";
        return 0;
    }

    // Keep getting information from user and writing it
    // to the file in binary mode
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
        people.write(reinterpret_cast<char *>(&person), // person is an object
            // of the person object, so &person is a pointer to a person object
                     sizeof(person));
        cout << "Do you want to enter another record? ";
        cin >> response;
        cin.ignore();
    } while (toupper(response) == 'Y');

    // Close file
    people.close();
    return 0;
}