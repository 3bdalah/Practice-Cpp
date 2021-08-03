#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int num;
    cout<<" enter your number here : "<<endl;
    cin>>num;
    for(int row = 0 ; row <= num ; row++){
    for(int space = ( num - 1 ); space >= row ; space-- ){
            cout<<" ";
            
     }
    for(int cols = 0 ; cols <= row ; cols++){
            cout<<"*";
    }
    for(int cols = 0 ; cols <= row ; cols++){
        if(cols > 0){
            cout<<"*";
        }
    }
        cout<<endl;
        
    }
    return 0;
}
