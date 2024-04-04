/* This program uses the "enhanced" bubble sort algorithm to sort an array
of Inventory objects in ascending order by their itemCode. Once no swaps 
occur on a pass, the algorithm recognizes that the array is fully sorted, 
so the outer loop is exited to prevent unneeded additional iterations. 
*/ 
#include "Inventory.h"
#include <iostream>
using namespace std;

// PROGRAM THAT USES THE INVENTORY CLASS

// Function prototypes
//void displayInventory(const Inventory[], int);
//void selectionSort(Inventory*, int);

/*******************************************************
 *                      main                           *
 *******************************************************/
int main()
{
    Inventory i;

   const int SIZE = 6;
   
   // Create and initialize the array of Inventory objects
   Inventory silverware[SIZE] =
                             { Inventory("S15", "soup spoon",  2.35),
                               Inventory("S12", "teaspoon",    2.19),
                               Inventory("F15", "dinner fork", 3.19),
                               Inventory("F09", "salad fork" , 2.25),
                               Inventory("K33", "knife",       2.35), 
                               Inventory("K41", "steak knife", 4.15) };
                               
   // Display the inventory
   cout << "Here is the original data\n";
   i.displayInventory(silverware, SIZE);
   
   // Sort the objects by their itemCode
   i.selectionSort(silverware, SIZE);
   
   // Display the inventory again
   cout << "\nHere is the sorted data\n";
   i.displayInventory(silverware, SIZE);

   return 0;
} // End main                      
                               
