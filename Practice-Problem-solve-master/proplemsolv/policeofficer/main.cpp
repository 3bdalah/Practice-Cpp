#include <iostream>
using namespace std;
int main()
{
   int n,crim = 0,fix = 0;cin >> n;
   int arr[n];    
   for(int i =0; i<n;i++){
     cin >> arr[i];   
   };
   for(int i = 0 ; i< n; i++){
       if(arr[i] == arr[i+1] || arr[i] == -1){
           crim++;
       }else if(arr[i+1] > 0 && arr[i+1] == -1){
           fix++;
       }
   }
   cout << " Crime : " << crim << endl;
   cout << " Fixed : " <<fix << endl;
    return 0;
}
