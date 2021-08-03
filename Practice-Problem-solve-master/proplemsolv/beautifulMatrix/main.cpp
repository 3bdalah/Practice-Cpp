#include<iostream>
#include<cmath>
using namespace std;
 
int main(){
 
int x[6][6] , res;
for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
        cin>>x[i][j];
        if(x[i][j]==1){
            res = abs(i-3)+abs(j-3);
        }
 
    }
}
    cout << res;
    return 0;
}