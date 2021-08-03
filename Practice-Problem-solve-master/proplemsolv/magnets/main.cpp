#include <iostream>
using namespace std;
int main()
{
   int n, count_1 = 0;cin >> n; 
   int arr[n+1];
   for(int i = 0 ; i < n ; i++){ cin >> arr[i];}
   for(int i=0;i<n;i++){if(arr[i] != arr[i+1] ){count_1++;}}
   cout << count_1 << endl;
   return 0 ;
}





































