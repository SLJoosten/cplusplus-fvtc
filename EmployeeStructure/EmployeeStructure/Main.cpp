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
	//add default employees
	Employee Jobs;
	Jobs.idNumber = "3462";
	Jobs.lastName = "Jobs";
	Jobs.rate = 4.62;
	Jobs.hours = 40.0;

	Employee Hooper;
	Jobs.idNumber = "6793";
	Jobs.lastName = "Hooper";
	Jobs.rate = 5.83;
	Jobs.hours = 38.0;

	Employee Gates;
	Jobs.idNumber = "3245";
	Jobs.lastName = "Gates";
	Jobs.rate = 50.99;
	Jobs.hours = 2.0;

	Employee Waterman;
	Jobs.idNumber = "5544";
	Jobs.lastName = "Waterman";
	Jobs.rate = 50.99;
	Jobs.hours = 40.0;

	Employee Keane;
	Jobs.idNumber = "4455";
	Jobs.lastName = "Keane";
	Jobs.rate = 100.00;
	Jobs.hours = 35.0;

	//create collection of employees and add default employees to it
	Collection<Employee> employeeList;
	employeeList.Add(Jobs);
	employeeList.Add(Hooper);
	employeeList.Add(Gates);
	employeeList.Add(Waterman);
	employeeList.Add(Keane);

	//get and validate user's additional employees

	//output employee list/report
	for (int i = 0; i < employeeList.Length(); i++)
	{
		cout << setw(8) << employeeList[i].idNumber << setw(8) << employeeList[i].lastName << setw(8) << employeeList[i].rate << setw(8) << employeeList[i].hours << endl;
	}



	_getch();
	return 0;
}