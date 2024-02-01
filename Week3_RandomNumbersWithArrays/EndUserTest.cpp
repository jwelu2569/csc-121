#include "RNMaths.h"
int main()
{
	RNMaths r;

	r.generateRN();
	r.calcTotal();
	r.displayArrayTotal();
	r.addTenTotal();
	r.calcTotal();
	r.displayArrayTotal();

	return 0;
}