//include necessary libraries and namespaces
#include <conio.h>
#include <iostream>
#include <iomanip>

using namespace std;

//necessary main() function
int main()
{
	//declare and initialize first, second, and third numbers
	double firstnum = 106.54;
	double secnum = 89.532;
	double thirdnum = 98.76;
	//declare total and average and initialize them with proper values relative to other variables
	double total = firstnum + secnum + thirdnum;
	double average = total / 3;

	//output first, second, and third numbers and their values, each on its own line
	cout << "Firstnum = " << firstnum << endl;
	cout << "Secnum = " << secnum << endl;
	cout << "Thirdnum = " << thirdnum << endl;
	//output total and its value on its own line, rounding to the nearest ten-thousandth
	cout << setprecision(4) << fixed;
	cout << "Total = " << total << endl;
	//output average and its value on its own line, rounding to the nearest tenth
	cout << setprecision(1);
	cout << "Average = " << average << endl;

	//wait for keystroke, then return a value and end
	_getch();
	return 0;
}