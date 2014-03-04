#include <conio.h>
#include <iostream>
#include <string>
#include "..\..\HelperClass\HelperClass\HelperBot.h"

using namespace std;

double GetSum(double, double, double);

int main()
{
	//declare variables
	string first_input = "";
	string second_input = "";
	string third_input = "";
	double first_num = 0;
	double second_num = 0;
	double third_num = 0;

	//get user input
	cout << "Please enter the first number: ";
	cin >> first_input;
	cout << "Please enter the second number: ";
	cin >> second_input;
	cout << "Please enter the third number: ";
	cin >> third_input;

	//check that all three inputs are valid doubles
	if (HelperBot::IsNumericDouble(first_input) && HelperBot::IsNumericDouble(second_input) && HelperBot::IsNumericDouble(third_input))
	{
		//if all valid doubles, convert to doubles and assign to proper variables
		first_num = HelperBot::ConvertToDouble(first_input);
		second_num = HelperBot::ConvertToDouble(second_input);
		third_num = HelperBot::ConvertToDouble(third_input);
	}
	else
	{
		//display error message
		cout << endl << "One or more of your entries is invalid." << endl;
	}
	
	//output result to user
	cout << endl << "The sum of your numbers is " << GetSum(first_num, second_num, third_num) << endl;
	
	_getch();
	return 0;
}

double GetSum(double num1, double num2, double num3)
{
	return num1 + num2 + num3;
}