#include <iostream>
#include <string>
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Square.h"
#include <sstream>

void rectangleDetails(string &color, bool &filled, double &length, double &width);
void shapeDetails(string &color, bool &filled);
void circleDetails(string &color, bool &filled, double &radius);
void squareDetails(string &color, bool &filled, double &side);

using namespace std;

int main()

	{
		
    string color;
    char choice;
    bool filled;
    double radius, side, length, width;
    cout << "Enter the shape type: " << endl;
    cout << "C for Circle, R for Rectangle & S for Square." << endl;
    cin >> choice;
    switch (tolower(choice)){
    case 's':
    {
    squareDetails(color, filled, side);
    Square newSquare(color, filled, side);
    cout << newSquare.toString() << endl;
    break;
    }
    case 'r':
    {
    rectangleDetails(color, filled, width, length);
    Rectangle newRectangle(color, filled, width, length);
    cout << newRectangle.toString() << endl;
    break;
    }
    case 'c':
    {
    circleDetails(color, filled, radius);
    Circle newCircle(color, filled, radius);
    cout << newCircle.toString() << endl;
    break;
    }
    default:
    cout << "Unknown shape.";
    }
}


void shapeDetails(string &color, bool &filled){
    cout << "Enter the color: ";
    cin >> color;
    cout << "Is it filled? (1 for Yes/ 0 for No) ";
    cin >> filled;
}

void circleDetails(string &color, bool &filled, double &radius){
    cout << "Enter the radius: ";
    cin >> radius;
    shapeDetails(color, filled);
}

void squareDetails(string &color, bool &filled, double &side){
    cout << "Enter length of the side: ";
    cin >> side;
    shapeDetails(color, filled);
}

void rectangleDetails(string &color, bool &filled, double &length, double &width){
    cout << "Enter length of the side: ";
    cin >> length;
    cout << "Enter width of the side: ";
    cin >> width;
    shapeDetails(color, filled);
 
 }



