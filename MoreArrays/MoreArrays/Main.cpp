#define _CRT_SECURE_NO_WARNINGS

#include <conio.h>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

string printArray(int[], int);
string toCurrency(double);

int main()
{
	int length = 5;

	//declare array of integers
	/*int numbers[] = {6, 7, 8, 9, 10}; 
	int numbers2[] = {6, 7, 8, 9, 10};*/
	
	int* numbers = new int[length];
	numbers[0] = 6;
	numbers[1] = 7;
	numbers[2] = 8;
	numbers[3] = 9;
	numbers[4] = 10;
	cout << "Original: " << printArray(numbers, length) << endl;

	int* numbers2 = new int[length + 1];
	numbers2[0] = numbers[0];
	numbers2[1] = numbers[1];
	numbers2[2] = numbers[2];
	numbers2[3] = numbers[3];
	numbers2[4] = numbers[4];
	numbers2[5] = 11;

	numbers = numbers2;
	cout << "New One: " << printArray(numbers, length + 1) << endl;

	/*cout << "Numbers: " << numbers << ", pointer: " << pointer << endl;*/
	/*int numbersLength = 5;*/

	//these are the same thing
	//numbers[0] == *pointer

	/*cout << printArray(pointer, numbersLength) << endl;
	pointer = numbers2;
	numbersLength = 6;
	cout << printArray(pointer, numbersLength) << endl;*/

	/*double value = 9.99;
	cout << "ToCurrency Test: " << toCurrency(value) << endl;*/

	_getch();
	return 0;
}

string toCurrency(double value)
{
	string output = "";
	char temp[100] = "";
	sprintf(temp, "$%0.2f", value);
	output = temp;
	return output;
}

string printArray (int arr[], int length)
{
	string output = "";
	output += "{";

	char temp[10] = "";
	char format[] = "%i";

	//output array elements in order with commas in between
	for (int i = 0; i < length; i++)
	{
		//tostring() - print format to char array
		sprintf(temp, "%i", arr[i]);
		output += temp;
		if (i < length - 1)
		{
			output += ",";
		}
	}

	output += "}";

	return output;
}