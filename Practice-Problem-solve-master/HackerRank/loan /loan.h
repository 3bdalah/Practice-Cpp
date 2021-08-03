#ifndef LOAN_H
#define LOAN_H

class loan{
public:
  loan();
  loan(double rate , int years , double amount);
  double getannoulinterestrate();
  int getnumberofyears();
  double getloanamount();
  void setannoulinterestrate(double rate);
  void setnumberofyears(int years);
  void setloanamount(double amount);
  double getmonthlypayment();
  double gettotalpayment();
  
private:
  double annoulinterestrate;
  int numberofyears;
  double loanamount;
};

#endif;