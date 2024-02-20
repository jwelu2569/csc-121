#include "Calculations.h"
#include <string>
#include <iostream> // cin >>, cout <<
#include <fstream> // file input/output
			// fstream -- RW, ifstream >> -- RO, ofstream << -- WO
using namespace std;

void Calculations::readData()
{
	// read data from file data.txt
	ifstream inputFile; // create a stream
	string myWord;

	inputFile.open("data.txt"); // connect the stream to your file

	// for (int i = 0; i < 5; i++)
	int i = 0;
	while (!inputFile.eof())
	{
		i++;
		inputFile >> myWord;
		cout << "Word  " << i << ": " << myWord << endl;
	}

	inputFile.close(); // close the stream
}

void Calculations::readData_v2()
{
	// read data from file data.txt
	ifstream inputFile; // create a stream
	int myWord;
	int total = 0;

	inputFile.open("data1.txt"); // connect the stream to your file

	// for (int i = 0; i < 5; i++)
	int i = 0;
	while (!inputFile.eof())
	{
		i++;
		inputFile >> myWord;
		cout << "Word  " << i << ": " << myWord << endl;
		total = total + myWord;
	}

	inputFile.close(); // close the stream
	cout << "The total of the data read is equal to " << total << endl;
	cout << "The number of numbers read is equal to " << i << endl;
}
