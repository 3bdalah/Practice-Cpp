#include <iostream>
using namespace std;




void recu(int n){
    
    
    if(n > 5) return;
    n++;
    cout<<"Hello"<<endl;
   recu(n); 
} 

int main()
{
   int n ;
   cin>>n;
   recu(n);
//   cout<<sum <<" N : "<<n<<endl;
//    cout<<sum2 <<endl;
  return 0;
}
