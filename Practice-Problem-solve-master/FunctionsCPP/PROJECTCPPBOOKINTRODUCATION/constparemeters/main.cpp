#include <iostream>
using namespace std;
int max(const int& num1 , const int& num2 ){

 int result;
   
 if(num1 > num2){
     result = num1;
 }else{
     result = num2;
 }
   return result;
}
int main()
{
    
  cout << max( 3 , 4 ) << endl;
  // check 
  return 0;  
    
}
