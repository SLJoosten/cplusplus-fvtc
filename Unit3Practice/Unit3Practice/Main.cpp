#include <conio.h>
#include <iostream>
#include <string>
#include "..\..\HelperClass\HelperClass\Collection.h"
#include "..\..\HelperClass\HelperClass\HelperBot.h"

using namespace std;

int main()
{
	//declare variables
	string names_items_entry = "";
	int names_items = 0;

	//ask user for number of names
	cout << "How many names? ";
	cin >> names_items_entry;

	//check that entry is valid integer
	if (HelperBot::IsNumeric(names_items_entry) == true);
	{
		//convert entry to an int
		names_items = HelperBot::ConvertToInt(names_items_entry);

		//declare string array of specified length
		string *names_array = new string[names_items];

		//prompt for each element and add to array
		for (int i = 0; i < names_items; i++)
		{
			cout << endl << "Name " << i + 1 << "? ";
			cin >> names_array[i];
		}

		cout << endl;

		//output each name in array in reverse order
		for (int i = 0; i < names_items; i++)
		{
			cout << names_array[names_items - (1 + i)] << ", ";
		}
	}

	_getch();
	return 0;
}