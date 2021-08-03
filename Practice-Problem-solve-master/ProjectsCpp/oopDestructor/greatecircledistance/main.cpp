#include <iostream>
#include <string>
#include <cmath>
#include <cctype>
using namespace std;

int main()
{
    const double radius{6.378};
    double x1 , x2 , y1 , y2 , dist;
    
    // receive data point1
    cout<<" Enter point 1 (latitude and longitude) in degrees : ";
    cin>>x1 >> y1;
    
    // receive data point2
    cout<<" Enter point 1 (latitude and longitude) in degrees : ";
    cin>>x2 >> y2; 
    
    // equation computing distance 
    dist = radius  * cos(sin(x1) * sin(x2) + cos(x1) * cos(x2) * cos( y1 - y2) );
    cout <<" distance is "<< dist << endl; 

   return 0;
   

}
