//necessary resources and namespaces
#include <conio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	//declare variables
	double temp_fahrenheit = 0;
	double temp_celsius = 0;

	//ask for user to enter a temperature
	cout << "Please enter a temperature (Fahrenheit): ";
	cin >> temp_fahrenheit;

	//need to wait for keystroke and return a value
	_getch();
	return 0;
}