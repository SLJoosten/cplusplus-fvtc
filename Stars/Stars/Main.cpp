#include <conio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	//declare an array to hold the characters in each line of each section and set them for the first segment
	char star_array[10];
	star_array[0] = '*';
	star_array[1] = ' ';
	star_array[2] = ' ';
	star_array[3] = ' ';
	star_array[4] = ' ';
	star_array[5] = ' ';
	star_array[6] = ' ';
	star_array[7] = ' ';
	star_array[8] = ' ';
	star_array[9] = ' ';

	//output the array's items in order
	for (int i = 0; i < 10; i++)
	{
		cout << star_array[i];
	}
	
	_getch();
	return 0;
}