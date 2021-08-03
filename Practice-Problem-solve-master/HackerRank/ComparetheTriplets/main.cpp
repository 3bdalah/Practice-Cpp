#include <iostream>
using namespace std;

int main()
{
   int arr_1[3],arr_2[3];
   int Count_A = 0,
       Count_B = 0;
   
   for(int i = 0; i < 3 ; i++){
      cin >> arr_1[i];
   }
   cout << "arr b" << endl;
   for(int j = 0 ; j < 3; j++)
   {
       cin >> arr_2[j];
    
   }
    for(int i = 0;  i < 3; i++ ){
        if(arr_1[i] > arr_2[i]){
            Count_A++;   
        }else if(arr_1[i] < arr_2[i]){
            Count_B++;
        }
    }
    cout << Count_A << endl;
    cout << Count_B << endl;
   return 0;
 
}






