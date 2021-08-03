/*
 * c++ programming display the sum of digits of agiven number
*/
#include <iostream>
using namespace std;
int main()
{
 long int val , num , sum{0} ;
 
  // receive value number 
  cout << " enter your value here : ";
  cin >> val;
   
  num = val;  

  while( num != 0 ){
      sum = sum + num % 10;
      num =  num / 10;
}
    
    cout<<"the sum of the digits of : " << val << " is "<< sum <<endl; 
}