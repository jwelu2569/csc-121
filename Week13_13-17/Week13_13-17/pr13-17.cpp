// This program sets up a file of blank inventory records. 
#include <iostream>
#include <fstream>
#include "Invtry.h"
using namespace std;

int main17() 
{
    // Variables needed to write the file
    Invtry record = {"", 0, 0.0};
    int numberBytesWrite = -1;

    // Create file object and open file
    fstream inventory("invtry.dat", ios::out | ios::binary);
    if (!inventory) 
    {
        cout << "Error opening file.";
        return 0;
    }
    numberBytesWrite = sizeof(record);
    cout << "Size of inventory record: " << numberBytesWrite << endl;
    // Now write the blank records
    for (int count = 0; count < NUM_RECORDS; count++)
    {
        cout << "Now writing record " << count << endl;
        inventory.write(reinterpret_cast<char *>(&record), numberBytesWrite);
    }

    //Close the file
    inventory.close();
    return 0;
}