#include "OverflowUnderflow.h"

int main()
{

	OverflowUnderflow ou;
	ou.overflowExample(); // 32767 + 1 = 32768
	ou.underflowExample(); // -32768 -1 = -32769
	ou.scientificUnderflow(); // ???

	return 0;
}