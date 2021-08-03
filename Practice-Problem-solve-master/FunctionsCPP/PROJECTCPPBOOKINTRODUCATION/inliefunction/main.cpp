#include <iostream>
using namespace std;

inline void F(int month ,int year)
{
   cout << "month is : " << month << endl;
   cout << "year is : " << year << endl; 
}


int main()
{
    // declaration 
    int month = 10 ,  year = 2019;
     
    F( month , year );
    F(3 , 2010 );
    
    // check done programming     
    return 0 ;
}
