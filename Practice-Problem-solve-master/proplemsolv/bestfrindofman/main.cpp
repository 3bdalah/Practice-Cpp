#include <iostream>
using namespace std;

int main()
{
   int num_day,num_track,num=0;    
   cin>>num_day>>num_track; 
   int arr[num_day];
   for(int i = 0; i<num_day;i++){
       cin>>arr[i];
   }
   
   while(true){
       int i=0;
    if((arr[i]+arr[i+1]) < num_track){
       if(arr[i]>arr[i+1]){
          arr[i+1] = (arr[i] + arr[i+1]) - num_track;   
       }else{
          arr[i] = (arr[i] + arr[i+1]) - num_track;
       }
    }
   }
}
