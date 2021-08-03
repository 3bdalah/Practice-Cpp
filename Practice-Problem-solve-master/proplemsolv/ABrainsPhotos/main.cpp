#include <iostream>
#include <string>
using namespace std;
int main()
{
   int num1,num2;
   cin >> num1 >> num2;
   string color_1[num1][num2];
   for(int i=0;i<num1;i++){
       for(int k=0;k<num2;k++){
           cin>>color_1[i][k];
       }
    
   }
   for(int i=0;i<num1;i++){
       for(int k=0;k<num2;k++){
             if(color_1[i][k] =="C" ||color_1[i][k] =="Y"||color_1[i][k] =="M"){
                cout<<"#Color";  
                 return 0;             
            }
       }
    
   }
   cout<<"#Black&White";
}