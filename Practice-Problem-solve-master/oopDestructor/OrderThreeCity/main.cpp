#include <iostream>
#include <string>
using namespace std;
int main()
{

    string city1 , city2 , city3;
    // city first
    cout<<" enter your name first city : ";
    getline( cin , city1);
    //city second
    cout<<" enter your name sceond city : ";
    getline(cin , city2);
    // city three
    cout<<" enter your name third city : ";
    getline(cin ,  city3);
    
    // check 
    cout<<" thev three cities in alphabetical order are : "<< city1 <<" " << city2 << "  " << city3 <<endl;
    
    
}
