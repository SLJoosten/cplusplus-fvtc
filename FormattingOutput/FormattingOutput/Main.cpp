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

	//blank line followed by hexadecimal and octal conversions on their own lines
	cout << "" << endl;
	cout << "The hex of " << integer_num << " is " << hex << integer_num << dec << endl;
	cout << "The octal of " << integer_num << " is " << oct << integer_num << endl;

	//blank line followed by double formatted to multiple decimal places
	cout << "" << endl;

	//blank line followed by final formatted display on single line
	cout << "" << endl;


	_getch();
	return 0;
}