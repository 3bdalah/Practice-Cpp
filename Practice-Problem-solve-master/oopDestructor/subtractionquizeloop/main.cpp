#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    int correctCount{0};
    int Count{0};
    int answer;
    long startTime = time(0);
    const int number_Quize{5};
    
    // randome number
    srand(time(0));

   while( Count < number_Quize ){
       
       // randome generat two number 
       int number1 =  rand() % 10;
       int number2 =  rand() % 10;
       
       if( number1 < number2){
           int temp = number1;
           number1 =  number2;
           number2 = temp;
       }
       
       cout<<"what is a "<< number1  <<" - "<< number2 <<" ? ";  
       cin>>answer; 
       
       if(number1 - number2 == answer ){
           
           cout<<" your are correct! "<<endl;
           correctCount++;
       }else {
    
           cout<<"your answer worng \n"<< number1 <<" - "<<number2 <<" your should be "<< (number1 - number1)<<endl;       
        
       }
       Count++;
   }    
   
   long endTime = time(0);
   long tesTime = endTime - startTime;
   cout<<"Correct count is "<< correctCount<<" out of "<< number_Quize <<"\n test time is : "<< tesTime <<endl;
   
   return 0;
   
}















