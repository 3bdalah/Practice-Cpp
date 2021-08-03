#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int guess_one{0};
    int guess_two{0};
    int guess_thr{0};
    
    // Equation Randome Part one 
    srand(time(0));
    
    // Equation Randome Part Two 
    int num_one = rand() % 10 ;
    int num_two = rand() % 10 ;
    int num_thr = rand() % 10 ;
    
    // Tell User Enter And receive Value 
    cout<<" Enter Your Guess One : ";
    cin>>guess_one;
    
    // Tell User Enter And Rececive Value
    cout<<" Enter Your Guess Two : ";
    cin>>guess_two;
   
    // Tell User Enter And Receive Value  
    cout<<" Enter Your Guess Third : ";
    cin>>guess_thr;
    
    // Start If Condition
    //If the user input matches the lottery number in the exact order
    if(guess_one == num_thr && guess_two == num_one && guess_thr == num_two){

      cout<<" Your Are Winner And Your Win Is a 10000$  "<<endl;  
    // If all the digits in the user input match all the digits in the lottery number,
    }else if( guess_one == num_one && guess_two == num_two && guess_thr == num_thr ) {
        
      cout<<" Your Are Winner And Your Win Is a 3000$  "<<endl;  
    // If one digit in the user input matches a digit in the lottery number
    }else if(guess_one == num_one || guess_two == num_two || guess_thr == num_thr ){
       
      cout<<" Your Are Winner And Your Win Is A 1000$  "endl;
 
    }else{
        
      cout<<" Your Are Failed Sorry Good luck! "<<endl;
        
    };
    
    return 0;
}









