#include <iostream> 
#include <algorithm> 
#include <iomanip>
using namespace std;   
int main() 
{
    int num1 , sum = 0;cin>>num1;
    int arr[num1];
    for(int i=0; i<num1;i++)cin>>arr[i];
    int n = sizeof(arr)/sizeof(arr[0]); 
    sort(arr,arr+n);
    for(int i=1;i<n;i++){
        if(arr[i]>arr[0] && arr[i]<arr[n-1]){
            sum++;
        }
    }
    cout<< sum;
    return 0;
}
