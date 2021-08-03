#include <iostream>
using namespace std;
int main()
{
    int year{0};
    cout<<"Enter year : ";
    cin>>year;
    switch( year % 12 ){
    // Case Zero 
    case 0 : cout<<" Monkey "<<endl;
    break;
    // Case One 
    case 1 : cout<<" Rooster "<<endl;
    break;
    // Case Two 
    case 2 : cout<<" Dog "<<endl;
    break;
    // Case third 
    case 3 : cout<<" Pig "<<endl;
    break;
    // Case Four 
    case 4 : cout<<" Rat "<<endl;
    break;
    // Case  Fifth 
    case 5 : cout<<" Ox "<<endl;
    break;
    // Case Six 
    case 6  : cout<<" Tiger "<<endl;
    break;
    // Case Seven 
    case 7  : cout<<" Rabbit "<<endl;
    break;
    // Case Eight 
    case 8  : cout<<" Dragon "<<endl;
    break;
    // Case Nine 
    case 9  : cout<<" Snake "<<endl;
    break; 
    // Case Ten 
    case 10 : cout<<" Hores "<<endl;
    break;
    // Case Eleven 
    case 11 : cout<<" Sheep "<<endl;
    break;
    
    }
    
}










