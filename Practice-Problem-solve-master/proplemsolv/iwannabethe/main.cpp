#include <iostream>
using namespace std;
int main()
{
    int level,num1,test = 0;
    cin>>level>>num1;
    int player_1[num1];
    for(int i=0;i<num1;i++) cin>>player_1[i];
    int sum=0, arr1[level+1];
    int num2;cin>>num2;
    int player_2[num2];
    
    for(int i=0;i<num2;i++) cin>>player_2[i];
   
    for(int i=0;i<level;i++){
        if(arr1[i] == test ){
            sum++;
        }
    }
    cout<<sum<<endl;
    
    if(sum==level){
        cout<<"I become the guy.";
    }else{
        cout<<"Oh, my keyboard!";
    }
    
}
