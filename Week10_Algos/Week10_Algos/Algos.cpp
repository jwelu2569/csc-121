#include "Algos.h"
#include <iostream>
using namespace std;

int Algos::findMidPoint(int min, int max)
{
    return (min + max) / 2;
}

void Algos::swap(int& n1, int& n2)
{
    int temp = -1;

    temp = n1;
    n1 = n2;
    n2 = temp;
}

void Algos::swapChars(char& n1, char& n2)
{
    char temp = ' ';

    temp = n1;
    n1 = n2;
    n2 = temp;
}

void Algos::swapString(string& n1, string& n2)
{
    string temp = " ";

    temp = n1;
    n1 = n2;
    n2 = temp;
}

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

int Algos::binarySearch(int key, int* myNums, int min, int max)
{
    int midpoint = -1;

    if (max < min)
    {
        return -1;
    }
    else
    {
        midpoint = findMidPoint(min, max);
    }
    if (myNums[midpoint] < key)
    {
        binarySearch(key, myNums, midpoint + 1, max);
    }
    else if (myNums[midpoint] > key)
    {
        binarySearch(key, myNums, min, midpoint - 1);
    }
    else
    {
        return midpoint;
    }
}

void Algos::bubbleSort(int* A, int n)
{
    bool flag = false;
    for (int k = 1; k < n; k++)
    {
        flag = false;
        for (int i = 0; i < n - k; i++)
        {
            if (A[i] > A[i + 1])
            {
                swap(A[i], A[i + 1]);
                flag = true;
            }
        }
        if (!flag) // didn't do any swapping
        {
            break;
        }
    }
}

//void Algos::bubbleSort(char* A, int n)
//{
//    bool flag = false;
//    for (int k = 1; k < n; k++)
//    {
//        flag = false;
//        for (int i = 0; i < n - k; i++)
//        {
//            if (A[i] > A[i + 1])
//            {
//                swap(A[i], A[i + 1]);
//                flag = true;
//            }
//        }
//        if (!flag) // didn't do any swapping
//        {
//            break;
//        }
//    }
//}

//void Algos::bubbleSort(string* A, int n)
//{
//    bool flag = false;
//    for (int k = 1; k < n; k++)
//    {
//        flag = false;
//        for (int i = 0; i < n - k; i++)
//        {
//            if (A[i] > A[i + 1])
//            {
//                swap(A[i], A[i + 1]);
//                flag = true;
//            }
//        }
//        if (!flag) // didn't do any swapping
//        {
//            break;
//        }
//    }
//}

int Algos::menu(int c)
{
    int choice = 0;
    cout << "Choose an algorithm to run \n";
    cout << "1. LinearSearch \n" << "2. BinarySearch \n" << "3. Bubble sort \n";
    cout << "4. Selection sort \n" << "5. Quit \n";
    cin >> choice;

    return choice;
}
