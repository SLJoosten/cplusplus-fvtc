#include <conio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout << "Working!"<< endl;

	double number1 = 3.678976905, number2 = 7, number3 = 11;
	double sum = 0, average = 0, product = 0, exponent = 0, modulus = 0;

	product = number1 * number2 * number3;
	exponent = pow(2, 4);
	sum = number1 + number2 + number3;
	average = sum / 3;
	modulus = 5 % 2;

	cout << "Number 1 = " << number1 << endl;
	cout << "Number 2 = " << number2 << endl;
	cout << "Number 3 = " << number3 << endl;
	cout << setprecision(2) << fixed;
	cout << "Sum = " << sum << endl;
	cout << "Average = " << average << endl;
	cout << "Product = " << product << endl;
	cout << "Exponent = " << exponent << endl;
	cout << "Modulus = " << modulus << endl;

	_getch();
	return 0;
}