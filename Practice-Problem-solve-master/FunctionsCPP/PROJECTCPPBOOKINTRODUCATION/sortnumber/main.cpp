#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
    
    int a[3] = {};
    
    for(long unsigned int r = 0; r < 3 ; r++){
        cout<<" enter your value here : ";
        cin>>a[r];
    }
    
    sort(a , a + 3);
    
    
    for(int i = 0 ;  i < 3 ; i++){
        cout<< a[i] << " ";
    }
    return 0;
}
