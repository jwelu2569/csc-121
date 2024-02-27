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
	for (int i = 0; i < 3; i++) // i tracks row number
	{
		myMatrix[i] << matrixAdd[i];

		for (int j = 0; j < 4; j++) // j tracks column number for a fixed row
		{
			cout << myMatrix[i][j] << " ";
		}
		cout << endl;
	}
}

void MultiDim::displayData_v2()
{
	for (int k = 0; k < 3; k++)
	{
		cout << matrixAdd[k];
	}
}

void MultiDim::calcTotal()
{
}
