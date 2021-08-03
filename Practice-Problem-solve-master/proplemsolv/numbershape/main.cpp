#include <iostream>
using namespace std;
int main()
{
    int num;cin>>num;
    int sum1=0,sum2=0,test=0;
    string arr[num];
    for(int i=0;i<num;i++){
       cin>> arr[i];
    }
    for(int p=0;p<num;p++){
           if(arr[0] == arr[p]){
                sum1++;
            }else{
                
                sum2++;
            }
    }
    cout << "Sum 1 : " << sum1 << endl;
    cout << "SUM 2 : " << sum2 << endl;
    return 0;
}