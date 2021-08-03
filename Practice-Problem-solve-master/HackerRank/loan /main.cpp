#include "loan.h"
#include <iostream>
#include <cmath>
using namespace std;
/**
 * @brief  Abdallah Abdelghafar 
 * @return  Loan Amount And Rate 
 */

loan::loan(){
    annoulinterestrate == 9.5;
    numberofyears = 30;
    loanamount = 100000;
}
// constractor
loan::loan(double rate, int years ,double amount);
    annoulinterestrate == rate;
    numberofyears = years;
    loanamount = amount; 
}
// get rate 
double loan::getannoulinterestrate(){
    return annoulinterestrate;
}
// get number of yeas  
int loan::getnumberofyears(){
    return numberofyears;
}
// get amount 
double loan::getloanamount(){
    return loanamount;
}
// set rate from user 
void loan::setannoulinterestrate(double rate){
    annoulinterestrate = rate;
}
// set amount from uers 
void loan::setloanamount(double amount){
    loanamount = amount;
}
// set years from users 
void loan::setnumberofyears(int years){
    numberofyears = years;
}
// get monthly function 
double loan::getmonthlypayment(){
    double monthlyrate = annoulinterestrate / 1200;
    return loanamount * monthlyrate / (1 - (pow(1 / (1 + monthlyinterestrate), numberofyears * 12)));

}

// get total payment 
double loan::gettotalpayment(){
    return getmonthlypayment() * numberofyears * 12;
}