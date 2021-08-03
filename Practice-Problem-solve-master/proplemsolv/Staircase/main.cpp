#include <iostream>
using namespace std;
int main()
{
    int n = 0;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){                
        for(int j=1;j < n-i;j++){
            cout<<"i";
        }
        for(int j=0;j<i+1;j++){
            cout<<"#";
        }
            cout<<"\n";
    }
    return 0;
}