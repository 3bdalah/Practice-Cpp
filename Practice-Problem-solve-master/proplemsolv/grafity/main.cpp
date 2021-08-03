#include <iostream>
#include <algorithm>

int main()
{
    int n;
    cin >> n;
    int arr[n - 1];
    for(int i =0; i < n; i++){
        cin >>arr[i];
    }
    sort(arr,arr+n);
    for(int i = 0;i < n; i++ ){
        cout << arr[i] << " ";
    }
    return 0;
}
