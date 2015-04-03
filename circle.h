using namespace std;
#include "Shape.h"
#ifndef CIRCLE_H
#define CIRCLE_H
class Circle: public Shape{
    private:
        double radius;


    public:
        Circle();
        Circle(double );
        Circle(string, bool,double );
        double getRadius();
        double getArea();
        double getPerimeter();
        void setRadius(double);
        string toString();

};

