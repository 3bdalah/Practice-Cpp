#include <iostream>
using namespace std;

int main()
{
   int candies{0};
   int Doller{0};
   int after_sell{0};
   int Sum;
   cin >> candies >> Doller >> after_sell ; 
   Sum = after_sell - Doller  ;
   int finsh_result = candies * Sum;
   cout << finsh_result << endl;
   return 0;
}
