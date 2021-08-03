#include <iostream>
using namespace std;
template<class num1 , class num2>
num1 sum(num1 s , num2 o){
    return (s + o);
};

int main(){
   
   int s = 0;
   double o = 0;
   
   cin >> s >> o;
   cout << " Sum Two Number : " << sum<double , int>(o ,s) << endl;
   return 0;
}
