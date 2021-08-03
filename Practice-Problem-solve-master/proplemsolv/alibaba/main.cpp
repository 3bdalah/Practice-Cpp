 /***
 *** SOLVED  
***/
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    
    double a,b,c,d;cin>>a>>b>>c>>d;
    if((a+b-c) == d){
        cout <<" YES";
    }else if((a+b*c) == d){
        cout <<" YES";
    }else if((a-b*c) == d){
        cout <<" YES";
    }else if((a-b+c) == d){
        cout <<" YES";
    }else if((a*b-c) == d){
        cout <<" YES";
    }else if((a*b+c) == d){
        cout <<" YES";
    }else{
    cout<<"NO";
    };
    return 0;
}
