#include <conio.h>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	//declare arrays
	int first_array[][3] = {
		{16, 18, 23},
		{54, 91, 11}
	};
	int second_array[][3] = {
		{14, 52, 77},
		{16, 19, 59}
	};
	int third_array[2][3];

	//display first array to user
	cout << "Array 1:" << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			//display elements with spaces in between
			cout << setw(5) << first_array[i][j] << " ";
		}
		//start a new line after each row to create row/column organization
		cout << endl;
	}

	//blank line between arrays
	cout << endl;

	//display second array to user
	cout << "Array 2:" << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			//display elements with spaces in between
			cout << setw(5) << second_array[i][j] << " ";
		}
		//start a new line after each row to create row/column organization
		cout << endl;
	}

	//blank line between arrays
	cout << endl;

	//display third array to user
	cout << "Array 3 (sums of corresponding elements):" << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			//assign the corresponding sum to the appropriate array element
			third_array[i][j] = first_array[i][j] + second_array[i][j];
			//display elements with spaces in between
			cout << setw(5) << third_array[i][j] << " ";
		}
		//start a new line after each row to create row/column organization
		cout << endl;
	}

	_getch();
	return 0;
}