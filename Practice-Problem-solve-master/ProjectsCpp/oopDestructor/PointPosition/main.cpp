#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // Declartion  
    float x0{0} , y0{0} , x1{0} , y1{0} , x2{0} , y2{0};  
    //Part P0
    cout<<"Part One Enter Value P0 : "<<endl;
    
    // Receive X0
    cout<<"Enter Value X0 : "<<endl;
    cin>>x0;
    
    // receive Y0
    cout<<"Enter  Value Y0 : "<<endl;
    cin>>y0;
    
    //Part P1 
    cout<<"Part Two Enter Value P1 : "<<endl;
    
    // Receive X1
    cout<<"Enter Value X1 : "<<endl;
    cin>>x1;
    
    
    // Receive Y1
    cout<<"Enter Value Y1 : "<<endl;
    cin>>y1;
    
    //Part P2 
    cout<<"Part Thrid Enter Value P2 : "<<endl;
    
    // Receive X1
    cout<<"Enter Value X2 : "<<endl;
    cin>>x2;
    
    
    // Receive Y1
    cout<<"Enter Value Y2 : "<<endl;
    cin>>y2;
    
    // Equation To Computing 
  
    double result =  ( x1 - y0 ) * ( y2 - y0 ) - ( x2 - x0 ) * ( y1 - y0 ); 
    if( result == 0 ){
        
       cout<<"P2 Is On The Same Line "<<endl; 
    
    }else if( result > 0 ){
        
       cout<<"P2 Is To The Left Side Of Line "<<endl;
        
    }else if( result < 0 ){
    
       cout<<"P2 Is To The Right Side Of Line "<<endl;
    
    }else{
       
       cout<<"Sorry I Do Not Know Good Luck "<<endl;
     
    }
    return 0 ;
}















