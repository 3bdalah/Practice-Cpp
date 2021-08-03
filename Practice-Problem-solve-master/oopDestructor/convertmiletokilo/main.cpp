#include <iostream>
using namespace std;
int main()
{

   double kilometer , miles;
   const double convert{1.609};
   
   while(true){
       
    cout<<" Enter your value kilogrames : ";
    cin>>miles;

     kilometer = miles * convert;
    cout << " Your value pound is : " << kilometer << endl;
   }
   
   
   return 0; 
}