#include <iostream>
#include <cctype>
using namespace std;
int main()
{
 char Key , convert;
 


 // rececive value and 
 cout<<" enter your char ";
 cin>>Key;
 
 // Equation to convert char 
 convert = tolower(Key);

 // check char where position 
 if(convert == 'a' || convert == 'b' || convert == 'c'){
     
     cout<<"The corresponding number is : 2"<<endl;
     
 }else if(convert == 'd' || convert == 'e' || convert == 'f'){
     
     cout<<"The corresponding number is : 3"<<endl;
     
 }else if(convert == 'g' || convert == 'h' || convert == 'i'){
     
     cout<<"The corresponding number is : 4"<<endl;
     
 }else if(convert == 'j' || convert == 'k' || convert == 'l'){
     
     cout<<"The corresponding number is : 5"<<endl;
 
 }else if(convert == 'm'|| convert == 'n' || convert == 'o'){
     
     cout<<"The corresponding number is : 6"<<endl;
     
 }else if(convert == 'r' || convert == 'q' || convert == 'r'|| convert == 's'){
     
     cout<<"The corresponding number is : 7"<<endl;
     
 }else if( convert == 't' || convert == 'u' || convert == 'v'){
     
     cout<<"The corresponding number is :  8"<<endl;
     
 }else if(convert == 'w' || convert == 'x' || convert == 'y' || convert == 'z'){
     
     cout<<"The corresponding number is : 9"<<endl;  
   
 }
     
    
    
    
}











