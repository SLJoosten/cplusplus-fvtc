#include <iostream>
#include <string>
#include "Rectangle.h"
//#include "..\..\1stCBApp\1stCBApp\HelperBot.h"

using namespace std;

int main()
{
    //declare variables
    string length_entry;
    string width_entry;
    int length;
    int width;

    //get user entries for length and width
    cout << "Please enter the length of a rectangle (whole numbers only): ";
    cin >> length_entry;
    cout << endl << "Please enter the width of a rectangle (whole numbers only): ";
    cin >> width_entry;
    cout << endl;

    //convert entries if they are valid integers (or use default of 1 if not)
    //if (HelperBot::IsNumeric(length_entry))
    //{
        //length = HelperBot::ConvertToInt(length_entry);
    //}
    //else
    //{
        //length = 1;
    //}
    //if (HelperBot::IsNumeric(width_entry))
    //{
        //width = HelperBot::ConvertToInt(width_entry);
    //}
    //else
    //{
        //width = 1;
    //}

    //instantiate a rectangle object with the specified dimensions
    //Rectangle my_rectangle = new Rectangle(length, width);

    //display the area and perimeter to the user
    //cout << endl << "Area = " << my_rectangle.get_area() << endl;
    //cout << "Perimeter = " << my_rectangle.get_perimeter() << endl;

    return 0;
}
