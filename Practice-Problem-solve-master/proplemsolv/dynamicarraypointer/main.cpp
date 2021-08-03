// NAME CODE  DYNAMIC ARRAY WITH POINTER 
// AUTHOR ABDALLAH
#include <iostream>
using namespace std;
int main()
{
    int num1;cin>>num1;
    int *p = new int[num1];
    for(int i=0;i<num1;i++) cin>>p[i];
    for(int i=0;i<num1;i++) cout<<p[i] << " ";
    delete p;
    return 0;
}