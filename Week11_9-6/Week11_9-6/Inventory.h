#include <string>
using namespace std;

// Inventory class declaration
class Inventory
{
private:
    string itemCode;
    string description;
    double price;

public:
    Inventory()                             // Default constructor
    {
        itemCode = "XXX";  description = " ";  price = 0.0;
    }

    Inventory(string c, string d, double p) // 3 argument constructor
    {
        itemCode = c;
        description = d;
        price = p;
    }

    // Add methods setCode, setDescription, and setPrice here.

    void displayInventory(const Inventory object[], int size);
    void selectionSort(Inventory* array, int size);
    void swap(Inventory& a, Inventory& b);

    // Functions to retrieve member variable values
    string getCode() const
    {
        return itemCode;
    }

    string getDescription() const
    {
        return description;
    }

    double getPrice() const
    {
        return price;
    }

}; // End Inventory class declaration