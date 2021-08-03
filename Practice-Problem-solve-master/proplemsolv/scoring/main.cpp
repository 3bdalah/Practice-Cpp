#include <iostream>
using namespace std;
int main () {
    int num =0;
    cin>>num;
    int sum=1;
    for(int i=0;i<=num;i++){
        sum += num;
    }
    cout<<sum-1<<endl;
    return 0;
}