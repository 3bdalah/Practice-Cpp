#include <iostream>
using namespace std;
class stud{
public:
    double radius;
    double area;
    
    stud(){
        radius = 1.0;
    }
    
    stud(double r){
        radius = r;
    }
    
    // print Radius      
    double getRadius(){
      return radius;
    }
    
    // print Area 
    double getArea(){
        area =  (radius * radius ) + 2;
       return area;
    }
    
   
};
    // print result 
    void printresult(stud& l){
            cout << " Radius = " << l.getRadius() << " Area = "<< l.getArea() << endl;
    }
int main()
{
  stud one(5.1);
  cout << " one Area : "<< one.getArea() << endl;
  printresult(one);  
  return 0;
}
