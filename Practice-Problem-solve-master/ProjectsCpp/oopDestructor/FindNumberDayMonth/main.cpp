#include <iostream>
using namespace std;

int main()
{
    int year{0},
        month{0};
    
    // Tell User Enter Your Value Years
    cout<<" Enter Value Years : ";
    cin>>year;

    // Tell User Enter Your Value Month
    cout<<" Enter Value Month : ";
    cin>>month;

    switch(month){
        
        // month Equal Zero January 
        case 1 : 
        cout<<" Month   January \n "<<"Years  : "<< year <<endl;
        break;
        // Month Equal One February
        case 2 : 
        cout<<" Month   February \n "<<"Years  : "<< year <<endl;
        break;
        // Month Equal Two  March
        case 3 :
        cout<<" Month    March \n "<<"Years : "<< year <<endl;
        break;
        // Month Equal Third April 
        case 4 :
        cout<<" Month    April \n "<<"Years : "<< year <<endl;
        break;
        // Month Equal Fourd May 
        case 5 :
        cout<<" Month    May \n "<<"Years : "<< year <<endl;
        break;
        // Month Equal Fifth 
        case 6 : 
        cout<<" Month    June \n "<<"Years : "<< year <<endl;
        break;
        // Month Equal Six 
        case 7 :
        cout<<" Month    July \n "<<"Years : "<< year <<endl;
        break;
        // Month Equal Seven
        case 8 :
        cout<<" Month    August \n "<<"Years : "<< year <<endl;
        break;
        // Month Equal Eight 
        case 9 :
        cout<<" Month    September \n "<<"Years : "<< year <<endl;
        break;
        // Month Equal Nine 
        case 10 :
        cout<<" Month    October \n "<<"Years : "<< year <<endl;
        break;
        // Month Equal Ten
        case 11 :
        cout<<" Month    Novamber \n "<<"Years : "<< year <<endl;
        break; 
        // Month Equal Eleven
        case 12 :
        cout<<" Month     December \n "<<"Years : "<< year <<endl;
        break;
        // Default Answer 
        default:
        cout<<" Sorry That not Correct Answer :) ";
    } 
    return 0;
}


















