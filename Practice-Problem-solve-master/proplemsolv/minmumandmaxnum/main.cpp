#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    
    long arr[5],num_min=arr[0],num_max =0,sum=0;
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i=0;i<5;i++){cin>>arr[i];}
    for(int j=0;j<5;j++){
        sum+=arr[j];
    }
    sort(arr , arr+n);
    cout <<(sum - arr[4])<<" "<<(sum - arr[0]);
    return 0;
}
