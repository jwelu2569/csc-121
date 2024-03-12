// This program uses a class with a Boolean function that determines
// if a new value sent to it is the largest value received so far.
class SimpleStat
{
private:
	int largest;            // The largest number received so far  
	int sum;                // The sum of the numbers received
	int count;              // How many numbers have been received
	int smallest;

	bool isNewLargest(int num); // This is a private class function
	bool isNewSmallest(int num);

public:

	SimpleStat();           // Default constructor
							// name matches class
	SimpleStat(int a1, int a2, int a3, int a4); // Overloaded constructor
	~SimpleStat();
	bool addNumber(int);
	double calcAverage();

	int getLargest()
	{
		return largest;
	}

	int getCount()
	{
		return count;
	}

	int getSum()
	{
		return sum;
	}

	int getSmallest()
	{
		return smallest;
	}
};
