#include "FileIO_RW.h"
#include <fstream> // fstream >> << 
					// ifstream >> -- just like cin >>
					// ofstream << -- just like cout <<
#include <iostream> // cin >>, cout <<
#include <string>

using namespace std;

void FileIO_RW::readData()
{

	fstream fileInput;

	fileInput.open(dataFile);

	int i = 0;
	while (!fileInput.eof())
	{
		fileInput >> myNumbers[i];
		i++;
	}
	fileInput.close();
	cout << "\nNumber of numbers read: " << i << endl;
	cout << "Numbers read from data.txt: " << endl;
	for (int j = 0; j < i; j++)
	{
		cout << myNumbers[j] << " ";
	}
	cout << endl;

	calcTotal();
}

void FileIO_RW::calcTotal()
{
	for (int i = 0; i < 20; i++)
	{
		total = total + myNumbers[i];
	}
	cout << "\nTotal = " << total << endl;

	calcAvg();
}

void FileIO_RW::calcAvg()
{
	average = static_cast<double>(total) / 20;
	cout << "\nAverage = " << average << endl;

	writeData();
}

void FileIO_RW::writeData()
{
	ofstream outputFile;

	outputFile.open(answerFile);
	for (int i = 0; i < 20; i++)
	{
		outputFile << myNumbers[i] << endl;
	}
	outputFile << "\nTotal = " << total << endl;
	outputFile << "\nAverage = " << average << endl;
	outputFile.close();

	cout << endl;
	showMenu();
}

void FileIO_RW::showMenu()
{
	int choice = 0;

	cout << "1. Give name of data file and answer file: " << endl;
	cout << "2. Use default data.txt and answer.txt for data and output." << endl;
	cout << "3. Quit \n" << endl;

	cin >> choice;

	if (choice == 1)
	{
		cout << "Enter the name of the data file e.g. data1.txt, mydata1.txt, etc: " << endl;
		cin >> dataFile;
		cout << "\nEnter the name of the answer file e.g. myAnswer.txt: " << endl;
		cin >> answerFile;

		readData();
	}
	else if (choice == 2)
	{
		readData();
	}
	else if (choice != 3)
	{
		cout << "\nThat is not a valid choice. Please select one of the available options." << endl;
		showMenu();
	}
}
