#include <iostream>
using namespace std;
int main()
{
    int Code;
    // What Do This Programming Do 
    cout<<" enter your  Code to convert to char 0 and 127 : example 7 "<<endl;
    
    // Enter Your Key 
    cout<<" Enter  code  : ";
    cin>>Code;
   
    // check this is code 
    if( Code >= 0 && Code <= 127 ){
    
        cout<<" your value code convert to char : "<< static_cast<char>(Code)<<endl;
        
    }else{
        
        cout<<" tray again please! "<<endl;
    }
    // Enter Your Key 
	return 0;
}
