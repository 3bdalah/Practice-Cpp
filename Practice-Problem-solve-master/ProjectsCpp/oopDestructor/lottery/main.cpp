#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    
    int lottery = rand() % 100;
    int guess{0};
    
    cout<<"Enter Your Guess Number : "<<endl;
    cin>>guess;
    
    int lotterDigites1 = lottery / 10;
    int lotterDigites2 = lottery % 10;
    
    int guessDigites1 = guess / 10;
    int guessDigites2 = guess % 10;
    
    //Check Guess 
    if( lottery == guess ){
        
        cout<<"Correct Your Guess : You Win 10000$ "<<endl;
    
    }else if(guessDigites2 == lotterDigites1 && guessDigites1 ==  lotterDigites2){
      
        cout<<" Correct Your Guess : You Win 3000$ "<<endl;

    }else if(guessDigites1 == lotterDigites1 || guessDigites1 == lotterDigites2 || guessDigites2 == lotterDigites1 ||guessDigites2  ==  lotterDigites2){
       
        cout<<" Correct Your Guess : You Win 1000$ "<<endl;
       
    }else{
        
        cout<<"Sorry : no Match "<<endl; 
    
    }
    
    return 0;
}














