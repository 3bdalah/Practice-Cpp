#include <iostream>
#include <iomanip>
using namespace std;
// check number is prime 
bool isPrime(int number){
    for(int divisor = 2; divisor <= number / 2; divisor++   )
    {
        // if true , number is  not prime  
        if(divisor % number == 0){
            return false;
        }
    }
    return true;
}
// function print prime number 
void printprimenumber(int NumberOfPrime){
    
    // const number 
    const int NUMBER_OF_PRIME = 50;
    const int NUMBER_OF_PRIME_PER_LINE = 10;
    
    // Declaration
    int  count{0};
    int number{2};
    
    // Repeatedly find prime numbers 
    while(count < NumberOfPrime){
    
        if( isPrime(number) )
    {
     
        count++; //increase the count
    
    if(count % NUMBER_OF_PRIME_PER_LINE == 0 ){
    
        // print the number advance to the  new line 
        cout<< setw(4) << number;; 
    
    }else {
        
        cout<<setw(4)<<number;
     }
    }
      //check if the next number is prime 
     number++; 
  }
}

int main()
{
    
   cout<<"the first number is prime number 50  are \n";
   printprimenumber(50);
   cout<<endl;
    
	return 0;
}













