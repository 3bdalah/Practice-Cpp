#include <iostream>
#include <string>
using namespace std;
int main()
{
    string city1 , city2;
    
    cout << " enter Name city one : ";
    getline(cin , city1 ); // read string 
    
    cout << " enter  name city  two : ";
    getline(cin , city2);
   
    cout<<"The cities in alphabetical order are ";
   
    if (city1 < city2) {
        
        cout << city1 << " " << city2 << endl; 
        
    }else{
        
        cout <<  city2 << " " << city1 << endl;
        
    }

    return 0;
    
    
}
