#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    for(int i = 1 ; i <= 5; i++){
        for(int k = 1;  k <=5 ; k++){
            cin >> n;
            if(n == 1){
                cout << abs(i - 3) + abs(k - 3);
                break;
            }        
        }
    }
    return 0;
}
