#include <bits/stdc++.h>
#include <algorithm> 
#include <iostream>
using namespace std;

int main()
{
//    int num1{0},
//        num2{0},
//        num3{0};
    int arr[] = {1,3,5,6};
    
    //Equation test 
    int n = sizeof(arr) / sizeof(arr[0]);
//    cout<<sizeof(arr)<<endl;
//    cout<<sizeof(arr[0])<<endl;
//    cout<< n <<endl;
    sort(arr , arr + n , greater<int>() );
    cout<<" Sort Array : " <<endl;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
        cout<<"\n"<<arr[i]<<endl;
    }
	return 0;
}
