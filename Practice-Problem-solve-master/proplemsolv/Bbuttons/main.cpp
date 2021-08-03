#include <iostream>
using namespace std;
int main()
{
    int n ,sum =0;
    cin >> n;
     for(int i=1;i<=n; i++){
         sum += (n - i)*i;
     }
    
    cout << sum + n<<endl;
    return 0; // check this programming    
}