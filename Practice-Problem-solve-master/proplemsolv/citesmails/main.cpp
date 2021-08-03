#include <iostream>
using namespace std;
int main()
{
  int num;cin>>num;
  int arr[num];
  for(int i =0;i<num;i++)cin>>arr[i];
  int mind = abs(arr[1] - arr[0]);
  int maxd = abs(arr[num-1] - arr[0]);
  cout << mind << " " << maxd << endl;
  for(int k =1;k<=num-2;k++){
      mind = min(abs(arr[k] - arr[k-1]), abs(arr[k+1] - arr[k]));
      maxd = max(abs(arr[k] - arr[0]), abs(arr[num-1]-arr[k]));
      cout << mind << " " << maxd << endl;
  }
  mind = abs(arr[num-1] -  arr[num-2]);
  maxd = abs(arr[num-1] -  arr[0]);
  cout << mind << " " << maxd << endl;
  return 0; 
}
