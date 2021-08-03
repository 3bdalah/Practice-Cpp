#include <iostream>
using namespace std;

int main()
{
    double weight{0.0};
    
    // Tell User Enter The Weight Pakage 
    cout<<" Enter The Weight Pakage : "<<endl;
    cin>>weight;

    if( weight > 0 && weight <= 1 ){
        
       cout<<" Cost Is : "<< 3.5 << endl;     
 
    }else if( weight > 1 && weight <= 3 ){
        
       cout<<" Cost Is : "<< 5.5 << endl;
        
    }else if( weight > 3 && weight <= 10 ){
        
       cost<<" Cost Is : "<< 8.5 << endl;
        
    }else if(weight > 10 && weight <= 20 ){
        
       cost<<" Cost IS : "<< 10.5 << endl;
        
    }else{
        
       cout<<"The Pakage Cannot Be Shipped "<<endl;
    
    }
    return 0;
}












