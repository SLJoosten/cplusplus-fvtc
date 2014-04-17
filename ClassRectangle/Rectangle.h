#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Rectangle
{
    private:
        int _length;
        int _width;

    public:
        //declare constructors and destructor
        Rectangle();
        Rectangle(int, int);
        ~Rectangle();

        //declare getters and setters
        int length();
        int width();
        void set_length(int);
        void set_width(int);

        //declare mutator
        //void SetRec(int, int);

        //other method declarations
        int get_area();
        int get_perimeter();
        //string to_string();
};

#endif // RECTANGLE_H_INCLUDED
