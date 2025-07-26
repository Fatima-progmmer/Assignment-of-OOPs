#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
	string CustomerNamed,t_cr;
	double NumberOfGuests;
	int NumberOfMinutes;
	unsigned long table, TotalFoodCost, Cost, DepositAmount, TotalCost;
	const double CostPerMinute =10;
	const double CostOfDinner = 20.70;
	ifstream wedding("wedding_bukking.txt");
	ofstream wed("wedding_bukking.txt");
	string NameOfEvent, CustomerName, dt_cr;
	cout << "\n\t\tWELCOME IN MY WEDDING ORGANISATION " << endl;
	wed<< "\n\t\t\tNew order are PLACED ";
	cout << "\nEnter the name of the event " << endl;
	getline(cin, NameOfEvent);
	cout << "Enter the customer's first and last name " << endl;
	getline(cin, CustomerName);
	cout << "Enter the number of guests " << endl;
	cin >> NumberOfGuests;
	cout << "\n\nEnter the number of minutes in the event " << endl;
	cin >> NumberOfMinutes;
	cout << "\n\tDate of the ceremony : ";
	cin >> dt_cr;
	cout << "\n\n\t\t Thanks for bukking ! " <<endl;
	{
		table = NumberOfGuests / 10;
		Cost = 20 * CostPerMinute;
		TotalFoodCost = NumberOfGuests * CostOfDinner;
		TotalCost = 10000+TotalFoodCost;
		DepositAmount = TotalCost * 0.50;
	}
	wed  << "\nEvent estimate for  " << CustomerName << endl;
		wed<< "Date of the ceremony : " <<  dt_cr << endl;
	wed << "Number of guests : "  << NumberOfGuests << endl;
	wed << "The Cost for Food is: " << TotalFoodCost << endl;
	wed << "Total cost is: " << TotalCost << endl;
	wed << "Tables are used :" << table << endl;
	wed << "Please deposite a 25% deposit to reserve the event" << endl;
	wed  << "The deposit needed is: " << DepositAmount << endl;
wed.close();
	return 0;
}