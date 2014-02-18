#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>
#include <math.h>

using namespace std;

void doNothing();
bool IsNumeric(string value);
int ConvertToInt(string);

int main()
{
	/*doNothing();*/

	bool quit = false;
	/*cout << "test" << endl;*/

	while (!quit)
	{
		cout << "Please enter a number: ";
		string input = "";
		cin >> input;
		bool success = IsNumeric(input);
		cout << "Success:" << success << endl;
		if (success)
		{
			cout << "The number is " << ConvertToInt(input) << endl;
		}

		/*cout << "Press any key to continue, 'q' to quit";
		char c = _getch();
		if (c == 'q' || c == 'Q')
		{
			quit = true;
		}

		cout << endl;*/
	}
	
	return 0;
}

void doNothing()
{
	cout << "I'm doing nothing" << endl;
}

bool IsNumeric(string value)
{
	//loop through all the characters
	//check whether they are 0-9
	//if not then return false
	//if they are, keep checking

	bool success = true;

	for (int i = 0; i < value.length(); i++)
	{
		//test if c is a number
		switch(value[i])
		{
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
				break;
			default: success = false;
		}

		if (!success) break;
	}
	return success;
}

int ConvertToInt(string value)
{
	int total = 0;
	//loop through string
	for (int i = 0; i < value.length(); i++)
	{
		//read character, convert to digit
		int digit = 0;
		switch(value[i])
		{
		case '1':
			digit = 1;
			break;
		case '2':
			digit = 2;
			break;
		case '3':
			digit = 3;
			break;
		case '4':
			digit = 4;
			break;
		case '5':
			digit = 5;
			break;
		case '6':
			digit = 6;
			break;
		case '7':
			digit = 7;
			break;
		case '8':
			digit = 8;
			break;
		case '9':
			digit = 9;
			break;
		}
		//number = digit * 10 ^ (length - 1)
		int number = digit * pow(10, value.length() - (i + 1));
		/*int number = digit * 10 ^ (value.length() - (i + 1));*/
		//add number to total
		total += number;
	}

	//return total
	return total;
}