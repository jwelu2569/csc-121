// This program tests a customer number to determine whether
// it is in the proper format.
#include <iostream>
#include <cctype>
using namespace std;

// Function prototype
bool testNum(char [], int);
void convertUL(char[], int);

int main()
{
   const int SIZE = 8; // Array size, 8th is null character '\0'
   char customer[SIZE]; // To hold a customer number

   // Get the customer number.
   cout << "Enter a customer number in the form ";
   cout << "LLLNNNN\n";
   cout << "(LLL = letters and NNNN = numbers): ";
   cin.getline(customer, SIZE);
   //customer[1] = '\0';
   //customer[2] = 'B';
   //cout << customer << endl;
   //for (int i = 0; i < 8; i++)
   //{
   //    cout << "You typed: " << customer[i] << endl;
   //}
   //return 0;
   
   // Determine whether it is valid.
   if (testNum(customer, SIZE))
      cout << "That's a valid customer number.\n";
   else
   {
      cout << "That is not the proper format of the ";
      cout << "customer number.\nHere is an example:\n";
      cout << " ABC1234\n"; // Hard coded string is data type cstring
   }
   convertUL(customer, SIZE);
   return 0;
}

//**********************************************************
// Definition of function testNum. *
// This function determines whether the custNum parameter *
// holds a valid customer number. The size parameter is *
// the size of the custNum array. *
//**********************************************************

bool testNum(char custNum[], int size)
{
   int count; // Loop counter

   // Test the first three characters for alphabetic letters.
   for (count = 0; count < 3; count++)
   {
      if (!isalpha(custNum[count]))
         return false;
   }

   // Test the remaining characters for numeric digits.
   for (count = 3; count < size - 1; count++)
   {
      if (!isdigit(custNum[count]))
         return false;
   }
   return true;
}

void convertUL(char user[], int size)
{
    cout << "Converting to upper case: ";
    for (int i = 0; i < size; i++)
    {
        cout << (char) toupper(user[i]);
    }
    cout << "\nConverting to lower case: ";
    for (int i = 0; i < size; i++)
    {
        cout << (char) tolower(user[i]);
    }
}
