#include <conio.h>
#include <iostream>
#include <iomanip>
#include "..\..\HelperClass\HelperClass\Helperbot.h"

using namespace std;

int main()
{
	//declare variables
	string input1 = "";
	string input2 = "";
	int num1 = 0;
	int num2 = 0;
	bool bad_input = false;

	//use do-while loop to repeat input if invalid
	do
	{
		//get the user's first number and assign it to a string variable
		cout << "Please enter the first number (integers only): ";
		cin >> input1;
		//check whether user entered a valid integer
		if (HelperBot::IsNumeric(input1) == true)
		{
		//convert input to an integer variable if valid
		num1 = HelperBot::ConvertToInt(input1);
		}
		else
		{
			//display error message if invalid
			cout << endl << "That is not a valid number. Try again." << endl;
		}
	}
	while (bad_input == true);

	//use do-while loop to repeat input if invalid
	do
	{
		//get the user's second number and assign it to a string variable
		cout << endl << "Please enter the second number (integers only): ";
		cin >> input2;
		//check whether user entered a valid integer
		if (HelperBot::IsNumeric(input2) == true)
		{
			//convert input to an integer variable if valid
			num2 = HelperBot::ConvertToInt(input2);
		}
		else
		{
			//display error message if invalid
			cout << endl << "That is not a valid number. Try again." << endl;
		}
	}
	while (bad_input == true);

	cout << endl << "Press 'q' to quit or any other key to continue." << endl;
	char c = _getch();
	return 0;
}