#include "Algos.h"

int Algos::linearSearch(int key, int* myNums, int sizeOfArray)
{
	for (int i = 0; i < sizeOfArray; i++)
	{
		if (myNums[i] == key)
		{
			return i;
		}
	}
	return -1;
}