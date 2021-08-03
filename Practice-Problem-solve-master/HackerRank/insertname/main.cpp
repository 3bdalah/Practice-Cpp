#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
   
    vector<int> id = {1,2,3,4,5,6,7};
    int chose ; 
    
    while( chose != 0){
       
       system("clear");
     
       for(int i = 0; i < id.size(); i++){
           cout << " "<< id[i] << " ";
       }
       
       cout << "\n Enter Your Id ";
        
       int n; cin >> n;
      
       id.insert(id.end(),n);   
       
       for(int i = 0; i < id.size(); i++){
           cout << id[i] << " ";
       }
  
       cout << endl;
       cout << " Are You Exit Enter => 0 or Continus Enter  => 1 ";
       cin  >> chose;
    }
    return 0;
}
