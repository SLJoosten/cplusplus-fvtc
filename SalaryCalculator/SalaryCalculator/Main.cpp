#include <conio.h>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

 int main()
{
	//declare variables
	double work_hours = 0;
	double overtime_hours = 0;
	double salary = 0;
	bool valid_hours = (work_hours >= 0.0) && (work_hours <= 168.0);
	//use do-while loop to repeat if invalid input
	do
	{
		//get the hours worked
		cout << "Enter the hours worked last week: ";
		cin >> work_hours;
		//if invalid input, display error message before repeating
		if (valid_hours == false)
		{
			cout << endl << "Invalid hours worked. Use only numbers between 0 and 168 and try again." << endl;
		}
		//if input valid, calculate and display salary
		else if (valid_hours == true)
		{
			//if hours are 40 or fewer, calculate salary at $8.00/hour
			if (work_hours <= 40.0)
			{
				salary += work_hours * 8.00;
			}
			//if hours are over 40, give $12/hour for everything after 40 hours
			else if (work_hours > 40)
			{
				salary += 40.0 * 8.00;
				overtime_hours = work_hours - 40.0;
				salary += overtime_hours * 12.00;
			}

			//output salary to user in proper format
			cout << endl << "Your weekly salary is $" << fixed << setprecision(2) << salary << ".";

		}
	}
	while (valid_hours == false);

	//need to wait for keystroke and return a value
	_getch();
	return 0;
}