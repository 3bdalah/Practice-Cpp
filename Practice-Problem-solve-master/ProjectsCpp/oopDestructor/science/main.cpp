#include <iostream>
using namespace std;

int main(){
   double M{0.0},
          finaltemp{0.0},
          initializer{0.0};
//  const double num = 
  
  // Tell User  Enter Your Amount Water in kilograms ;
  cout<<"Enter Your Amount Of water in killograms : ";
  // recevie Data form  user 
  cin>>M;
  
  // Tell User  Enter Your Amount Water in kilograms ;
  cout<<"Enter Your Amount Of Finales Temperature : ";
  // recevie Data form  user 
  cin>>finaltemp;
  
  // Tell User  Enter Your Amount Water in kilograms ;
  cout<<"Enter Your Amount Of Initializer : ";
  // recevie Data form  user 
  cin>>initializer;
  
  //Equation Computing 
  double Q = M * (finaltemp - initializer) * 4184 ; 
  
  cout<<" Qurters : "<< Q << endl;
  return 0;
}



