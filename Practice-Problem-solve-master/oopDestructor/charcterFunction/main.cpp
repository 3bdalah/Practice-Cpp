#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    char ch;
    
    cout<<" Enter Your char : ";
    cin>>ch;
    
    cout<<" Your Enterd  : "<< ch<<endl;

    // check this lowercase or upparecase
    if( islower(ch)){
        
        // print result 
        cout<<"Is a lowercase letter "<<endl;
        cout<<"its equivalent upperacase letter is "<< static_cast<char>(toupper(ch))<<endl;
        
    }else if(isupper(ch)){
    
        // print result 
        cout<<"is a uppercase letter "<<endl;
        cout<<"it is equivalent lowercase letter is "<< static_cast<char>(tolower(ch))<<endl;
         
    }else if(isdigit(ch)){
    
        // print result 
        cout<<"it is a digit character : "<<endl;
        
    }
    
    // if done programming return zero
    return 0;
}




























