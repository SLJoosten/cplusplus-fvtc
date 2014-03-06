#include <conio.h>
#include <iostream>
#include <string>
#include <iomanip>
#include "..\..\HelperClass\HelperClass\HelperBot.h"

using namespace std;

//NOTE: neither the textbook nor existing code (save for HelperBot) were used in writing this program

//declare function
double find_average(double, double, double);

int main()
{
	//declare variables
	char c = ' ';
	string first_input = "";
	string second_input = "";
	string third_input = "";
	double first_num = 0;
	double second_num = 0;
	double third_num = 0;
	double nums_average = 0;
	bool quit = false;

	//use do-while loop to repeat if the user chooses
	do
	{
		//get the user's input
		cout << endl << "Please enter the first number: ";
		cin >> first_input;
		cout << "Please enter the second number: ";
		cin >> second_input;
		cout << "Please enter the third number: ";
		cin >> third_input;

		//check that all three inputs are valid doubles
		if (HelperBot::IsNumericDouble(first_input) && HelperBot::IsNumericDouble(second_input) && HelperBot::IsNumericDouble(third_input))
		{
			//if all valid, convert input strings to double variables
			first_num = HelperBot::ConvertToDouble(first_input);
			second_num = HelperBot::ConvertToDouble(second_input);
			third_num = HelperBot::ConvertToDouble(third_input);

			//call function to average the three numbers and assign the returned value to a variable
			nums_average = find_average(first_num, second_num, third_num);

			//display result to user
			cout << endl << "The average of the three numbers is " << fixed << setprecision(1) << nums_average << "." << endl;
		}
		else
		{
			//else display error message
			cout << endl << "One or more numbers were not valid" << endl;
		}

		//ask the user whether or not to quit and set boolean accordingly if necessary
		cout << endl << "Press q to quit or a different key to enter more numbers." << endl;
		c = _getch();
		if (c == 'q' || c == 'Q')
		{
			quit = true;
		}

	} while (quit == false);

	
	return 0;
}

double find_average(double num1, double num2, double num3)
{
	//declare average variable
	double average = 0;
	//assign variable average value of three parameters
	average = (num1 + num2 + num3) / 3;
	//return value of average variable
	return average;
}