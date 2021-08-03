#include <iostream>
#include "stants.h"
using namespace std;

int main()
{

 cout << "Number of circle objects created: " << Circle::getnumberofobject() << endl;     
 Circle circle1;
 
 // print result 
 cout << "The area of the circle of radius " << circle1.getradius() << " is " << circle1.getArea() << endl; 
 cout << "Number of circle objects created: " << circle1.getnumberofobject() << endl;
 
 Circle circle2(5.0);

 // print result circl2  
 cout << "The area of the circle of radius " << circle2.getradius() << " is " << circle2.getArea() << endl; 
 cout << "Number of circle objects created: " << circle2.getnumberofobject() << endl;

 circle1.setRadius(3.3);
 cout << "The area of the circle of radius " << circle1.getradius() << " Area is : " << circle1.getArea() << endl;
 cout << "circle1 number of function is : " << circle1.getnumberofobject() << endl; 
 cout << "Number of circle objects created: " << circle2.getnumberofobject() << endl;

   return 0;// checkk your programming Done or Error
}