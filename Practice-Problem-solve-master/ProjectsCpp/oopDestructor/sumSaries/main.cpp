#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double SUM_TOP{0.0},
           SUM_BOTTOM{0.0},
           TOTAL_SUM{0.0};
    
    for( int num_top = 1; num_top <= 97 ; num_top += 2 ){
       
        cout << "NUM TOP " << (num_top / SUM_BOTTOM ) << endl;
        SUM_BOTTOM = (num_top + 2 );
        
        SUM_TOP += (num_top / SUM_BOTTOM );
        
   }
   
//   for( int num_bottom = 3 ; num_bottom <= 99; num_bottom = num_bottom + 2 ){
//       
//           cout << "NUM BOTTOM " << num_bottom << endl;
//           SUM_BOTTOM += num_bottom;
//   }
   

   cout << " TOTAL SUM : " << SUM_TOP << endl;
    return 0;
    
}
