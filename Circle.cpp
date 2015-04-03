#include <math.h>
#include <iostream>
#include "Circle.h"
#include <sstream>

using namespace std;
Circle::Circle()
{
    setRadius(1.0);
}

Circle::Circle(double circleRadius)
{
    setRadius(circleRadius);
}

Circle::Circle(string shapeColor, bool isFilled, double circleRadius):Shape(shapeColor, isFilled)
{
    setRadius(circleRadius);
}

double Circle::getRadius()
{
    return radius;
}

double Circle::getArea()
{
    return M_PI * pow(radius, 2);
}

double Circle::getPerimeter()
{
 return 2 * M_PI * radius;
}

void Circle::setRadius(double circleRadius)
{
    radius = circleRadius;
}

string Circle::toString()
{
    stringstream out;
    out << getRadius();
    return "A circle with radius = " + out.str() + ", which is a subclass of " + Shape::toString();
}

