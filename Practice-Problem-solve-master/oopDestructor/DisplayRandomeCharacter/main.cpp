#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
       // Defination Varibels 
       char startChar,
            endChar,
            randomeChar;

       // Equation To Get Randome Number 
       srand(time(0));
       
       // Tell Enter Start Char 
       cout<<" Enter Your Start Char : ";
       cin>>startChar;
       
       
       // Tell Enter Char 
       cout<<" Enter Your End Char : ";
       cin>>endChar;
       
       // Equation Randome Char 
       randomeChar = static_cast<char>(startChar + rand() %  (endChar - startChar + 1) );
       
       cout<<" The random character between "<< startChar <<" and "<< endChar <<" Is "<< randomeChar <<endl;
       
       return 0;
}




























