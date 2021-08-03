#include <iostream>
using namespace std;
int main()
{
    
    double total{10000} ; 
    int years{0} ;
    const double  incres{1.07}; 
    
    //loop to calc  
    while(total <= 20000){
        
        total = total * incres;
         years++;   
        
        if(total > 20000){
            
        }
        cout<<" taolt "<< total<<endl;
    }
    
    cout<<" total equal "<< total <<" and Years " << years <<endl;
    return 0;
    
}
