#include <iostream>
#include <string>
using namespace std;

void numPrint(string m , int num){
    
    for( int i = 1 ; i  <= num ; i++){
     cout<< i << " ===>> "<< m <<endl;    
    }

}



int main()
{
    int numloop{0};
    cout<<"enter your number to loops : ";
    cin>>numloop;
    numPrint("hello",numloop);
    return 0;
    
}
