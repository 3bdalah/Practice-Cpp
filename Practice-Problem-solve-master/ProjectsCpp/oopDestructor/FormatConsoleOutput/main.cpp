#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

    double amount = 12618.98;
    double interestRate = 0.0013;
    // eqautino to calc interest 
    double interset = amount * interestRate;
    // equation to clean console 
    double  interest2 = static_cast<char>( interset * 100) / 100.0;
    
    cout <<" interset is one  : "<< interset <<endl;
    cout <<" interset is two  : "<< interest2 <<endl;
    cout <<" interset is three  : "<< fixed << setprecision(2) << interset <<endl; 
    cout << fixed << 232123434.357<<endl;


	return 0;
}
