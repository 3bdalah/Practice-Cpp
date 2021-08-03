#include <iostream>
using namespace std;
//using namespace data;
int main()
{
     double v1{0.0},
            v2{0.0},
            t{0.0};
      
     //Tell User  Enter V1 
     cout<<"Enter V1 :";
     cin>>v1;
    
     //Tell User Enter V2 
     cout<<"Enter V2 : ";
     cin>>v2;
     
     //Tell User Enter Time
     cout<<"Enter Time : ";
     cin>>t;

     //Equation Computing
     double Avarage = ( v2 - v1 ) / t;

     // Print Result ;
     cout<<Avarage<<endl;           
     return 0;
}












