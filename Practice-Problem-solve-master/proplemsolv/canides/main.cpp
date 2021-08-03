 /***
 ***  NOT SOLVED  
***/
#include <iostream>
using namespace std;

int main()
{
  int num,p=0;
  cin>>num;
  while(true){
      num = num - p;
      if(p>num || num == 0){
         break;
      }
      p++;
      
  }
  cout<<p<<endl;
    return 0;
}
