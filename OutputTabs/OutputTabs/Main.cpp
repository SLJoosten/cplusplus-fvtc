//necessary libraries and namespaces
#include <conio.h>
#include <iostream>

using namespace std;

//necessary main() method, returning 1
int main()
{
	//output text, using /t, spaces, and endl for proper formatting
	cout << "PART NO.\t" << "PRICE" << endl;
	cout << "T1267\t        " << "$6.34" << endl;
	cout << "T1300\t        " << "$8.92" << endl;
	cout << "T2401\t       " << "$65.40" << endl;
	cout << "T4482\t      " << "$103.45" << endl;
	//wait for keystroke
	_getch();
	return 1;
}