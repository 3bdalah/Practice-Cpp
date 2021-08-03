#include <iostream>
using namespace std;
class Circle{
public:
    double radius;
    
    // controctur 
    Circle(){};
    Circle(double radius){
        radius = radius;
        
    }
    void Setradius(double radius){
        radius = radius;
    }
    double getArea(){
        return (radius * radius ) + 2;
    }

};
int main()
{
   Circle c1(5);
   cout << " C1 : "<< c1.getArea() <<  endl;
    return 0;
}
