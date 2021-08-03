#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int b{0}, a{0}, c{0}, result{0};
    cout<<"Welcome User This Is Aritmetic "<<endl;
    cout<<" -b + sqrt( pow( b , 2 ) - 4 * a * c) / 2 * a "<<endl;
 
    // Value B :
    cout<<"Enter Your Value  B : ";
    cin>>b;
    
    //Value A : 
    cout<<"Enter Your Value A : ";
    cin>>a;
        
    // Value C :
    cout<<"Enter Your value C : ";
    cin>>c;

    //Starting Comupting
    result =  -b + sqrt( pow(b , 2) - 4 * a * c ) / 2 * a;
    
    //Out Result Now ;
    cout<<result<<endl;
    return 0;
}



















