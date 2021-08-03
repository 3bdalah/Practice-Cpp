#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int arr[3];
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
   for(int i=0;i<3;i++){
        cout<<arr[i] << " ";
    }
}

