#include "RNMaths.h"
int main()
{
	RNMaths r;

	r.generateRN();
	r.calcTotal();
	r.calcAverage();
	r.calcTotal();
	r.displayArrayTotalAverage();

	return 0;
}