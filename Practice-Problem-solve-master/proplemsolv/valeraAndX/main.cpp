#include <iostream>
using namespace std;
int main()
{
    int num;cin>>num;
    char valera[num][num];
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            cin >> valera[i][j];
        }
    }
    int B=num,sum=0;
    for(int i=0;i<num;i++){
            if(valera[i][i] == valera[0][0] || valera[i][B--] == valera[0][0]){
               sum++;
            }
    }
    cout<<sum;
    if(sum==num){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}
