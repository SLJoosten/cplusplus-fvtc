#include <conio.h>
#include <iostream>
#include <string>
#include <iomanip>
#include "..\..\HelperClass\HelperClass\Collection.h"
#include "..\..\HelperClass\HelperClass\HelperBot.h"

using namespace std;

//structure to store employee records
struct Employee
{
	string idNumber;
	string lastName;
	double rate;
	double hours;
};

int main()
{
	//declare variables
	bool addEmployee = true;
	char c = ' ';
	double grossPayAccumulator = 0.0;
	string totalGrossPay = "";

	//make default employees
	Employee Jobs;
	Jobs.idNumber = "3462";
	Jobs.lastName = "Jobs";
	Jobs.rate = 4.62;
	Jobs.hours = 40.0;

	Employee Hooper;
	Hooper.idNumber = "6793";
	Hooper.lastName = "Hooper";
	Hooper.rate = 5.83;
	Hooper.hours = 38.0;

	Employee Gates;
	Gates.idNumber = "3245";
	Gates.lastName = "Gates";
	Gates.rate = 50.99;
	Gates.hours = 2.0;

	Employee Waterman;
	Waterman.idNumber = "5544";
	Waterman.lastName = "Waterman";
	Waterman.rate = 50.99;
	Waterman.hours = 40.0;

	Employee Keane;
	Keane.idNumber = "4455";
	Keane.lastName = "Keane";
	Keane.rate = 100.00;
	Keane.hours = 35.0;

	//create collection of employees and add default employees to it
	Collection<Employee> employeeList;
	employeeList.Add(Jobs);
	employeeList.Add(Hooper);
	employeeList.Add(Gates);
	employeeList.Add(Waterman);
	employeeList.Add(Keane);

	//use do-while loop to allow entry of additional employees
	do
	{
		//get and validate user's additional employees
		cout << endl << "Press 'a' to add an employee or anything else to proceed to report: " << endl;
		c = _getch();

		if (c == 'a' || c == 'A')
		{
			//declare variables
			string payRateEntry = "";
			string hoursEntry = "";

			//set boolean to true
			addEmployee = true;
			//make new employee
			Employee UserEmployee;

			//ask for ID number and assign it accordingly
			cout << endl << "Please enter the employee's ID number: ";
			cin >> UserEmployee.idNumber;

			//ask for last name and assign it accordingly
			cout << endl << "Please enter the employee's last name: ";
			cin >> UserEmployee.lastName;

			//ask for pay rate
			cout << endl << "Please enter the employee's pay rate: ";
			cin >> payRateEntry;
			//convert to double and assign if valid
			if (HelperBot::IsNumericDouble(payRateEntry) == true)
			{
				UserEmployee.rate = HelperBot::ConvertToDouble(payRateEntry);
			}
			//if invalid, show error message and assign zero
			else
			{
				cout << endl << "Invalid pay rate. Defaulting to zero." << endl;
				UserEmployee.rate = 0.0;
			}

			//ask for hours
			cout << endl << "Please enter the employee's hours: ";
			cin >> hoursEntry;
			//convert to double and assign if valid
			if (HelperBot::IsNumericDouble(hoursEntry) == true)
			{
				UserEmployee.hours = HelperBot::ConvertToDouble(hoursEntry);
			}
			//if invalid, show error message and assign zero
			else
			{
				cout << endl << "Invalid hours. Defaulting to zero." << endl;
				UserEmployee.hours = 0.0;
			}
			
			//add user-created employee to collection
			employeeList.Add(UserEmployee);
		}
		else
		{
			//set boolean to false to exit loop
			addEmployee = false;
		}

	} while (addEmployee == true);
	

	//output first line to label employee list/report
	cout << endl << fixed << setprecision(2) << setw(5) << "ID #" 
			<< setw(12) << "Last Name" 
			<< setw(10) << "Pay Rate" 
			<< setw(10) << "Hours" 
			<< setw(12) << "Gross Pay" << endl;

	//output employee list/report, keeping track of total gross pay
	for (int i = 0; i < employeeList.Length(); i++)
	{
		Employee tempEmployee = employeeList[i];
		cout << fixed << setprecision(2) << setw(5) << tempEmployee.idNumber 
			<< setw(12) << tempEmployee.lastName 
			<< setw(10) << tempEmployee.rate 
			<< setw(10) << tempEmployee.hours 
			<< setw(12) << tempEmployee.rate * tempEmployee.hours << endl;

		//add each employee's gross pay to the accumulator
		grossPayAccumulator += (tempEmployee.rate * tempEmployee.hours);
	}

	//make/format total gross pay string for output
	totalGrossPay = "TOTAL GROSS PAY: " + HelperBot::ToCurrency(grossPayAccumulator);

	//output total gross pay with a blank line for readability
	cout << endl << totalGrossPay << endl;

	_getch();
	return 0;
}