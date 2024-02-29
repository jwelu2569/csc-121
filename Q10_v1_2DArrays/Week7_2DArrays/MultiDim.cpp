#include "MultiDim.h"
#include <fstream>
#include <iostream>
using namespace std;

void MultiDim::readData()
{
	// create inFile stream to myData.txt file
	ifstream inFile("myData.txt");
	for (int i = 0; i < 3; i++) // i tracks row number
	{
		for (int j = 0; j < 4; j++) // j tracks column number for a fixed row
		{
			inFile >> myMatrix[i][j];
		}
	}
	inFile.close();
}

void MultiDim::displayData()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << myMatrix[i][j] << " ";
			rowTotal = rowTotal + myMatrix[i][j];
		}
		if (i == 0) // inserts row1 into row 1 only
		{
			cout << row1;
		}
		else if (i == 1)
		{
			cout << row2;
		}
		else if (i == 2)
		{
			cout << row3;
		}
		cout << endl;
	}
	cout << "Grand total: " << rowTotal;
}

void MultiDim::displayData_v2()
{
	cout << endl;
	for (int i = 0; i < 1; i++) // adds together row 1 only
	{
		for (int j = 0; j < 4; j++)
		{
			row1 = row1 + myMatrix[i][j];
		}
	}
	for (int i = 1; i < 2; i++) // adds together row 2 only
	{
		for (int j = 0; j < 4; j++)
		{
			row2 = row2 + myMatrix[i][j];
		}
	}
	for (int i = 2; i < 3; i++) // adds together row 3 only
	{
		for (int j = 0; j < 4; j++)
		{
			row3 = row3 + myMatrix[i][j];
		}
	}
}

void MultiDim::writeData()
{
	ofstream outputFile;

	outputFile.open("answer.txt");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			outputFile << myMatrix[i][j] << " ";
		}
		if (i == 0)
		{
			outputFile << row1;
		}
		else if (i == 1)
		{
			outputFile << row2;
		}
		else if (i == 2)
		{
			outputFile << row3;
		}
		outputFile << endl;
	}
	outputFile << "Grand total: " << rowTotal;

	outputFile.close();
}
