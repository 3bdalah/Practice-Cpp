#include <iostream>
using namespace std;
int main()
{
    double a{0.0},
           b{0.0},
           c{0.0},
           d{0.0},
           e{0.0},
           f{0.0},
           x{0.0},
           y{0.0};
    
    // Tell User Enter Value & Receive 
    cout<<"Enter Your Value A : ";
    cin>>a;
    
    // Tell User Enter Value B  & Receive 
    cout<<" Enter Your Value B : ";
    cin>>b;
    
    // Tell User Enter  Value C & Receive 
    cout<<" Enter Your Value C : ";
    cin>>c;
    
    // Tell User Enter Value D & Receive 
    cout<<" Enter Your Value D : ";
    cin>>d;
    
    // Tell User Enter Value E & Receive
    cout<<" Enter Your Value E : ";
    cin>>e;
    
    // Tell User Enter Value F & Receive
    cout<<" Enter Your Value F :";
    cin>>f;
    
    // Equation  Give X 
    x = e * d - b * f / a * d - b * c;
    
    // Equation  Give Y 
    y = a * f - e * c / a * d - b * c;

    // Print Result Equation  Y & X 
    cout<<" REsult X : "<< x <<endl; 
    cout<<" Result Y : "<< y <<endl;
 
    // Equation  Give E 
    e = a * x + b * y;
    
    // Equation Give F
    f = c * x + d * y;
    
    // Equation  Give X 
    x = e * d - b * f / a * d - b * c;
    
    // Equation  Give Y 
    y = a * f - e * c / a * d - b * c;

    // Print Result Equation  Y & X 
    cout<<" REsult X : "<< x <<endl; 
    cout<<" Result Y : "<< y <<endl;
    
    return 0;
}








