#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>
#include "HelperBot.h"
#include "Collection.h"

using namespace std;

struct Student
{
	string FirstName;
	string LastName;
	int Credits;
};

int main()
{
	/*bool quit = false;
	while (!quit)
	{
		cout << "Please enter a number: ";
		string input = "";
		cin >> input;
		if (HelperBot::IsNumeric(input) == true)
		{
			cout << endl << "Good Job!" << endl;
			cout << "You entered: " << HelperBot::ConvertToInt(input) << endl;
		}
		else
		{
			cout << endl << "That is not a number." << endl;
		}

		cout << "Press any key to continue, 'q' to quit." << endl;
		char c = _getch();
		if (c == 'q' || c == 'Q') quit = true;
	}*/

	Student jeff;
	jeff.FirstName = "Jeff";
	jeff.LastName = "Richards";
	jeff.Credits = 27;

	Collection<Student> students;
	students.Add(jeff);

	for (int i = 0; i < students.Length(); i++)
	{
		Student tempStudent = students[i];
		cout << tempStudent.LastName << "," << tempStudent.FirstName << endl;
	}

	Collection<string> names;
	names.Add("Rick");
	names.Add("Tony");
	names.Add("Suzy");

	cout << "Names: " << names << endl;

	Collection<int> c;
	c.Add(5);
	c.Add(7);
	c.Add(11);
	c.Add(13);

	cout << "Length of Collection: " << c.Length() << endl;


	cout << c << endl;

	cout << "Element at 0: " << c[0] << endl;

	int numbers[] = {1, 2, 3};

	numbers[0] = 999;
	cout << "numbers[0]: " << numbers[0] << endl;

	c[0] = 999;
	cout << "c[0]: " << c[0] << endl;

	/*cout << "Collection: " << c.GetValue(0);*/
	_getch();
	return 0;
}