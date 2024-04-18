// This program displays the contents of the inventory file. 
#include <iostream>
#include <fstream>
#include "Invtry.h"
using namespace std;

int main18() 
{
    // Buffer used for reading.
    Invtry record;

    // Create and open the file for reading.
    fstream inventory("invtry.dat", ios::in | ios::binary);
    if (!inventory) 
    {
        cout << "Error in opening the file.";
        return 0;
    }
    int recordSize = sizeof(record);
    cout << "Number of bytes to read from dat file: " << recordSize << endl;

    // Now read and display the records
    inventory.read(reinterpret_cast<char *>(&record), recordSize);
    while (!inventory.eof()) 
    {
        cout << "Description: ";
        cout << record.desc << endl;
        cout << "Quantity: ";
        cout << record.qty << endl;
        cout << "Price: ";
        cout << record.price << endl << endl;
        inventory.read(reinterpret_cast<char *>(&record), recordSize);
    }
    inventory.close();
    return 0;
}