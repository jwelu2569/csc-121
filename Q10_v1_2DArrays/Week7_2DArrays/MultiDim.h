#pragma once
class MultiDim
{
private:
	// create a 2D array
	int myMatrix[3][4]; // 3 rows, 4 columns
	int matrixAdd[3];
	int rowTotal = 0;
	int grandTotal = 0;
	int row1 = 0, row2 = 0, row3 = 0;

public:
	void readData();
	void displayData();
	void displayData_v2(); // adds another column that is equal to numbers in the row added up
	// use ofstream to sent to answers.txt file
	void writeData();
};