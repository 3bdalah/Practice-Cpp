#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
 
  long start_time = time(0);   
  for(int i = 0 ; i <= 1000 ; i++ )    
    for( int n = 0 ; n <= 100 ; n++)
      for( int m = 0 ; m <= 10; m++ )
          cout<< " i " << i << " n " << n << " m " << m << endl; 
    
  long End_time = time(0);
  int test_time = End_time - start_time ;
  cout<<" start Time "<< start_time <<endl;
  cout<<" end time  "<< End_time<< endl;
  cout<<" Tack time with loop : "<< test_time <<endl;
   return 0;
   
    
}
