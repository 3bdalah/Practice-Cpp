 /***
 *** NOT SOLVED  
***/

#include <iostream>
#include <climits>
#include <cmath>
using namespace std;
int main()
{
    
	double n , k , a; cin>> n >> k >>a;
    // equation 
    double result = (n*k)/a;
    if(result > INT_MAX||result <INT_MIN){
        cout << "long long"<<endl;
    }else if(result <= INT_MAX && result >= INT_MIN){
       cout <<  "int" <<endl;
    }else if(floor(result) != result){
        cout<<"double"<<endl;
    }
    return 0;
 }
