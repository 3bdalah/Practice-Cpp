#include <iostream>
using namespace std;

int main()
{
     int num1{0},
         num2{0},
         check{0};
     
     // Tell User Enter first Number :
     cout<<" Enter You First Number : ";
     cin>>num1;
     
     // Tell User Enter Last Number :
     cout<<" Enter Your Last Number : "; 
     cin>>num2;
     
     // Equation To Check Division
     check =  num1 % num2;
    
     // IF Condition 
     if( check == 0 ){
         
     cout<< num1 <<" Is Divisible To  "<< num2 <<endl;
     
     }else{
         
     cout<< num1 <<" Is  Not Divisible To  "<< num2 <<endl;
     
     }
     
    return 0;  
}














