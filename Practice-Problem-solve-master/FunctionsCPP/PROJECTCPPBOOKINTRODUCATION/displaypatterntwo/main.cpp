 /*
 * c++ start progamming print payrimeds pattern
*/


#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{

    int rows , space , cols, starts;
    
    // recevive value number rows 
    cout << "enter your value ";
    cin >> rows;
    
    for(cols = rows; cols >= 1 ; cols-- ){
        
        //for loop to put space 
        for(space = cols; space < rows ; space++){
            cout << " ";
        }
        // for loop to  display start 
        for(starts = 1; starts <= (2 * cols - 1) ; starts++){
            cout << "*";
        }
        cout << endl;
    }
   return 0;
   
}