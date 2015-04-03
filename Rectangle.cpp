#include <iostream>
#include <sstream>
#include "Rectangle.h"

using namespace std;
Rectangle::Rectangle()
{
   setWidth(1.0);
    setLength(1.0);
}

Rectangle::Rectangle(double recWidth, double recLength)
{
    setWidth(recWidth);
    setLength(recLength);
}

Rectangle::Rectangle( string fColor, bool fFilled, double recWidth, double recLength):Shape(fColor, fFilled)
{
    setWidth(recWidth);
    setLength(recLength);
}

void Rectangle::setWidth(double recWidth)
{
    width = recWidth;
}
void Rectangle::setLength(double recLength)
{
    length = recLength;
}

double Rectangle::getWidth()
{
    return width;
}

double Rectangle::getLength()
{
    return length;
}

double Rectangle::getArea(){
    return width * length;
}

double Rectangle::getPerimeter(){
    return 2 * (length + width);
}

string Rectangle::toString(){
    stringstream length, width;
    width << getWidth();
    length << getLength();
    return "A rectangle with width = "  + width.str() + " and length = " + length.str() + ", which is a subclass of " + Shape::toString() ;
}

