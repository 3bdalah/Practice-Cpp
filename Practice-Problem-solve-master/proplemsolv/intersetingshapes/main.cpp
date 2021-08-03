 /***
 *** SOLVED  
***/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{ 
    const double BI=3.14159265;
    double N,R;cin>>N>>R;
    double result = (((R*R) * BI )- N*N);
    cout << fixed << setprecision(6) << result <<endl;
    return 0;
}