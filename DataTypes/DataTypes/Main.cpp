#include <conio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int num = -5;
	int num2 = 27;
	bool success = true;
	double miles = 5.256;
	string hello = "hi there";
	char c = 'y';

	cout << "num = " << num << endl;
	cout << "success = " << success << endl;
	cout << "miles = " << miles << endl;
	cout << "hello = " << hello << endl;
	cout << "c = " << c << endl;
	cout << "num + num2 = " << num + num2 << endl;

	_getch();
	return 1;
}