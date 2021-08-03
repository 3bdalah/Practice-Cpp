#include <iostream>
using namespace std;

int main()
{
   int minutes{0}; 
   cout<<"Enter Your Minutes : ";
   cin>>minutes;  
   
   // Equation Computing Days
   int day = ( minutes / 60 ) / 24;
   int days = day % 365;   
   
   // Equation Computing Years 
   int years = day / 365;
   
   // OutPut Result
   cout<<" Minutes : "<<minutes<<endl;
   cout<<" Days : "<< days<<endl;
   cout<<" Years : "<< years<<endl;
   
}




















