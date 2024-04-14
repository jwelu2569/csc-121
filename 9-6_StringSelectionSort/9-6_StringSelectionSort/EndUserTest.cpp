// Include needed header files here.
#include "StringSelection.h"
#include <iostream>
using namespace std;

int main()
{
	StringSelection s;

	const int SIZE = 20;
	string name[SIZE] =
	{ "Collins, Bill", "Smith, Bart", "Michalski, Joe",
	"Griffin, Jim",
	"Sanchez, Manny", "Rubin, Sarah", "Taylor, Tyrone",
	"Johnson, Jill",
	 "Allison, Jeff", "Moreno, Juan", "Wolfe, Bill",
	"Whitman, Jean",
	 "Moretti, Bella", "Wu, Eric", "Patel, Renee",
	"Harrison, Rose",
	 "Smith, Cathy", "Conroy, Pat", "Kelly, Sean",
	"Holland, Beth" };
	// Insert your code to complete this program.

	s.selectionSort(name, SIZE);
	for (int i = 0; i < SIZE; i++)
	{
		cout << name[i] << endl;
	}
}