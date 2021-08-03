#include <iostream>
using namespace std;

// Function Prototype
int max(int num1 , int num2);
double max(double num1 , double num2);
double max(double num1 , double num2 , double num3 ); 

int main()
{
    cout<<" first max int number here between 8 and  10  : ";
    cout<<max(10,8)<<endl;
    
    cout<<" second max double number here between 8.3 and 8.5 : ";
    cout<<max(8.3 , 8.5)<<endl;
    
    cout<<" first max doubel three number between 8.5 and 8.7 and 8.9 : ";
    cout<<max(8.5 , 8.7 , 8.9)<<endl;

    // check programming DONE
    return 0;
    
}


// return the max between int  number value
int max(int num1 , int num2){
    
    if(num1 > num2){
        return num1;
    }else{
        return num2;
    }
    
}

// return the max between double number value 
double max(double num1 , double num2){
    
    if(num1 > num2){
    
        return num1;
        
    }else{
        
        return num2;
    }
}

//  return the max between double three number values
double max(double num1 , double num2 ,double num3){
    return max(max(num1 , num2), num3);
}
















