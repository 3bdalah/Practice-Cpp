 /**
 ** SOLVED  
**/

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int num1;cin>>num1;
    int arr[num1],sum=0,sum1=0;
    for(int i=0;i<num1;i++){
     cin >> arr[i];
     sum += arr[i];
    }
    sort(arr,arr+num1);
    int cnt=0;
    for(int i = num1-1;i>=0;i--){
        if(sum1 > sum/2) break;
       cnt++;
       sum1 += arr[i];
    }
    cout<< cnt <<endl;
}