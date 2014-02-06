#include <conio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//declare variables
	int cats_number = 0;
	double cat_cost = 0.00;
	double total_cost = 0.00;

	//get user input
	cout << "How many cats would you like? ";
	cin >> cats_number;
	cout << "Cost per cat? ";
	cin >> cat_cost;
	//do calculations
	total_cost = (double) cats_number * cat_cost;
	cout << fixed << setprecision(2) << "You owe: $" << total_cost;

	//exit application
	cout << endl << "Press any key to quit";

	//need to wait for keystroke and return a value
	_getch();
	return 0;
}