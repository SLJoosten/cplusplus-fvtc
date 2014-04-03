#include <conio.h>
#include <iostream>
#include <string>
#include "..\..\HelperClass\HelperClass\HelperBot.h"

using namespace std;

int main()
{
	//declare variables
	string array_length_input = "";
	int array_length = 0;
	string element_input = "";
	int element_total = 0;
	bool invalid_element = false;
	char c = ' ';

	//use do-while loop to allow additional entries
	do
	{
		//prompt user for number of integers
		cout << endl << "How many numbers would you like to enter? ";
		cin >> array_length_input;
		//check that the user's input is a valid integer
		if (HelperBot::IsNumeric(array_length_input) == true)
		{
			//if valid, convert input to integer and assign to array_length
			array_length = HelperBot::ConvertToInt(array_length_input);
			//declare integer pointer to point at a new integer array of the proper length
			int* nums_pointer = new int[array_length];
			//use for loop to get array elements as many times as needed
			for (int i = 0; i < array_length; i++)
			{
				//use do-while loop to reapeat if invalid input
				do
				{
					cout << endl << "Enter integer #" << i + 1 << ": ";
					cin >> element_input;
					//check that user's input is a valid integer
					if (HelperBot::IsNumeric(element_input) == true)
					{
						invalid_element = false;
						//if valid, convert input to integer and assign to element in array
						nums_pointer[i] = HelperBot::ConvertToInt(element_input);
						//add number to element_total, as well
						element_total += nums_pointer[i];
					}
					else
					{
						//if invalid, display error message and repeat
						cout << endl << "That is not a valid integer. Please try again." << endl;
						invalid_element = true;
					}
				}
				while(invalid_element == true);
			}
			//display the total sum of the numbers in the array
			cout << endl << "Sum of array elements: " << element_total << endl;

			cout << endl << "Array elements in reverse order: ";
			//use for loop to display numbers in reverse order, separated by commas
			for (int i = 0; i < array_length; i++)
			{
				cout << nums_pointer[array_length - (1 + i)];
				if(i != (array_length - 1))
				{
					cout << ", ";
				}
				else
				{
					cout << endl;
				}
			}
		}
		else
		{
			//if invalid input, display error message
			cout << endl << "Please enter only valid integers." << endl;
		}
		//ask user whether to quit or continue
		cout << endl << "Press 'q' to quit or any other key to enter another list of numbers." << endl;
		c = _getch();
	}
	while(c != 'q' && c != 'Q');

	return 0;
}