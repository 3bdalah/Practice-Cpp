#include <iostream>
#include <cmath>
using  namespace std;
class Fan{
public:
    int speed;
    double radius;
    bool on;
    
    // creat no-arg constractor 
    Fan(){
        speed = 1;
        on = false;
        radius = 5;
    }
    
    Fan(int Speed,double Radius,bool On){
        speed = Speed;
        radius = Radius;
        on = On;
    }
    
// set Speed
void SetSpeed(double Speed){
    speed = Speed;
}

// set radius 
void SetRadius(double Radius){
    radius = Radius;
}

// Set On 
void SetOn(bool ON){
    on = ON;
}

// Get Speed 
double GetSpeed(){
     return speed;    
}

// Get Radius
double GetRadius(){
    return radius;
}

// Get ON
bool GetON(){
    return on;
}

// Get Equation  
double GetArea(){
    return radius * speed;
}

};

int main(){ 
  Fan one() , two(4 , 4.6 , true);
    
  // fan two 
  cout << " Object two : " << endl;
  cout << " Speed : " << two.GetSpeed() << endl;
  cout << " On : " << two.GetON() << endl;
  cout << " Radius : " <<two.GetRadius() << endl;
  cout << " Area : "<< two.GetArea() << endl;
  return 0;
}








