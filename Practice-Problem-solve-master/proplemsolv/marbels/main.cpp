/**
 * 
 * NOT SOLVED 
 *  
 **/


#include <iostream>
using namespace std;
int main(){

    int num1,k,sum=0;cin>>num1;
    k = 2*num1 - 2;
    
    if(num1 != 0&&num1 != 1&& num1>0){
        
    for(int i =0;i<num1;i++){
        for(int j=0;j<k;j++){
            }
        k--;
        for(int j=0;j<=i;j++){
            sum++;
        }
    } 
        cout<< sum << endl;
    }else{
        cout<< -1 << endl;
    
    }
    return 0;
};