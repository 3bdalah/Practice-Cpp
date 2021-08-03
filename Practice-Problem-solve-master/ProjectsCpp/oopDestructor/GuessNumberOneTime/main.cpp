#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int guess;
    // randome number
    srand(time(0));
    
    int number = rand() % 101;
    
    
    
    while( guess != number){
    // enter 
    cout<<" enter your guess here : ";
    cin>>guess;    
    
    if( guess == number ){
        
        cout<<"yea the number is  "<<number<<endl;
        
    }else if( guess > number ){
        
        cout<<" your guess is height  "<<endl;
        
    }else{
        
        cout<<" your  guess is low "<<endl;
        
    }
        
    }
    
    
}
















