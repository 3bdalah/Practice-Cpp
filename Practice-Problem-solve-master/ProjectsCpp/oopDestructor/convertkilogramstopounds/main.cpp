#include <iostream>
using namespace std;
int main()
{

   double kilo , pound;
   const double convert{2.2};
   
   while(true){
       
    cout<<" Enter your value kilogrames : ";
    cin>>kilo;

    pound = kilo * convert;
    cout << " Your value pound is : " << pound << endl;
   }
   
   
   return 0; 
}