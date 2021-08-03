 /***
 *** SOLVED  
***/
#include <iostream>
using namespace std;
int main()
{
   int num_test;
   cin >> num_test;
   int sum = num_test - 2000;
    if(((num_test % 4==0) && num_test % 100 != 0)|| num_test % 400 == 0 ){
       cout <<"YES"<<endl;
    }else{
       cout<<"NO"<<endl;
   }
   return 0; 
}
