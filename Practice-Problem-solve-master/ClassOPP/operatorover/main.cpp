#include <iostream>
using namespace std;

class number{

private:
  int num1;
  int num2;

public:
    number(){
      num1 = 1;
      num2 = 1;
    };
    void Show_data(int num1 , int num2){
        cout << " number one : "<< num1 << endl; 
        cout << " number two : "<< num2 << endl;
    }
    
    number add(number x, number l){
       number x;
       x.num1 = num1 + l.num1;
       x.num2 = num2 + l.num2;
       return x;
    }
};
int main()
{
  number n1(3,4) , n2(3,4) ,n3;
  n3.add(n3,n2);
};







