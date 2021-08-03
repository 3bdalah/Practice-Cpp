#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double  pos_num = 0.0, nag_num = 0.0, zero_num = 0.0; 
    int size_arr ;cin>>size_arr; int arr[size_arr];
    for(int i=0;i<size_arr;i++){cin>>arr[i];}
    for(int i=0; i < size_arr;i++){
        if(arr[i]>0)
            pos_num++;
        else if(arr[i] == 0)
            zero_num++;
        else
           nag_num++; 
    }
    cout << fixed << setprecision(6)<< (pos_num / size_arr) << endl;
    cout << fixed << setprecision(6)<< (nag_num / size_arr) << endl;
    cout << fixed << setprecision(6)<< (zero_num / size_arr) << endl; 
    return 0;   
}
