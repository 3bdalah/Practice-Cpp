 /*
 * c++ start progamming print payrimeds pattern
*/


#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{

    int rows , space  , starts;
    
    // recevive value number rows 
    cout << "enter your value ";
    cin >> rows;
    
    
    for(int i = 1 ; i <= rows; i++){
            
            
    // loop space 
    for( space = i ; space < rows ; space++ ){
        cout << " ";
    }
    
    // loop content start pyramides patern
    for(starts = 1; starts <= (2 * i - 1 ); starts++){
       cout << "#";        
    }
    
    cout << endl;
    
    }

    cout << endl;
    //check programming Done
    return 0;
}
