#include <iostream>
using namespace std;
int main()
{
    int Size;
    cout <<"Enter Your Size Here :";
    cin >> Size;
    int Sum = 0;
    int arr[Size];
    for(int i = 0; i < Size; i++){
        cin >> arr[i];
        Sum += arr[i];
    }
    
    cout << " Sum Is Elements IS : "<< Sum << endl;
    return 0;
}
