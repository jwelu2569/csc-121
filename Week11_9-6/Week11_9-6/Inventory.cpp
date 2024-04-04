#include "Inventory.h"
#include <iostream>
#include <iomanip>
using namespace std;

/*******************************************************
 *               displayInventory                      *
 * This function displays the entire array.            *
 *******************************************************/
void Inventory::displayInventory(const Inventory object[], int size)
{
    for (int index = 0; index < size; index++)
    {
        cout << setw(5) << left << object[index].getCode()
            << setw(13) << left << object[index].getDescription()
            << "$" << right << object[index].getPrice() << endl;
    }
} // End displayInventory

void Inventory::selectionSort(Inventory* array, int size)
{
    int min = -1;   

    for (int maxElement = size - 1; maxElement > 0 && min; maxElement--)
    {
        min = maxElement;      

        for (int index = 0; index < maxElement; index++)
        {
            if (array[index].getCode() < array[index + 1].getCode()) // can change to getDescription to sort by item name
                                                                       // getPrice to sort by item price
            {
                min = index;
            }
            if (min != index)
            {
                swap(array[index], array[index + 1]);
            }
        }
    }
}

/***************************************************
 *                         swap                    *
 * This function swaps objects a and b in memory.  *
 ***************************************************/
void Inventory::swap(Inventory& a, Inventory& b)
{
    Inventory temp = a;
    a = b;
    b = temp;
}
