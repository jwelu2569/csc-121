// This program uses pointers to dynamically allocate 
// structures and class objects. 
#include <iostream>
#include <string>
#include "Rectangle.h"
#include "Person.h"
#include "MyUtilities.h"
using namespace std;

int main()
{
    Rectangle* pRect = nullptr;    // Pointer to Rectangle
    Person* pPerson = nullptr;     // Pointer to Person 
    MyUtilities m;

    // Local object accessed  through a pointer
    Rectangle rect;
    pRect = &rect;
    // (*pRect).setHeight(12);
    pRect->setHeight(12);
    pRect->setWidth(10);
    cout << "Area of the first rectangle is "
        << pRect->getWidth() * pRect->getHeight();

    // Dynamically allocated object accessed through pointer
    pRect = new Rectangle;
    pRect->setHeight(6);
    pRect->setWidth(5);
    cout << "\nArea of the second rectangle is "
        << pRect->getWidth() * pRect->getHeight();
    delete pRect; // memory leak problem avoided
    pRect = nullptr; // dangling pointer resolved

    // Dynamically allocated object accessed through pointer
    pPerson = new Person("Miquel E. Gonzalez", 23);
    cout << "\n\nThe person's name is " << pPerson->getName();
    cout << "\nThe person's age is " << pPerson->getAge() << endl;
    cout << "\nThe person has " << m.lengthOfName(pPerson)
        << " letters in her/his name." << endl;
    delete pPerson;
    pPerson = nullptr;

    //Q19_v1
    Rectangle* pRect1 = nullptr;
    pRect1 = &rect;
    int resize = 0;
    pRect1 = new Rectangle;
    pRect1->setHeight(9);
    pRect1->setWidth(10);
    cout << "\nArea of the third rectangle is " << m.areaRectangle(pRect1) << endl;
    m.outputRDims(pRect1);
    m.magnify(pRect1, resize);
    cout << "The new area of the third rectangle is " << m.areaRectangle(pRect1) << endl;
    delete pRect1;
    pRect1 = nullptr;

    return 0;
}