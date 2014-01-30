#include <conio.h>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	string badgers_name = "Badgers";
	double badgers_win = 17;
	double badgers_loss = 4;

	string gophers_name = "Golden Gophers";
	double gophers_win = 15;
	double gophers_loss = 6;

	//do the fixed right away
	cout << fixed << setprecision(0);

	int column_width = 6;
	int column_width_wide = 20;

	cout << "Hexadecimal Gophers Win --> " << hex << (int) gophers_win << endl << endl;
	cout << "Octal Badgers Win --> " << oct << (int) badgers_win << endl << endl;

	cout << left << setw(15) << "Team" << right << setw(column_width) << "Win" << setw(column_width) << "Loss" << setw(column_width_wide) << "Average Win/Loss" << endl;
	cout << left << setw(15) << badgers_name << right << setw(column_width) << badgers_win << setw(column_width) << badgers_loss << setw(column_width_wide) << setprecision(3) << badgers_loss/badgers_win << setprecision(0) << endl;
	cout << left << setw(15) << gophers_name << right << setw(column_width) << gophers_win << setw(column_width) << gophers_loss << setw(column_width_wide) << setprecision(3) << gophers_loss/gophers_win << endl;
	_getch();
	return 0;
}