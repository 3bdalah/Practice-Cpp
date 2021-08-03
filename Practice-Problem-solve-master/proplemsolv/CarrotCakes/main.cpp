#include <iostream>
using namespace std;
int main()
{
    int n,t,k,d;
    cin >> n >> t >> k >> d;
    if((n - 1) / k * t > d)
        cout << "YES";
    else cout << "NO";
}