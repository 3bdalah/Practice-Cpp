#include <iostream>
using namespace std;

int main()
{
    int numDay{0};
    int futurDay{0};
    int nextDay{0};
//    int day{0};
 
    // Tell User Enter Number Day  
    cout<<"Enter Your Number In Day ";
    cin>>numDay;

    // Tell User Enter Number Next   
    cout<<"Enter Your Next Number Day ";
    cin>>nextDay;
    
    // Equation To Getting Next Days
    futurDay = numDay + nextDay;
  
    switch( numDay ){
        
        // Case Chose Number Zero 
        case 1 : cout<<" To Day Is Monday "<<endl;
        break;
        // Case Chose Number One 
        case 2 : cout<<" To Day Is tuesday "<<endl;
        break;
        // CAse Chose Number Two 
        case 3 : cout<<" To Day Is Wednesdays "<<endl;
        break;
        // Case Chose Number Third 
        case 4 : cout<<" To Day Is Thurdays "<<endl;
        break;
        // Case Chose Number Fourth
        case 5 : cout<<" To Day Is Fridays "<<endl;
        break;
        // Case Chose number Fifth 
        case 6 : cout<<" To Day Is Saturday "<<endl;
        break;
        // Case Chose Number Six
        case 7 : cout<<" To Day Is Sunday "<<endl;
        break;
        
        default :
        cout<<" Sorry Not Found "<<endl;
    }
    switch( futurDay ){
        
        // Case Chose Number Zero 
        case 1 : cout<<" The Future Day Monday "<<endl;
        break;
        // Case Chose Number One 
        case 2 : cout<<" The Future Day tuesday "<<endl;
        break;
        // CAse Chose Number Two 
        case 3 : cout<<" The Future Day Wednesdays "<<endl;
        break;
        // Case Chose Number Third 
        case 4 : cout<<" The Future Day Thurdays "<<endl;
        break;
        // Case Chose Number Fourth
        case 5 : cout<<" The Future Day Fridays "<<endl;
        break;
        // Case Chose number Fifth 
        case 6 : cout<<" The Future Day Saturday "<<endl;
        break;
        // Case Chose Number Six
        case 7 : cout<<" The Future Day Sunday "<<endl;
        break;
        
        default :
        cout<<" Sorry Not Found "<<endl;
    }
    
     
    
}













