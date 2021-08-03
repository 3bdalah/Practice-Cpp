#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    int test{0};
    
    // Loop Check To Give My Value  
    do{
        
        // EQUATION TO RANDOME 
         test = rand() % 999;
         
        // CHECK RESULT IF EQUAL 
        if( test >= 0 && test <= 999 ){
           cout<<" Test : "<< test <<endl;
        }
         
    }while( test >= 0 && test <= 999 );
        
}


















