#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
    
    // Equation part one  to randome number 
    srand(time(0));
    
    string lottery;
    string guess;
    // equation part two to randome number 
    int digits = rand() % 10; // generat frist number 
    lottery += static_cast<char>( digits + '0' );

     digits = rand() % 10; // generat second number 
    lottery += static_cast<char>( digits + '0' );
    
    // prompt user to enter number guess 
    cout<<" enter your lottery pick (two digits): ";
    cin>>guess;

    // prompt user  value lottery number 
    cout<<" the lottery number is "<< lottery <<endl;

    // check user guess 
    if( guess == lottery ){
        // tell user your win 10000$
        cout<<" exact match : your win 1000$ "<<endl;
        
    }else if(guess[1] == lottery[0] && guess[0] == lottery[1]){
        // tell user your win 3000$
        cout<<" match all digits : your win is 3000$ "<<endl;
        
    }else if( guess[0] == lottery[0] 
           || guess[0] == lottery[1] 
           || guess[1] == lottery[0]
           || guess[1] == lottery[1] )
    {
        // prompt usre tell your win 1000$          
        cout<<" match one digits : your win 1000$ "<<endl;      
  
    }else{
        
        cout<<" Sorry , no match "<<endl;
        
    }

   return 0;
   
}
























