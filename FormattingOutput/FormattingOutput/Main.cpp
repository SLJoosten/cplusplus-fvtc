//include necessary resources
#include <conio.h>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	//declare variables
	int integer_num = 32;
	double double_num = 42.98765;
	double column_width = 10;
	double column_width_small = 5;

	/*changing double_num to a float results in rounding error when the number is rounded to 6 decimal places 
	due to being a less precise data type (though faster)*/

	//blank line followed by hexadecimal and octal conversions on their own lines
	cout << "" << endl;
	cout << "The hex of " << integer_num << " is " << hex << integer_num << dec << endl;
	cout << "The octal of " << integer_num << " is " << oct << integer_num << endl;

	//blank line followed by double formatted to multiple decimal places
	cout << "" << endl;
	cout << fixed << right << "|" << setw(column_width) << setprecision(3) << double_num << "|" << endl;
	cout << right << "|" << setw(column_width) << setprecision(4) << double_num << "|" << endl;
	cout << right << "|" << setw(column_width) << setprecision(5) << double_num << "|" << endl;
	cout << right << "|" << setw(column_width) << setprecision(6) << double_num << "|" << endl;

	//blank line followed by final formatted display on single line
	cout << "" << endl;
	cout << "|" << right << setw(column_width_small) << integer_num << "|" << setw(column_width) << setprecision(2) << double_num << "|" << endl;

	//need to wait for keystroke and return a value
	_getch();
	return 0;
}