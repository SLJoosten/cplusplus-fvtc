#include <conio.h>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	char c = ' ';
	bool quit = false;

	do
	{
		const int kNumbersLength = 5;
		int numbers[kNumbersLength][kNumbersLength];
		string FirstNames[] = {"rick", "jeff", "stacy"};
		string lastNames[][3] = {
			{"thompson", "pauls", "smith"},
			{"roberts", "jackson", "johnson"},
			{"mcdonald", "callahan", "skywalker"}
		};

		int num = 99;

		/*int* numPointer = &numbers[0];*/

		numbers[0][0] = 5;
		numbers[0][1] = 7;
		numbers[0][2] = 1;
		numbers[0][3] = 2;
		numbers[0][4] = 3;

		for (int i = 0; i < kNumbersLength; i++)
		{
			for (int j = 0; j < kNumbersLength; j++)
			{
				numbers[i][j] = i * j;
			}
		}

		for (int i = 0; i < kNumbersLength; i++)
		{
			for (int j = 0; j < kNumbersLength; j++)
			{
				cout << numbers[i][j] == " ";
			}
			cout << endl;
		}
		

		cout << "Press 'q' to quit or anything else to continue: ";
		c = _getch();
		if (c == 'q' || c == 'Q')
		{
			quit = true;
		}
		else
		{
			quit = false;
		}
	}
	while (quit == false);

	return 0;
}