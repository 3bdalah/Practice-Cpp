#include "static.h"

Circle::Circle(){
    radius = 1;
    numberoffunction++;
}
// constorcatur a circle object 
Circle::Circle(double Newradius){
    radius = Newradius;
    numberoffunction++;
}
// get area 
double Circle::getArea(){
    return radius * radius * 3.14159;
}
// get radius 
double Circle::getradius(){
    return radius;
}
// set radius 
void Circle::setradius(double newradius){
    radius = (newradius >= 0) newradius : 0;
}

int Circle::getnumberofobject(){
    return getnumberoffunction;
}