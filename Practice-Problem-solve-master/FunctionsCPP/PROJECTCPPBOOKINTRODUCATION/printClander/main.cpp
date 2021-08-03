#include <iostream>
#include <iomanip>
using namespace std;

// functiona prototypes 
void printMonth(int year , int month);
void printMonthTitle(int year, int month);
void printMonthName(int month);
void printmonthbody(int year , int month);

// funtion int   
int getStartDay(int year , int month);
int gettotalnumberofdays(int year , int month);
int getnumberofdaysofmonth(int year, int month);

// bool function 
bool isleapyear(int year);

int main(){
    
    // prompt the user enter value year 
    cout<<"Enter value year  here  please : ";
    int year{0};
    cin>> year;
    
    // prompt the user enter value month
    cout<<"enter value month here please : ";
    int month{0};
    cin>> month;


    // print clander for month of the year 
    printMonth(year , month);

    cout<<endl;
    // check progamming Done 
    return 0;
    
}

// print calender for a month in a year
void printMonth( int year , int month){
 
    // print the heading of the calender 
    printMonthTitle(year , month);
    
    
    // print the body of the calender 
    printmonthbody(year , month);    
    
} 

// print the month title e.g May , 1999;
void printMonthTitle(int year , int month){
    
    printMonthName(month);
     
     cout << " " << year << endl;
     cout << "-------------------------"<<endl;
     cout << " Sun Mon Tue Wed Thu Fri Sat " <<endl; 
}

// get the english name for the month 
void printMonthName(int month){
    switch( month ){
        
        case 1:
        cout<<" january ";
        break;
        
        case 2:
        cout<<" february ";
        break;
        
        case 3: 
        cout<<" march ";
        break;
        
        case 4:
        cout<<" april ";
        break;
        
        case 5:
        cout<<" May ";
        break;
        
        case 6:
        cout<<" June ";
        break;
        
        case 7:
        cout << " July ";
        break;

        case 8:
        cout<<" August ";
        break;

        case 9:
        cout<<" September ";
        break;
        
        case 10:
        cout<<" october ";
        break;
        
        case 11:
        cout << " november ";
        break;
        
        case 12:
        cout<<" December ";
        break;
    }
}

// print month body 
void printmonthbody( int year , int month ){
    
   //get start of day first week for the first date in the month
   int startDay = getStartDay( year , month );
   int numberofdayinmonth = getnumberofdaysofmonth( year , month ); 

   // pad space before the first day of month 
   int i = 0 ;
   for( i = 0 ; i < startDay ; i++){
    cout<< "    " ;        
   }
   for(i  = 1 ; i <= numberofdayinmonth ; i++)
    {
     cout << setw(4) << i ; 
     if((startDay + i ) % 7 == 0)
         cout << endl;
    }
}

// Get the start day of the first day in month 
int getStartDay(int year , int month ){
    
     // get total number of daye s 1800 
     int startDay1800 = 3;
     int totalnumberofdays =  gettotalnumberofdays( year , month );
     
     // retru the start day 
     return (totalnumberofdays + startDay1800 ) % 7;
}

// get the total  number of dayes  since january 1 , 1800;
int gettotalnumberofdays(int year , int month ){
    int total = 0; 
   
    // get the total days  from 1800 to year  -1 ; 
    for( int i =1800 ; i < year ; i++ ){
        if(isleapyear(i)){
           total = total + 366; 
        }else{
            total = total + 365;
        }
    }
    
    // add days from jan to the  month  prior to the  calender month 
    for(int i = 0 ; i < month ; i++){
      
      total = total + getnumberofdaysofmonth(year , i);
      
      return total;
    }
} 




// get the number days of the month
int getnumberofdaysofmonth(int year , int month){
    
    if(month == 1 || month == 3 || month == 5 || month == 7 ||month == 8 || month == 10 || month == 12 ){
        
        return 31;
        
    }else if(month == 4 || month == 6 || month == 11){
        
        return 30;
    
    }else if(month == 2){
        
        return isleapyear(year) ? 29 : 28;
        
    }
   
  return 0; // if month is correct Done 
}

// determine if it is  aleap year 
bool isleapyear(int year){

    return year % 400 == 0 || (year % 4 == 0 &&  year % 100 != 0);
}














