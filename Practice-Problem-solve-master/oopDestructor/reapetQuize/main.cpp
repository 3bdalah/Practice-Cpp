#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{  
    int answer;
    // randome number 
    srand(time(0));
     
    int number1 = rand() % 10;
    int number2 = rand() % 10;
     
    // check number1 and number2 
    if( number1 < number2 ){
         int temp = number1;
             number1 = number2;
             number2 - temp; 
    }
    
    // print quize 
    cout<<" what is "<< number1 <<" - "<< number2 << " ? ";
    cin>>answer;
    
    //loop answer
    while(number1 - number2 != answer){
        
        cout<<"wrong answer try again .what is "<<number1 <<" - "<< number2 <<" ? ";
        cin>>answer;
        
    }
    
    // if corrocet answer 
    cout<<"your got it!"<<endl;
    
    return 0;
    
}





















