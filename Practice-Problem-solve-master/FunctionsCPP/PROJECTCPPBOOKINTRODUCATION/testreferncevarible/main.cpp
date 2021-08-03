#include <iostream>
using namespace std;
int main()
{
    int Count = 1;
    int& r = Count;
    
    cout<<" count is  : "<< Count<<endl;
    cout<<" R is : "<< r <<endl;
    
    r++;
    cout<<" count is  : "<< Count<<endl;
    cout<<" R is : "<< r <<endl;
    
    Count = 10;
    cout<<" count is  : "<< Count<<endl;
    cout<<" R is : "<< r <<endl;
    
    return 0;
}
