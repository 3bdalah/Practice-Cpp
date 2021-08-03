#include <iostream>
using namespace std;
int main()
{
     int Row;
     cin >> Row;
    
    int arr[Row][3];
    int SUM_1 = 0;
    int SUM_2 = 0;
    int Total = 0;
    for(int i = 0; i < Row; i++){
        for(int j =0; j< Row; j++){
            cin >> arr[i][j];      
        }
//        cout << endl;
    }
   
     SUM_1 += arr[0][0];
     SUM_1 += arr[1][1];
     SUM_1 += arr[2][2];
     
     SUM_2 += arr[0][2];
     SUM_2 += arr[1][1];
     SUM_2 += arr[2][0];
     Total = SUM_1 - SUM_2 ;
     cout << Total << endl;
     return 0;
}
