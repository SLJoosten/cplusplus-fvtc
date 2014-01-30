#include <conio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int integer_num = 32;
	double double_num = 42.98765;

	cout << "" << endl;
	cout << "The hex of " << integer_num << " is " << hex << integer_num << dec << endl;
	cout << "The octal of " << integer_num << " is " << oct << integer_num << endl;

	_getch();
	return 0;
}