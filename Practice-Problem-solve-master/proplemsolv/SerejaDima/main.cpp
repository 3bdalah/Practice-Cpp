#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
   int n, sereja = 0, Dima = 0;
    cin >> n;
   int arr[n];
   for(int i = 0;i < n;i++){cin >> arr[i];}
   int number_size = sizeof(arr) / sizeof(arr[0]);
   sort(arr , arr + (number_size-1), greater<int>());
   
   for(int k = 1; k < number_size-1;k++){
    if(k % 2 == 0){
       sereja += arr[k];
    }else{
        Dima += arr[k];
    }
   } 
   
   sereja += arr[n];
   Dima += arr[0];
   cout << sereja << " " << Dima; 
   return 0;
}
