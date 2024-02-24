#pragma once
class HealthCM
{
private:
	int choice; // Menu choice
	int months; // Number of months
	double charges; // Monthly charges
	
public:
	void displayRate();
	void calcHCM();
	void displayFee();
};