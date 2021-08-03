#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x1{0} , y1{0},
           x2{0} , y2{0},
           x3{0} , y3{0}; 
    // Prompt the user to enter three points
    cout<<" Enter Three Numbers Points : ";
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    
    // compute Three sides 
    double a = sqrt( (x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3) );
    double b = sqrt( (x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3) );
    double c = sqrt( (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) ); 
    
    // Obtain three angles in radians
    double A = acos( (a * a - b * b - c * c) / ( -2 * c * b ) );
    double B = acos( (b * b - a * a - c * c) / ( -2 * c * a ) );
    double C = acos( (c * c - a * a - b * b) / ( -2 * c * a ) );    
    
    // Display the angles in degress
    const double PI = 3.14159;
    
    // Print Result 
    cout<<" The Three angles are : "<< A * 180 / PI <<" "<< B * 180 / PI <<" "<< C * 180 / PI <<endl; 
    
    return 0;
    
}









