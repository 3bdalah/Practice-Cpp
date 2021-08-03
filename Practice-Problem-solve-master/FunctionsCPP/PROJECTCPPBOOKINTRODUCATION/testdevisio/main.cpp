#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
   // get the vectore 
   vector<int> a = {1 , 45 , 54 , 71 , 76 , 12 };
   
   // print the vectore 
   for(long unsigned int i = 0 ; i < a.size() ; i++){
       cout << a[i] << " ";
   }
   cout << endl;
   
   // reverse the vectore     
   reverse( a.begin() , a.end());
   
   // print the reveser vectore 
   cout << "reverse Vector : ";
   
   for(long unsigned int i = 0 ; i  < a.size() ; i++ ){
       cout << a[i] << " ";
   }
   cout << endl;
   return 0;
   
}
