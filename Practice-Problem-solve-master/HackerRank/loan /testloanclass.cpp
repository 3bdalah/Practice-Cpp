#include <iostream>
#include <iomanip>
#include "loan.h"
using namespace std;
int main(){
   // Enter annual interet rate 
   cout << " Enter yearl interest rate , for example 8.25 ";
   double annoulinterestrate;
   cin >> annoulinterestrate;
    
   // Enter number of years 
   cout << " Enter number of years as in integer fo rexample 5 ";
   int numberofyears;
   cin >> numberofyears;


   //Enter loan amount
   cout << "Enter loan amount, for example 120000.95: ";
   double loanamount;
   cin >> loanamount; 

   // create object 
   loan Loan(annoulinterestrate,numberofyears,loanamount);
   
   // result 
   cout << fixed(2) << setprecision(2); 
   cout << "The monthly payment is " << Loan.getmonthlypayment() << endl;
   cout << "The total payment is " << Loan.gettotalpayment()<< endl;
   
   
   return 0;


}








