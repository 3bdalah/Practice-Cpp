#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

    int num , Sum{0} , countpositive{0} , countnegative{0};
    
    if( num > 0 || num < 0 ){
        while(num != 0){
        
         // tell user enter value 
        cout<<" Enter an integer the input ends if it is 0 : ";
        cin>>num;   
        
        // check is number positive 
        if(num > 0){

            countpositive++;
        
        }else if(num < 0){
            
            countnegative++;   
        }
        
        // addition numbers  
        Sum += num;
         
       }
       
        if( num == 0){
            
        cout<<" No numbers are entered except "<< num << endl;
        
        }else{
           // print result to user 
           cout << "number positive is " << countpositive << endl;
           cout << "number negative is " << countnegative << endl;
           cout << "Sum is  = " << Sum <<endl;          
        }
         
    }

    return 0;
    
    
}
