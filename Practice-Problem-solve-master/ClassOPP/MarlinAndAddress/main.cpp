#include <iostream>
#include <string>
using  namespace std;
int main()
{ 
   int num1;cin>>num1;
   string arr[] = {"zero", "ten", "twenty", "thirty", "forty","fifty", "sixty", "seventy", "eighty", "ninety","one hundred"};
   if(num1 > 0){
       cout<<"positive ";
   }else if(num1<0){
       cout<<"negative ";
   }
   int test = num1/10, test_1;
   if(test < 0){
        test_1 = test * -1;
      cout << arr[test_1]<< endl;
   
   }else{
       cout << arr[test]<< endl;
   }
    return 0;
}