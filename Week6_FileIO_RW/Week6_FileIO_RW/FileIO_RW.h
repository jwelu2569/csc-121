#pragma once
#include <string>
class FileIO_RW
{
private:
	int myNumbers[20] = { 0 };
	int total = 0;
	double average = 0;
	string dataFile = "data.txt";
	string answerFile = "answer.txt";

public:
	void readData(); // read data into array from data.txt
	void calcTotal(); // calculate the total 
	void calcAvg(); // calculate the average
	void writeData(); // write the data, its total, and average
					// to answers.txt
	void showMenu();
	// 1. Give name of data file and answer file: e.g. data1.txt, mydata1.txt, etc
	// e.g. for anwer file: myAnswer.txt
	// 2. Use default data.txt and answer.txt for data and output.
	// 3. Quit
};
