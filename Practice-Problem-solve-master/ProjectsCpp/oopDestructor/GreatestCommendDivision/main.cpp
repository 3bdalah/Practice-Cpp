#include <iostream>
using namespace std;

int main()
{

    
    int n1 , n2 , gcd{1} , k{2};
    
    cout<<"enter your first number ";
    cin>>n1;
    
    cout<<" enter your second number ";
    cin>>n2;
    
     while(k <= n1 && k <= n2){
        if(n1 % k == 0 && n2 % k == 0){
         gcd = k;    
        }
         k++;
     }
    
    cout<<"The greatest common divisor for "<< n1 <<" and  "<< n2 <<" is "<< gcd << endl; 
    return 0;
    
}
