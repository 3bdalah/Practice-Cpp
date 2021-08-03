#ifndef CIRCLE_H
#define CIRCLE_H
class Circle{

public:
   double radius;
  Circle();
  Circle(double);  
  double getArea();
  double getradius();
  void setRadius(double );
  static int getnumberoffunction();
  
private:
  double raduis;
  static int numberoffunction;  
};
#endif;