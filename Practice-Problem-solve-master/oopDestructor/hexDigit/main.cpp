#include <iostream>
#include <cctype>
using namespace std;

int main()
{
   char hexDigit;
   
   cout << " enter your a hex digit : ";
   cin >> hexDigit;
   
   hexDigit = toupper( hexDigit );
   
   // print result number maines 10 
   /*{
       int r = hexDigit - 'A';
       cout<<" hex digit is : "<<  r  <<endl;
   }*/
   
   // check 
   if( hexDigit >= 'A' && hexDigit <= 'F' ){
       
   int value = 10 + hexDigit - 'A';
   
   cout << "the decimal value for hex digit : "<< hexDigit << " is " << value << endl;
       
   }else if( isdigit(hexDigit) ){
       
       cout << " The deceimal is a value for hex digit " << hexDigit << " is " << hexDigit << endl;
   
   }else {
       
       cout<<hexDigit << " is an availed  input  "<<endl;
       
   }
   return 0;
    
}




























