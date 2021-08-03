#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    // Declaration 
    double Temp{0.0};
    double v{0.0};
        
    // Tell User 
    cout<<"The formula is valid for temperatures in the range between –58°F and 41°F"<<endl;
    
    // Receive Temparetures
    cout<<"Enter Temparetures : ";
    cin>>Temp;
    
    // Receive Speed 
    cout<<"Enter Speed : ";
    cin>>v;
    
    // Equation To Computing Wind Chill
    if( Temp >= (-58) && Temp <= 41 ){

        double wind = 35.74 + ( 0.7215 * Temp ) - 35.75 * pow( v , 0.16 ) + 0.4275 * Temp * pow( v , 0.16 );
        
        // Print Result 
        cout<<" Wind Chill Temperatures : "<< wind <<endl;
  
    }else{
        
        cout<<" Indicating Whether The Temperature "<<endl;
    }
    
    return 0;
}


















