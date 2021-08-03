#include <iostream>
using namespace std;
int main()
{
    int n,x,y;
    cin>>n>>x>>y;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=(y-x);
    }
    cout<<sum<<endl;
    return 0;
}