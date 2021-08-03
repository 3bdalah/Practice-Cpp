 /*
 * c++  programming to print hollow start pyramid pattern
*/


#include <iostream>
using namespace std;

int main()
{
 int rows , cols , star , space;   
    
  cout << "Enter number of  rows :";
  cin >> rows;

  for(cols = 1 ; cols < rows ; cols++){
      
      //  for loop space  
      for( space = cols; space < rows; space++ ){
      cout<<" ";
      }
      // for loop print star
      for(star = 1; star <= (2 * rows - 1 ); star++ ){
        if(cols == rows || star == 1 || star == 2 * cols - 1){
              cout << "*";
        }else{
              cout << " ";
        }
      }
      cout <<endl ;
  } 

    return 0 ;
}




