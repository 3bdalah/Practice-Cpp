#include <iostream>
#include <cctype>
using namespace std;

int main(){
  char receive_char;
  
  //Receive To Convert 
  cout<<"Enter Your Char Convert To Uppercase ";
  cin>>receive_char;
  
  // Print result To user 
  cout<<" your Char Is : "<< receive_char <<endl;
  cout<<" your char case uppercase : "<< toupper(receive_char) <<endl;
  cout<<" your char case lowercase : "<< tolower(receive_char)<<endl;
  
  return 0;
  
}
