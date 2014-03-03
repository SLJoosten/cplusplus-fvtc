#include <conio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	//declare an array to hold the characters in each line of each section and set their initial contents
	char star_array_1[10];
	star_array_1[0] = '*';
	star_array_1[1] = ' ';
	star_array_1[2] = ' ';
	star_array_1[3] = ' ';
	star_array_1[4] = ' ';
	star_array_1[5] = ' ';
	star_array_1[6] = ' ';
	star_array_1[7] = ' ';
	star_array_1[8] = ' ';
	star_array_1[9] = ' ';

	char star_array_2[10];
	star_array_2[0] = '*';
	star_array_2[1] = '*';
	star_array_2[2] = '*';
	star_array_2[3] = '*';
	star_array_2[4] = '*';
	star_array_2[5] = '*';
	star_array_2[6] = '*';
	star_array_2[7] = '*';
	star_array_2[8] = '*';
	star_array_2[9] = '*';

	char star_array_3[10];
	star_array_3[0] = '*';
	star_array_3[1] = '*';
	star_array_3[2] = '*';
	star_array_3[3] = '*';
	star_array_3[4] = '*';
	star_array_3[5] = '*';
	star_array_3[6] = '*';
	star_array_3[7] = '*';
	star_array_3[8] = '*';
	star_array_3[9] = '*';

	char star_array_4[10];
	star_array_4[0] = ' ';
	star_array_4[1] = ' ';
	star_array_4[2] = ' ';
	star_array_4[3] = ' ';
	star_array_4[4] = ' ';
	star_array_4[5] = ' ';
	star_array_4[6] = ' ';
	star_array_4[7] = ' ';
	star_array_4[8] = ' ';
	star_array_4[9] = '*';

	//use for loop to repeat each row after modifying arrays for the following line
	for (int j = 0; j < 10; j++)
	{
		//output the array's items in order for each section with spaces in between
		for (int i = 0; i < 10; i++)
		{
			cout << star_array_1[i];
		}
		cout << ' ';
		for (int i = 0; i < 10; i++)
		{
			cout << star_array_2[i];
		}
		cout << ' ';
		for (int i = 0; i < 10; i++)
		{
			cout << star_array_3[i];
		}
		cout << ' ';
		for (int i = 0; i < 10; i++)
		{
			cout << star_array_4[i];
		}
		cout << endl;

		//change the contents of each array according to that section's pattern
		//don't change the contents of arrays on the final iteration
		if (j < 9)
		{
			star_array_1[j + 1] = '*';
			star_array_2[9 - j] = ' ';
			star_array_3[j] = ' ';
			star_array_4[8 - j] = '*';
		}
		
	}
	
	_getch();
	return 0;
}