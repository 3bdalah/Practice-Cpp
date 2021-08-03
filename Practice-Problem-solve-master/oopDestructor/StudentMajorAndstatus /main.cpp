#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
  string chose;
      
  cout<<"chose your majors : "<<endl;
  cout<<"M : Mathematics "<<endl;
  cout<<"C : Computer Science "<<endl;
  cout<<"I : Information Technology "<<endl;
    
  cin>>chose;  
    
  string convert = toupper(chose);
  
  // check 
  if(chose == "M1"){
      
      cout<<"Mathematics Freshman"<<endl;
      
  }else if(chose == "M2" ){
      
      cout<<"Mathematics sophomore"<<endl
      
  }else if(chose == "M3"){
      
      cout<<"Mathematics junior "<<endl
      
  }else if(chose == "M4"){
  
      cout<<"Mathematics senior "<<endl
 
  }else if( chose == "C1"){
      
      cout<<"Computer Science Freshman "<<endl;
      
  }else if(chose == "C2"){
      
      cout<<"Computer Science sophomore "<<endl;
  }else if(chose == "C3"){
      
      cout<<"Computer Science junior "<<endl;
      
  }else if(chose == "C4"){
      
      cout<<"Computer Science senior "<<endl
      
  }else if(chose == "I1"){
      
      cout<<" Information Technology Freshman"<<endl;
      
  }else if(chose == "I2"){
      
      cout<<" Information Technology Sophomore"<<endl
      
  }else if(chose == "I3"){
      
      cout<<"Information Technology junior "<<endl
      
  }else if(chose == "I4"){
      
      cout<<" Information Technology senior "<<endl;
      
  }else {
      
  }
    
    
}













