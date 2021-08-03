#include <iostream>
using namespace std;

class Circle{
public:
    // the radius of circle
    double radius;
    
    // default constractor 
    Circle(){
      radius = 1;    
    }
    
    // convert receive value by default value 
    Circle(double NewRadius){
     radius = NewRadius;
    }
    
    // eqaution area Circle
    double getArea(){
       return radius * radius * 3.14159;    
    }
    
};

int main()
{
    Circle A1(25);
   cout << "Area One Is : "<< A1.getArea() << endl;
    
    
}
