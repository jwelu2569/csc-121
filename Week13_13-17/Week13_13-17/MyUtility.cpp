#include "MyUtility.h"
#include <iostream>
#include <fstream>
#include "Invtry.h"
using namespace std;
void MyUtility::createRecords()
{
   // Invtry* record = new int;

    // Variables needed to write the file
    Invtry record = { "", 0, 0.0 };
    int numberBytesWrite = -1;

    // Create file object and open file
    fstream inventory("invtry.dat", ios::out | ios::binary);
    fstream inventory2("records.txt", ios::in | ios::binary);
    if (!inventory)
    {
        cout << "Error opening file.";
    }
    numberBytesWrite = sizeof(record);
    cout << "Size of inventory record: " << numberBytesWrite << endl;

    cout << "Now reading from records.txt " << endl;
    for (int count = 0; count < NUM_RECORDS; count++)
    {
        cout << "Now populating record " << count << endl;
  //      inventory2.read(reinterpret_cast<char*>(&record), numberBytesWrite);
        for (int i = 0; i < 4; i++)
        {
            inventory2.read(reinterpret_cast<char*>(&record), numberBytesWrite);
        }
    }

    // Now write the blank records
    for (int count = 0; count < NUM_RECORDS; count++)
    {
        cout << "Now writing record " << count << endl;
        inventory.write(reinterpret_cast<char*>(&record), numberBytesWrite);
    }

    //Close the file
    inventory.close();
    cout << endl;
}

void MyUtility::readRecords()
{
    // Buffer used for reading.
    Invtry record;

    // Create and open the file for reading.
    fstream inventory("invtry.dat", ios::in | ios::binary);
    if (!inventory)
    {
        cout << "Error in opening the file.";
    }
    int recordSize = sizeof(record);
    cout << "Number of bytes to read from dat file: " << recordSize << endl;

    // Now read and display the records
    inventory.read(reinterpret_cast<char*>(&record), recordSize);
    while (!inventory.eof())
    {
        cout << "Description: ";
        cout << record.desc << endl;
        cout << "Quantity: ";
        cout << record.qty << endl;
        cout << "Price: ";
        cout << record.price << endl << endl;
        inventory.read(reinterpret_cast<char*>(&record), recordSize);
    }
    inventory.close();
}

void MyUtility::editRecords()
{
    // Variables needed to reead the file
    Invtry record;
    long recNum;

    // Open the file
    fstream inventory("invtry.dat", ios::in | ios::out |
        ios::binary);
    if (!inventory)
    {
        cout << "Error opening file.";
    }

    // Move to the desired record and read it into record
    cout << "Which record do you want to edit?";
    cin >> recNum;
    inventory.seekg(recNum * sizeof(record), ios::beg);
    inventory.read(reinterpret_cast<char*> (&record), sizeof(record));

    // Get new data from user and edit in-memory record						
    cout << "Description: ";
    cout << record.desc << endl;
    cout << "Quantity: ";
    cout << record.qty << endl;
    cout << "Price: ";
    cout << record.price << endl;
    cout << "Enter the new data:\n";
    cout << "Description: ";
    cin.ignore();
    cin.getline(record.desc, DESC_SIZE);
    cout << "Quantity: ";
    cin >> record.qty;
    cout << "Price: ";
    cin >> record.price;

    // Move to the right place in file and write the record
    inventory.seekp(recNum * sizeof(record), ios::beg);
    inventory.write(reinterpret_cast<char*> (&record), sizeof(record));

    // Close the file					 
    inventory.close();
}
