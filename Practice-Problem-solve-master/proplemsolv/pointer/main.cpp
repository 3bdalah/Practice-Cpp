#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int *p; // pointer 
    cout << p <<endl; // print address 
    cout << &p <<endl; // print address 
    cout << *p << endl;
    p = new int; // new location memory 
    cin>>*p; 
    cout << p <<endl; // print address 
    cout << &p <<endl; // print address 
    cout << *p << endl; // print pointer 
    delete  p; // empty location 
    cout << p << endl;  // print address after delete element 
    cout << *p <<endl; // print address 
    return 0;// check programming is done retun zero  
}