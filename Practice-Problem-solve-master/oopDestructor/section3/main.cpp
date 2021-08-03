#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a{0.0},
           b{0.0},
           c{0.0},
           check{0.0},
           r1{0.0},
           r2{0.0};
    
    //Receive Value A 
    cout<<" Enter Value A : ";
    cin>>a;
    
    // Receive Value b 
    cout<<" Enter Value B :";
    cin>>b;
    
    // Receive value c 
    cout<<" Enter Value C :";
    cin>>c;
    
    // Equation Check 
    check = pow( b , 2 ) -  4 * a * c ;
     
    // Print Reslut Equation Check 
    cout<<" Result Check : "<< check << endl;
    
    // IF CHECK Equal Number Positive  
    if(check > 0){

    // Equation Computing
    r1 = ( -b + pow( pow( b , 2 ) - 4 * a * c , 0.5 ) ) / ( 2 * a );
    r2 = ( -b - pow( pow( b , 2 ) - 4 * a * c , 0.5 ) ) / ( 2 * a );

    // Print Result 
    cout<<" Result Is : "<< r1 <<endl;
    cout<<" Result Is : "<< r2 <<endl;
    
    // IF CHECK Equal Zero 
    }else if(check == 0){
        
    r1 = ( -b + pow( pow( b , 2 ) - 4 * a * c , 0.5 ) ) / ( 2 * a );    
    // Print Result 
    cout<<" Result Is : "<< r1 <<endl;
    
    // IF CHECK Equal Number Negative
    }else{
        
    cout<<" The Equation No Real Roots "<<endl;   
    
    }   
    
    return 0;
    
}
























