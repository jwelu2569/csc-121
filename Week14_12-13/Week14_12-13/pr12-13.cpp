// This program uses a function to copy 
// a string into an array. 
#include "CStringUtilities.h"
#include <iostream>
using namespace std;

int main() 
{
    CStringUtilities s;
    // Define two arrays of char
    const int S_LENGTH = 30;
    // char dest[S_LENGTH], source[S_LENGTH]; // character array
    char* dest = new char[S_LENGTH]; // pointer notation for dynamic array
    char* source = new char[S_LENGTH];
    int beg = 5;
    int end = 12;

    // Read a string into a source array
    cout << "Enter a string with no more than "
         << S_LENGTH - 1 << " characters:\n";
    cin.getline(source, S_LENGTH); // becomes cstring

    ////	Copy it into a destination array and print
    s.stringCopy(dest, source);
    cout << "The string you entered is:\n" << dest << endl;

    s.specialCopy(dest, source, beg, end);
    cout << "The special string copied is:\n" << dest << endl;
    return 0;
}