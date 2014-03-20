#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>
#include "HelperBot.h"
#include "Collection.h"

using namespace std;

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

	Collection c;
	cout << "Collection: " << c.GetValue(0);
	_getch();
	return 0;
}