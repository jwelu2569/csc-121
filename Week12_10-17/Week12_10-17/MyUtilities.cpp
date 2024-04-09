#include "MyUtilities.h"
using namespace std;

int MyUtilities::lengthOfName(Person* p)
{
	string tempName = " ";
	int length = -1;

	tempName = p->getName();
	length = tempName.length();
	return length;
}

int MyUtilities::areaRectangle(Rectangle* r)
{
	int area = 0;
	int h = 0, w = 0;

	h = r->getHeight();
	w = r->getWidth();
	area = w * h;
	return area;
}

void MyUtilities::outputRDims(Rectangle* r)
{
	cout << "The height of the rectangle is " << r->getHeight() << endl;
	cout << "The width of the rectangle is " << r->getWidth() << endl;
}

void MyUtilities::magnify(Rectangle* r, int resize)
{
	int h = 0, w = 0;
	cout << "Choose a number to multiply height and width by: ";
	cin >> resize;
	h = resize * r->getHeight();
	w = resize * r->getWidth();
}
