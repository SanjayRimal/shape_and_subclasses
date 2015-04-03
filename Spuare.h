using namespace std;
#include "Rectangle.h"
#ifndef SQUARE_H
#define SQUARE_H
class Square: public Rectangle{
    public:
        Square();
        Square(double);
        Square( string, bool, double);
       double getSide();
       void setSide(double);
       string toString();
    };


