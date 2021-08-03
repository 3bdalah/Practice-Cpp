#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double tution{10000.00} ,result;
    cout<<"hello "<<endl;
     
    for(int years = 1 ; years <= 10 ; years++)
    {
        
       result = tution * 0.05;
       tution += result;
        if(years == 4){
               cout<<" tution for years"<< right << setw(10) << tution <<endl;
        }
    }
      cout<<" tution ten years "<< right << setw(10)<< tution <<endl;
    return 0;
}