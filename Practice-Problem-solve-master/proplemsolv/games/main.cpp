 /**
 *@ SOLVED  
**/
#include <iostream>
#include <string>
using namespace std;
int main()
{
   int n=0;cin>>n;string arr1[n] ;
   int test =0,sum1=0,sum2=0;
   for(int i =0; i< n ;i++) cin >>arr1[i];
   for(int i =0; i< n ;i++){
        if(arr1[0] == arr1[i]){sum1++;}
        else{test = i;sum2++;}
       
    }
    if(sum1>sum2) cout << arr1[0];
    else cout<<arr1[test];
    return 0;
}