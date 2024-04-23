#include "CStringUtilities.h"
#include <iostream>
using namespace std;

//**************************************************
// Definition of the stringCopy function.          *
// This function accepts two character arrays as   *
// arguments. The function assumes the two arrays  *
// contain C-strings. The contents of the second   *
// array are copied to the first array.            * 
//**************************************************
void CStringUtilities::stringCopy(char* destStr, const char* sourceStr)
{
    int index = 0;

    // Copy one character at a time till we come to 
    // the null terminator
    while (*(sourceStr + index) != '\0')
    {
        *(destStr + index) = *(sourceStr + index);
        index++;
    }
    *(destStr + index) = '\0'; // becomes cstring
}

void CStringUtilities::specialCopy(char *dest, char *src, int beg, int end)
{
    int index = 0;

    // Copy one character at a time till we come to 
    // the null terminator
   // while (*(src + index) != '\0')

    for (beg; beg < end; beg++)
    {
        *(dest + index) = *(src + index + 5);
        index++;
    }
    *(dest + index) = '\0'; // becomes cstring
}
