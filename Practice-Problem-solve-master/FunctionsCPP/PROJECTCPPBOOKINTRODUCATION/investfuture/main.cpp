#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double invest(double amount , double persent , double years){

    cout <<  ( amount * pow( persent + 1 , years ));

}

int main()
{
    
   double A , Y;
   double P;

   cout << " enter your value amount : ";
   cin >> A;
   
   cout << " enter your value years : "; 
   cin >> Y;

   cout << " enter your value persent : ";
   cin >> P;
   
   invest(A , P , Y);
   return 0 ; //check your progamming IS Done 
}