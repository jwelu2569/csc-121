#pragma once
#include <iostream>
using namespace std;
// Rectangle structure
class Rectangle
{
private:
	int width = -1, height = -1;
public:
	Rectangle()
	{
		cout << "\nRectangle Default Constructor Ran.\n";
		width = 0;
		height = 0;
	}
	int getWidth() { return width; }
	int getHeight() { return height; }
	void setWidth(int w) { width = w; }
	void setHeight(int h) { height = h; }
};