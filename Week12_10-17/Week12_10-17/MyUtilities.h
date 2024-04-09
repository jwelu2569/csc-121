#pragma once
#include "Person.h"
#include "Rectangle.h"
class MyUtilities
{
private:

public:
	int lengthOfName(Person* p);
	int areaRectangle(Rectangle* r);
	void outputRDims(Rectangle* r);
	void magnify(Rectangle* r, int resize);

};