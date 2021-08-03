#include <iostream>
#include <string>
using namespace std;

int main()
{
     double pound{0.00};
     double kilo{0.00};
     string input{"none"};
     
          //Tell User What You need To Convert 
          cout<<"=====  What You Convert Feet or Meter "<<endl;
          cout<<"=====  IF You Need Convert pound To kilograms Chose ' p ' "<<endl;
          cout<<"=====  IF You Need Convert kilograms To pound Chose ' k ' "<<endl; 
    
          //receive value from user 
          cin>>input;     
     
     
     if( input == "P" || input == "p"){
         
          //Tell User Enter Value 
          cout<<" Enter Your Value Pound Here : ";
          cin>>pound;
         
          // Equation Convert 
          kilo = pound * 0.454;
         
          //out result
          cout<<" Value With By Pound Is : "<< pound <<"\n Value With By kilograms : "<< kilo <<endl;
     }else if( input == "K" || input == "k"){
          
          //Tell User Enter Value 
          cout<<" Enter Your Value kilo Here : ";
          cin>>kilo;
         
          // Equation Convert 
          pound = kilo / 0.454;
         
          //out result
          cout<<" Value With By kilograms Is : "<< kilo <<"\n Value With By Pound Is : "<< pound<<endl;
     }else{
          
         cout<<"unknowen Value ";
     }
     return 0;
}










