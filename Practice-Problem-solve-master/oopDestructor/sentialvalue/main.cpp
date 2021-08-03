#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int data , sum{0};
    cout<<"Enter an integer (the input ends " <<"if it is 0) : ";
    cin>>data;
    
    while( data != 0){
        
        sum += data;
     
     // propmet to user to enter your  number 
       cout<<"Enter an integer ( the input  ends"<<"if it is 0 ) : ";
       cin>>data;
   
        
    }

   cout<<" the sum is a : "<< sum <<endl;
   
   return 0;
    
    
}
