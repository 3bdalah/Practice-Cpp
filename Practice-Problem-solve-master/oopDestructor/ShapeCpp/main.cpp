#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // loop one 
    cout<<" ========== LOOP ONE =========="<<endl;
    for(int i = 0; i < 5; i++){
    int j = 0 ; 
    while(j < i)
        {
         cout << j << " ";
         j++; 
        }  
    }
    
    // loop two 
    cout<<" ========== LOOP TWO ========== "<<endl;
    int n = 0;
    while( n < 5 ){
        
    // create loop with for
    for( int o = n ;  o >1 ; o-- ){
      cout<<" o "<< o;
      cout<<"*****"<<endl;
    }   
     n++;   
    }
    
    // loop three
    cout<<" ========== LOOP THREE =========="<<endl;
    int P = 5 ; 
    while( P >= 1){
        int num = 1;
    for(int v = 0; v <= P ; v++)
        {
         cout<< num <<"xxx";
         num *= 2;
        }
     cout<<endl;   
     P--;   
    }
    return 0; // check pogramming Done 
    
}




















