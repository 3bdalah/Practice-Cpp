#include <Circle.h>

// default Constructor 
Circle::Circle(){
    radius = 1;
}

// Constractor acircle  object 
Circle::Circle(double NewRadius){
    radius = NewRadius;
}

double Circle::getArea(){
    return radius * radius * 3.14159;
}