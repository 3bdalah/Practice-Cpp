#include <iostream>
using namespace std;

int getnumberofdays(int month , int year){
    
    //leap conditaion if month 2 
    if(month == 2 ){
        if((year % 400 == 0 || year % 4 == 0 && year % 100 != 0)){
        
            return 29;
            
        }else{
            
            return 28;
        
        }
    }else if(month == 1 || month == 3 ||
             month == 5 || month == 7 ||
             month == 8 || month == 9 ||
             month == 10 || month == 11 || month == 12){
             return 31;
    }else{
        return 30;
    }
}

// main programming 
int main()
{
 
    int days = 0;
    days = getnumberofdays(2, 2016);
   
    cout << endl <<" number of days " << days << endl;  
  
   // check programming  is Done 
   return 0;
}






