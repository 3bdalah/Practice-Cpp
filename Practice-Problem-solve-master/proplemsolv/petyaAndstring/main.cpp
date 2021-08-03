#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{ 
    string arr1 , arr2;cin >> arr1;cin >> arr2;
    for(int i =0; i < arr1.length(); i++){
        arr1[i] = tolower(arr1[i]);
    };
    for(int i =0; i < arr1.length(); i++){
        arr2[i] = tolower(arr2[i]);
    };
    int sum1 = arr1.compare(arr2);
    if(sum1 == 0){
        cout << 0;
    }else if(sum1 > 0){
        cout << 1;
    }else{
        cout << -1;
    }   
    return 0;
}
