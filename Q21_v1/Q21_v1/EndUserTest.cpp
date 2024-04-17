#include "Info.h"
#include "MyUtility.h"
#include <iostream> // cin, cout
#include <fstream> // ifstream, ofstream 
#include <cctype>  // for toupper
#include <string> // for getline, string
using namespace std;

int main()
{
	MyUtility u;
	u.writeRecord();
	u.readRecord();
	cout << "That's all the information in the file!\n";
return 0;
}