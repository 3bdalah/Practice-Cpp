#include <iostream>
#include <string>
using namespace std;

int main()
{
     double feet{0.00};
     double meter{0.00};
     string input{"none"};
     
     //Tell User What You need To Convert 
     cout<<"=====  What You Convert Feet or Meter "<<endl;
     cout<<"=====  IF You Need Convert Feet To Meter Chose ' F ' "<<endl;
     cout<<"=====  IF You Need Convert Meter To Feet Chose ' m ' "<<endl; 
    
     //receive value from user 
     cin>>input;     
     
     
     if( input == "m" || input == " M"){
         //Tell User Enter Value 
         cout<<"Enter Your Value Meter Here : ";
         cin>>feet;
         
         // Equation Convert 
         meter = feet / 0.305;
         
         //out result
         cout<<" Value With By Meter : "<< meter <<endl;
     }else if( input == "F" || input == "f"){
          //Tell User Enter Value 
         cout<<"Enter Your Value Feet Here : ";
         cin>>meter;
         
         // Equation Convert 
         feet = meter * 0.305;
         
         //out result
         cout<<" Value With By Feet : "<< feet <<endl;
     }else{
         cout<<"unknowen Value ";
     }
     return 0;
}











