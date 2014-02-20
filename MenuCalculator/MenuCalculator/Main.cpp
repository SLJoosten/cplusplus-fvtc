#include <conio.h>
#include <iostream>
#include <iomanip>
#include "..\..\HelperClass\HelperClass\HelperBot.h"
#include "BasicMath.h"

using namespace std;

int main()
{
	//declare variables
	string input1 = "";
	string input2 = "";
	string operator_choice = "";
	char c = 'a';
	double num1 = 0;
	double num2 = 0;
	int int_operator = 0;
	bool bad_input = false;

	//use do-while loop to do more calculations if desired
	do
	{
		//use do-while loop to repeat input if invalid
		do
		{
			//set the bad input flag to false if not already
			bad_input = false;
			//get the user's first number and assign it to a string variable
			cout << "Please enter the first number (integers only): ";
			cin >> input1;
			//check whether user entered a valid integer
			if (HelperBot::IsNumeric(input1) == true)
			{
				//convert input to a double if a valid integer (for later calculations)
				num1 = (double) HelperBot::ConvertToInt(input1);
			}
			else
			{
				//display error message if invalid
				cout << endl << "That is not a valid integer. Try again." << endl;
				//set the bad input flag to true
				bad_input = true;
			}
		}
		while (bad_input == true);

		//use do-while loop to repeat if input invalid
		do
		{
			//set the bad input flag to false if not already
			bad_input = false;
			//get the user's mathematical operation
			cout << "Enter your mathematical operation (1 = plus(+), 2 = minus(-), 3 = times(*), 4 = divided by(/)): ";
			cin >> operator_choice;
			//convert the operator choice into the corresponding integer if possible
			if (HelperBot::IsNumeric(operator_choice) == true)
			{
				int_operator = HelperBot::ConvertToInt(operator_choice);
			}
			else
			{
				//display error message if invalid
				cout << endl << "That is not a valid integer. Try again." << endl;
				//set the bad input flag to true
				bad_input = true;
			}
		}
		while (bad_input == true);

		//use do-while loop to repeat input if invalid
		do
		{
			//set the bad input flag to false if not already
			bad_input = false;
			//get the user's second number and assign it to a string variable
			cout << endl << "Please enter the second number (integers only): ";
			cin >> input2;
			//check whether user entered a valid integer
			if (HelperBot::IsNumeric(input2) == true)
			{
				//convert input to a double if a valid integer (for later calculations)
				num2 =  (double) HelperBot::ConvertToInt(input2);
			}
			else
			{
				//display error message if invalid
				cout << endl << "That is not a valid integer. Try again." << endl;
				//set the bad input flag to true
				bad_input = true;
			}
		}
		while (bad_input == true);

		//use the appropriate calculation method and display accordingly
		switch (int_operator)
		{
			case 1:
				//display operation and results to user
				cout << endl << num1 << " + " << num2 << " = " << BasicMath::Add(num1, num2) << endl;
				break;
			case 2:
				//display operation and results to user
				cout << endl << num1 << " - " << num2 << " = " << BasicMath::Subtract(num1, num2) << endl;
				break;
			case 3:
				//display operation and results to user
				cout << endl << num1 << " * " << num2 << " = " << BasicMath::Multiply(num1, num2) << endl;
				break;
			case 4:
				//display operation and results to user
				cout << endl << num1 << " / " << num2 << " = " << BasicMath::Divide(num1, num2) << endl;
				break;
			default:
				cout << endl << "Your integer did not correspond to a mathematical operation, so none were performed." << endl;
		}

		cout << endl << "Press 'q' to quit or any other key to do more math." << endl;
		c = _getch();

	}
	while (c != 'q' && c != 'Q');

	return 0;

}