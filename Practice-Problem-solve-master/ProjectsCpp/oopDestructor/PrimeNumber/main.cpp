#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
 int number_of_primes = 50;
 int number_of_primes_per_line = 10;
 int Count = 0;
 int number = 2;
 
 cout<<" The firset 50 prime numbers are \n";
 
 while( Count < number_of_primes ){
     
     bool isprime = true;
     
     // test if number is prime 
    for( int divisor = 2 ; divisor <= number / 2 ; divisor++){
         
         // if true that is no prime 
        if( divisor % number == 0){
            
            isprime =  false;
            break;
        }
    }
    
    if(isprime){
        Count++;
        
        if(Count % number_of_primes_per_line == 0 ){
            cout<< setw(4) << number << endl;
            
        }else{
            
            cout<< setw(4) << number ;
        }
        
        number++;
        
        
    }
    
 }
 return 0 ;
}
