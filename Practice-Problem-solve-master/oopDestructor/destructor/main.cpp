#include <iostream>
#include <cmath>
using namespace std;
int main()
{
     double innoulIR{0.0},
            loanAmount{0.00};
     int numberofyears{0};
     //  Enter Your Interest Rate 
     cout<<"Enter yearly interest rate, for example 8.25 : ";
     cin>>innoulIR;
     
     //Compute Monthle rate 
     double monthleIR = innoulIR /  1200;
     
     //Enter Your numbers of years  
     cout<<"Enter number of years as an integer, for example 5 : ";
     cin>>numberofyears;
    
     // Enter Your loan amount;
     cout<<"Enter loan amount, for example 120000.95 : ";
     cin>>loanAmount;
  
    //calculate payment
    double monthlypayment = loanAmount * monthleIR / ( 1 - 1 / pow(1 + monthleIR , numberofyears * 12));
    
    double totalpayment = monthlypayment * numberofyears * 12;
    
    monthlypayment =  (static_cast<double>(monthlypayment) * 100) / 100.0;
    totalpayment = (static_cast<double>(totalpayment) * 100) / 100.0;

   cout<<"The monthly payment is "<<monthlypayment<<"\n"<<"The total payment is "<<totalpayment<<endl;
   return 0;       
}

























