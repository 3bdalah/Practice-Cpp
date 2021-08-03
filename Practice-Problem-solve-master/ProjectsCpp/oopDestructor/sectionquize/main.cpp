#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double fahrenheit{0.0},
            celsius{0.0};
	//rececive Data from user 
    cout<<"Enter User Data celsius : ";
    cin>>celsius;
    
    //Convert Celsius To Fahrenheit
    fahrenheit = ( 9.0 / 5 ) * celsius + 32;
  
    //OutPut Result 
    cout<<" Celsius is     : "<<celsius <<endl;
    cout<<" Fahrenheit is  : "<<fahrenheit <<endl;
      
	return 0;
}
