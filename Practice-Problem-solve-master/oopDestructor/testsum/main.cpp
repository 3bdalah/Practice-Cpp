#include <iostream>
#include <iomanip>
#include <cctype>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    double sum{0};
    
    // calc Start time 
    long start_time =  time(0);
    for(double i = 0.01 ; i <= 10000.0 ; i = i + 0.01 ){
        sum = sum + i;  
        cout<<" sum "<<sum <<endl;
    }
    
    // calc End time 
    long end_time = time(0);
    
    // calc tack time 
    int  test_Time = end_time - start_time;
    cout<<" Tack Time With processing : "<<test_Time <<endl;
    cout<<" SUM = "<< sum << endl;
    return 0;    
}
