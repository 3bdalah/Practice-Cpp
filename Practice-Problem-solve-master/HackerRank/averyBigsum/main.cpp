#include <iostream>
using namespace std;
int main()
{
   long  int Size;
    cin >> Size;
    long int arr[Size];
    long int Sum = 0;
    for(int i =0; i < Size; i++){
        cin >> arr[i];
        Sum += arr[i];
    }
    
    cout << Sum << endl;
    return 0;
}
