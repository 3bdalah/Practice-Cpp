#include <iostream>
#include <cmath>
using namespace std;

int main()
{  
    double redius{0.0} , leng{0.0};
           
    const double  PI{3.14159265359};
    //Receive Data redaius 
    cout<<"Enter Your Value redius : ";
    cin>>redius;
    
    //Rececive Data Redaius :
    cout<<"Enter Your Value length : ";
    cin>>leng;
    
    // Build Equation Area 
    double area = redius * redius * PI;
    
    // Build Equation Volume 
    double volume = area * leng;     
	
    //Out Result In Console : 
    cout<<"Area Cylinder Is : "<< area <<endl;
    cout<<"Volume Cylinder Is : "<< volume <<endl;
    return 0;
}



















