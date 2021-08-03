#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double amount{0.0};
	// receive the amount
    cout<<"Enter an amount in double, for example 11.56 : ";
    cin>>amount;
    
    // RemainingAmount
    int  remainingamount = static_cast<int>(amount * 100 );
    
    // number one of  Dollers 
    int numberOneOfDollers =  remainingamount / 100;
    remainingamount %= 100;
    
    // Number One Of Querters 
    int numberOneQuarter = remainingamount / 25;
    remainingamount %= 25; 
   
    // Number One Of dimes
    int numberOneDimes = remainingamount / 10;
    remainingamount %= 10; 
    
    // Number One Of nickels
    int numberOneNickels = remainingamount / 5;
    remainingamount %= 5;
    
    // Number One  Of Pennies 
    int numberOnePennies = remainingamount ;
    // Result        
    cout<<" Number One Of Dollers   :  "<< numberOneOfDollers <<endl;
    cout<<" Number One Of Querters  :  "<< numberOneQuarter <<endl;
    cout<<" Number One Of Dimes     :  "<< numberOneDimes <<endl;
    cout<<" Number One Of Nickels   :  "<< numberOneNickels <<endl;
    cout<<" Number One Of Pennies   :  "<< numberOnePennies<<endl;

	return 0;
}


























