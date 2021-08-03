#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num1{0} , num2{0};
    
    // receive first num 
    cout<<"enter your frist number : ";
    cin>>num1;
    
    // receive last num
    cout<<"enter your last num : ";
    cin>>num2;
    
    // eqaution to calc larger number  
    int larger = max(num1 , num2);
    
    // print nubmer 
    cout<<"the number larger than is : "<< larger << endl;
    
    return 0;
}
