#include <iostream>
using namespace std;

// function check number pantagonal 
bool ispantagonal(int n);

int main()
{

   int n{0};

   // rececive value from user : 
   cout << "enter your value number : ";
   cin >> n; 
 
   if(ispantagonal(n)){
       
       cout<< n << "is pantagonal "<<endl;
       
   }else{
       
       cout<< n << " is not pantagonal "<<endl;
       
   } 
   
   return 0;
   
}

bool ispantagonal(int n){
    
    int i = 1 , m;
    
    do{
        
        m = ( 3*i*i - i ) / 2;
        i += 1;
        
    }while( m < n );
    return (m == n);
}