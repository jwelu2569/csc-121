#pragma once
#include <string>
using namespace std;
class Algos
{
private:
	int findMidPoint(int min, int max);
	void swap(int& n1, int& n2); // must be by reference or by pointer
	void swapChars(char& n1, char& n2);
	void swapString(string& n1, string& n2);

public:
	int linearSearch(int key, int* myNums, int sizeOfArray); // myNums is a pointer to the 1st element of the array
	int binarySearch(int key, int* myNums, int min, int max); // max is the same as sizeOfArray in line 7
	void bubbleSort(int* A, int n); // array A, size of array n
	void bubbleSort(char* A, int n);
	void bubbleSort(string* A, int n);
	int menu(int c);
	void selectionSort(int* A, int n);
	void selectionSortPointer(int* A, int n);
	void bubbleSortPointer(int* A, int n);
};