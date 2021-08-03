#include <iostream>
using namespace std;
int main()
{

    
    int n,j=0,w=0,los=0;cin>>n>>j>>w;
    int arr[n],sum2=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>j){
            continue;
        }else{
            los+=arr[i];
            if(los>w){
                ++sum2;
                los=0;
            }
        }
    }
    cout<<sum2<<endl;
}
