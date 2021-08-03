#include <iostream>
#include <fstream>
using namespace std;
int main()
{
   // open file 
   ifstream input("score.txt");
    double sum = 0;
    double number;
  // start loops 
  while( !input.eof() ){ // Continue if not end of fil
      input >> number;
      cout<<number<<" "<<endl;
      sum += number;
  }  
     
     input.close();
     cout<<"\n the sum is : "<<sum<<endl;
   
   // check programming Done 
   return 0;
   
    
}
