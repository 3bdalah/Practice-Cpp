#include <iostream>
using namespace std;

// creat function f
void F(double& g) {
        g += 2;
}

int main()
{
  double x = 10;
  double v = 13;
  
  
  // print result berfore call function
  cout<<"BEFORE CALL : "<<endl; 
  cout<<"X IS : "<< x <<endl;
  cout<<"Y IS : "<< v <<endl;
  
  F(x);
  F(v);
  
  // print result after call function 
  cout<<"AFTER CALL : "<<endl;
  cout<<"X IS : "<< x <<endl;
  cout<<"Y IS : "<< v <<endl;
  
  // check programming DONE
  return 0;
  
}
