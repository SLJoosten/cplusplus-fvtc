#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string>
#include "..\..\HelperClass\HelperClass\HelperBot.h"

using namespace std;

void forLoopTest();
void whileLoopTest();
void doWhileLoopTest();

int main()
{
	bool quit = false;
	while (!quit)
	{
		/*forLoopTest();*/
		/*whileLoopTest();*/
		doWhileLoopTest();
		cout << "any key to continue, 'q' to quit";
		char c = _getch();
		if (c == 'q' || c == 'Q')
		{
			quit = true;
		}
	}
	return 0;
}

void forLoopTest()
{
	for (int i = 1; i < 5; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
	}
}

void whileLoopTest()
{
	int i = 0;
	string star = "*";
	while (i < 4)
	{
		cout << star << endl;
		star += "*";
		i++;
	}
}

void doWhileLoopTest()
{
	int i = 0;
	string star = "*";

	do
	{
		cout << star << endl;
		star += "*";
		i++;
	}
	while (i < 4);
}