#include <iostream>
#include <cctype>
#include <string>
using namespace std;
 
int main()
{
  // declaration string 
  string message = " welcome my application ";
  cout << " Your message is : "; 
  cout << " welcome my application " << endl; 
  cout << " length your message : " << message.length() << endl;
  cout << " size  your message : " << message.size() << endl;
  cout << " index number 4 fromt your message : " << message.at(4) << endl;
  
  for(int i = 0 ; i <= ( message.length() ) ; i++){
     cout << "  " << i << " => " << message.at( i ) << " ; " << endl;
  }
  
    return 0;
    
}
