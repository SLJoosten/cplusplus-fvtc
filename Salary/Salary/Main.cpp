//include necessary resources
#include <conio.h>
#include <iostream>
#include <iomanip>
#include <string>

//need to declare (but not define) before use
using namespace std;

double calculateWage(double, double);


int main()
{
	//declare variables
	double salary = 0;
	double hours_per_week = 0;

	/*string name = "";*/

	//get user input and put into corresponding variables
	cout << "Please enter your salary: ";
	cin >> salary;
	cout << endl << "Please enter hours per week: ";
	cin >> hours_per_week;

	//call function in line to calculate wage, then output
	cout << endl << "Your hourly wage is: " << calculateWage(salary, hours_per_week);

	/*cout << "Please enter your name: ";
	cin >> name;
	cout << endl << "Your name is " << name << endl;*/
	

	_getch();

	return 0;
}

double calculateWage(double salary, double hours_per_week)
{
	double hours_per_year = hours_per_week * 50;

	double wage = salary / hours_per_year;

	return wage;
}