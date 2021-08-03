#include <iostream>
using namespace std;

// funcation 
void minMax(double a, double b , double& min , double& max){
    
    if(a < b){
    
     min = a;
     max = b;
    
    }else{
           min = b;
           max = a;
    }
}

int main()
{

    double a = 5 , b = 6 , min , max ;    

    minMax(a , b , min , max);
    cout<<" min is" << min <<"and max is "<< max <<endl;
   
    return 0;
    
    
}
