#include <iostream>
using namespace std;

// void
void incerement(int &num){
    num++; 
    cout<<"in inside the function is : "<<endl;
}  

int main()
{
   int x{1};

   cout<<"before  the call , x is "<< x <<endl;
   incerement(x);
   cout<<"after the call , x is "<< x <<endl;  
 
   // check progamming  
   return 0;
}
