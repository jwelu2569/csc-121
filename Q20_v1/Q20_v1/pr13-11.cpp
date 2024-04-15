//This program uses the write and read functions. 
#include <iostream> // cin >>, cout <<
#include <fstream> // fstream, ifstream >>, ofstream <<
using namespace std;

int main()
{
    // File object used to access file
    fstream file("nums.dat", ios::out | ios::binary); // file is an object
    // created from the class fstream. It is created by calling an overloaded
    // constructor that has two parameters. So we pass to the constructor
    // two arguments, "nums.dat", ios::out | ios::binary
    if (!file)
    {
        cout << "Error opening file.";
        return 0;
    }

    // Integer data to write to binary file
    int buffer[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int size = sizeof(buffer) / sizeof(buffer[0]);

    // Write the data and close the file
    cout << "Now writing the data to the file.\n";
    file.write(reinterpret_cast<char*>(buffer), sizeof(buffer)); // reinterpret_cast for pointer, otherwise static_cast
    file.close();

    // Open the file and use a binary read to read
    // contents of the file into an array
    file.open("nums.dat", ios::in);
    if (!file)
    {
        cout << "Error opening file.";
        return 0;
    }

    cout << "Now reading the data back into memory.\n";
    file.read(reinterpret_cast<char*>(buffer), sizeof(buffer));

    // Write out the array entries
    for (int count = 0; count < size; count++)
        cout << buffer[count] << " ";

    // Close the file	
    file.close();

    // Q20_v1
    int* buffer_new = new int;
    file.open("nums.dat", ios::in);
    cout << "\n\nNow reading the data from the file.\n";
    for (int i = 0; i < 10; i++)
    {
        file.read(reinterpret_cast<char*>(buffer_new + i), sizeof(*buffer_new));
    }
    file.close();
    for (int i = 0; i < 10; i++)
    {
        cout << *(buffer_new + i) << " ";
    }
      buffer_new = nullptr; 
      delete buffer_new;
    return 0;
}