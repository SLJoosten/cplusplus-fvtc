#include <conio.h>
#include <iostream>
#include <string>
#include "..\..\HelperClass\HelperClass\HelperBot.h"

using namespace std;

int main()
{
	//declare variables
	char c = ' ';
	string input_price = "";
	double purchase_price = 0;
	bool input_error = false;

	//use do-while loop to do more calculations if user chooses not to quit
	do
	{
		//use do-while loop to repeat entry if input is invalid or not applicable
		do
		{
			//get the user's purchase price and assign it to a string
			cout << "Please enter the purchase price: ";
			cin >> input_price;

			//check whether the input is a valid double
			if (HelperBot::IsNumericDouble(input_price))
			{
				//convert the input to a double and place it in purchase_price
				purchase_price = HelperBot::ConvertToDouble(input_price);

				//check if purchase price is in proper range
				if (purchase_price <= 10 && purchase_price >= 0)
				{
					//set the error flag to false if it isn't already
					input_error = false;

				}
				else
				{
					//display error message and set error flag to true
					cout << endl << "Change can only be calculated for purchase prices between zero and ten dollars. Try again." << endl;
					input_error = true;
				}
			}
			else
			{
				//display error message and set error flag to true
				cout << endl << "Invalid purchase price. Try again." << endl;
				input_error = true;
			}
		} while (input_error);

		cout << "Press q to quit or any other key to do more calculations." << endl;
		c = _getch();
		if (c == 'q' || c == 'Q')
		{
			return 0;
		}
	} while (c != 'q' && c != 'Q');
}