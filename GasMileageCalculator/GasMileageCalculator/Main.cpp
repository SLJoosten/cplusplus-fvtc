#include <conio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//declare variables
	double miles = 0;
	double gallons = 0;
	double mpg = 0;

	//get user input
	cout << "Enter the miles driven: ";
	cin >> miles;
	cout << "Enter the gallons of gas used: ";
	cin >> gallons;

	//do calculations
	mpg = miles / gallons;
	
	//output to user
	cout << endl << "Miles Per Gallon: " << fixed << setprecision(1) << mpg;

	//tell user how to quit
	cout << endl << endl << "Press any key to quit";

	//need to wait for keystroke and return a value
	_getch();
	return 0;
}