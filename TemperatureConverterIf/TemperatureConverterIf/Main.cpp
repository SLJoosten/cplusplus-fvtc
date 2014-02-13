//necessary resources and namespaces
#include <conio.h>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//declare methods
double fahrenheitToCelsius(double);
double fahrenheitToKelvin(double);
double celsiusToFahrenheit(double);
double celsiusToKelvin(double);
double kelvinToFahrenheit(double);
double kelvinToCelsius(double);

int main()
{
	//declare variables
	double temp_fahrenheit = 0;
	double temp_celsius = 0;
	double temp_kelvin = 0;
	string temp_scale_choice = "";

	
	//ask the user which scale they wish to enter temperature in
	cout << "Select a scale for temperature (f = fahrenheit, c = celsius, k = kelvin): ";
	cin >> temp_scale_choice;
	//check the user's selection and do appropriate calculations or output error message if bad entry
	if (temp_scale_choice  == "f" || temp_scale_choice == "F")
	{
		//ask for user to enter a temperature in fahrenheit
		cout << "Please enter a temperature (Fahrenheit): ";
		cin >> temp_fahrenheit;
		//pass to conversion functions and set the other temperatures to the returned values
		temp_celsius = fahrenheitToCelsius(temp_fahrenheit);
		temp_kelvin = fahrenheitToKelvin(temp_fahrenheit);
		//output temperature in all three scales to two decimal places, calling methods for conversions
		cout << "Your temperature in Fahrenheit is " << fixed << setprecision(2) << temp_fahrenheit << " F" << endl;
		cout << "Your temperature in Celsius is " << temp_celsius << " C" << endl;
		cout << "Your temperature in Kelvin is " << temp_kelvin << " K" << endl;
	}
	else if (temp_scale_choice  == "c" || temp_scale_choice == "C")
	{
		//ask for user to enter a temperature in celsius
		cout << "Please enter a temperature (Celsius): ";
		cin >> temp_celsius;
		//pass to conversion functions and set the other temperatures to the returned values
		temp_fahrenheit = celsiusToFahrenheit(temp_celsius);
		temp_kelvin = celsiusToKelvin(temp_celsius);
		//output temperature in all three scales to two decimal places, calling methods for conversions
		cout << "Your temperature in Fahrenheit is " << fixed << setprecision(2) << temp_fahrenheit << " F" << endl;
		cout << "Your temperature in Celsius is " << temp_celsius << " C" << endl;
		cout << "Your temperature in Kelvin is " << temp_kelvin << " K" << endl;
	}
	else if (temp_scale_choice  == "k" || temp_scale_choice == "K")
	{
		//ask for user to enter a temperature in kelvin
		cout << "Please enter a temperature (Kelvin): ";
		cin >> temp_kelvin;
		//pass to conversion functions and set the other temperatures to the returned values
		temp_fahrenheit = kelvinToFahrenheit(temp_kelvin);
		temp_celsius = kelvinToCelsius(temp_kelvin);
		//output temperature in all three scales to two decimal places, calling methods for conversions
		cout << "Your temperature in Fahrenheit is " << fixed << setprecision(2) << temp_fahrenheit << " F" << endl;
		cout << "Your temperature in Celsius is " << temp_celsius << " C" << endl;
		cout << "Your temperature in Kelvin is " << temp_kelvin << " K" << endl;
	}
	else
	{
		//output error message
		cout << "Input not recognized. Closing application." << endl;
		//terminate the program
	}
	

	//need to wait for keystroke and return a value
	_getch();
	return 0;
}

double fahrenheitToCelsius(double fahrenheit_parameter)
{
	double celsius_parameter = (fahrenheit_parameter - 32.0) * (5.0 / 9.0);
	return celsius_parameter;
}

double fahrenheitToKelvin(double fahrenheit_parameter)
{
	double kelvin_parameter = (fahrenheit_parameter + 459.67) * (5.0 / 9.0);
	return kelvin_parameter;
}

double celsiusToFahrenheit(double celsius_parameter)
{
	double fahrenheit_parameter = celsius_parameter * (9.0 / 5.0) + 32.0;
	return fahrenheit_parameter;
}

double celsiusToKelvin(double celsius_parameter)
{
	double kelvin_parameter = celsius_parameter + 273.15;
	return kelvin_parameter;
}

double kelvinToFahrenheit(double kelvin_parameter)
{
	double fahrenheit_parameter = kelvin_parameter * (9.0 / 5.0) - 459.67;
	return fahrenheit_parameter;
}

double kelvinToCelsius(double kelvin_parameter)
{
	double celsius_parameter = kelvin_parameter - 273.15;
	return celsius_parameter;
}