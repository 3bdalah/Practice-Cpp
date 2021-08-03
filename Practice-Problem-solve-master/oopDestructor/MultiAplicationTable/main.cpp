#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

    cout<<"      Multiplication Table \n";
    cout<<"================================"<<endl;
    
    // display the number title 
    cout<<"  | ";
    for(int i = 1 ; i <= 9 ; i++){
      
      cout << setw(3) << i;
    
    }
    cout<<endl;
    
    // display the table body
    // rows
    for(int j = 1 ; j <= 9 ; j++)
    {
        cout<< j <<" | ";
         // colums 
        for(int n = 1; n <= 9 ; n++ )
        {
        
           cout<<setw(3)<< j * n; 
            
        }
        
        cout<<" \n";
    } 
    return 0;
}
