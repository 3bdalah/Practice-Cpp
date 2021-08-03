#include <iostream>
#include <string>
using namespace std;

int main()
{
    try{
        int n;
        cin >> n;
        if(n <= 0){
            throw "Less";
        }
        if(n >= 10){
            throw n;   
        }
        cout << (n += 4) << endl;
    }
    
    catch(string  m){
        cout << " This Is Not Number : " << m << endl;
    }
    catch(int num){
        cout << " This Is Number Less Zero  :  " << num << endl;
    }
    return 0;   
}
