#include <conio.h>
#include <iostream>
#include <string>
#include <iomanip>
#include "..\..\HelperClass\HelperClass\HelperBot.h"

using namespace std;

//declare functions
void GetFives(int  & num_fives, double & remainder);
void GetOnes(int & num_ones, double & remainder);
void GetQuarters(int & num_quarters, double & remainder);
void GetDimes(int & num_dimes, double & remainder);
void GetNickels(int & num_nickels, double & remainder);
void GetPennies(int & num_pennies, double & remainder);


int main()
{
	//declare variables
	char c = ' ';
	string input_price = "";
	int num_fives = 0;
	int num_ones = 0;
	int num_quarters = 0;
	int num_dimes = 0;
	int num_nickels = 0;
	int num_pennies = 0;
	double purchase_price = 0;
	double remainder = 0;
	bool input_error = false;

	//use do-while loop to do more calculations if user chooses not to quit
	do
	{
		//use do-while loop to repeat entry if input is invalid or not applicable
		do
		{
			//get the user's purchase price and assign it to a string
			cout << endl << "Please enter the purchase price: ";
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
					//set the remaining change to the difference between the purchase price and $10
					remainder = 10.00 - purchase_price;
					//call functions to calculate change
					GetFives(num_fives, remainder);
					GetOnes(num_ones, remainder);
					GetQuarters(num_quarters, remainder);
					GetDimes(num_dimes, remainder);
					GetNickels(num_nickels, remainder);
					GetPennies(num_pennies, remainder);

					//output the change to the user
					cout << endl << "Your change is:" << endl;
					cout << num_fives << " five dollar bills" << endl;
					cout << num_ones << " one dollar bills" << endl;
					cout << num_quarters << " quarters" << endl;
					cout << num_dimes << " dimes" << endl;
					cout << "and " << num_pennies << " pennies" << endl;
					cout << "for a total of $" << fixed << setprecision(2) <<
						(num_fives * 5.00 + num_ones * 1.00 + num_quarters * 0.25 + num_dimes * 0.10 + num_nickels * 0.05 + num_pennies * 0.01) << endl;

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

		cout << endl << "Press q to quit or any other key to do more calculations." << endl;
		c = _getch();
		if (c == 'q' || c == 'Q')
		{
			return 0;
		}
	} while (c != 'q' && c != 'Q');

}

void GetFives(int & num_fives, double & remainder)
{
	//use an int cast to calculate the number of fives, truncating away the remainder
	num_fives = (int) (remainder / 5.00);
	//find the remainder by subtracting the change made in fives from the leftover change
	remainder -= (num_fives * 5.00);
}

void GetOnes(int & num_ones, double & remainder)
{
	//use an int cast to calculate the number of ones, truncating away the remainder
	num_ones = (int) (remainder / 1.00);
	//find the remainder by subtracting the change made in ones from the leftover change
	remainder -= (num_ones * 1.00);
}

void GetQuarters(int & num_quarters, double & remainder)
{
	//use an int cast to calculate the number of quarters, truncating away the remainder
	num_quarters = (int) (remainder / 0.25);
	//find the remainder by subtracting the change made in quarters from the leftover change
	remainder -= (num_quarters * 0.25);
}

void GetDimes(int & num_dimes, double & remainder)
{
	//use an int cast to calculate the number of dimes, truncating away the remainder
	num_dimes = (int) (remainder / 0.10);
	//find the remainder by subtracting the change made in dimes from the leftover change
	remainder -= (num_dimes * 0.10);
}

void GetNickels(int & num_nickels, double & remainder)
{
	//use an int cast to calculate the number of nickels, truncating away the remainder
	num_nickels = (int) (remainder / 0.05);
	//find the remainder by subtracting the change made in nickels from the leftover change
	remainder -= (num_nickels * 0.05);
}

void GetPennies(int & num_pennies, double & remainder)
{
	//use an int cast to calculate the number of pennies, truncating away the remainder
	num_pennies = (int) (remainder / 0.01);
	//find the remainder by subtracting the change made in pennies from the leftover change
	remainder -= (num_pennies * 0.01);
}