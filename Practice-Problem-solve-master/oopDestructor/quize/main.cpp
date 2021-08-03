#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    srand(time(0));
    int number1 = rand() % 10;
    int number2 = rand() % 10;
    int temp{0};
    int answer{0};
    
    if(number1 > number2){
      temp = number1;
      number1 = number2;
      number2 = temp;
    }
    
    cout<<" Enter Your Answer "<<number1 <<" - "<<number2 <<" ? ";
    cin>>answer;
    
    if(number1 - number2 == answer){
        cout<<"Your Are Correct  !"<<endl;
    }else{
        cout<<"Your Answer Wrong."<< number1 <<" - "<< number2 <<"\n Should Be Answer : " <<( number1 - number2 )<<endl;
    }
    return 0;
}












