#include "Rectangle.h"
#include <string>

//constructors
Rectangle::Rectangle()
{
    _length = 1;
    _width = 1;
}

Rectangle::Rectangle(int length, int width)
{
    _length = length;
    _width = width;
}

//destructor
Rectangle::~Rectangle()
{

}

//getters and setters
int Rectangle::length()
{
    return _length;
}

int Rectangle::width()
{
    return _width;
}

void Rectangle::set_length(int length)
{
    _length = length;
}

void Rectangle::set_width(int width)
{
    _width = width;
}

//declare mutator
//void Rectangle::SetRec(int length, int width)
//{
    //_length = length;
    //_width = width;
//}

//other methods
int Rectangle::get_area()
{
    return _length * _width;
}

int Rectangle::get_perimeter()
{
    return 2 * _length + 2 * _width;
}

//string Rectangle::to_string()
//{

//}
