#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num1 , num2 , result ,chose;
    while(chose != 4){
        
        cout <<" \" Welcome You In My Calculator \" "<< endl;
        cout <<" choose your Prograss to calc "<< endl;
        cout <<" 0 => : summation => ( 0 )"<< endl;
        cout <<" 1 => : multiplication => ( 1 )"<< endl;
        cout <<" 2 => : division  => ( 2 )"<< endl;
        cout <<" 3 => : subtraction  => ( 3 ) "<< endl;
        cout <<" Are You Need Exit This Progress => ( 4 ):"<< endl;
        cout <<" Enter Your Chose :";
        cin >> chose;
    
        if(chose == 0){
            // num1
            cout << "Number One : "<< endl;
            cin >> num1;
            // num2
            cout << "Number Two : "<< endl;
            cin >> num2;
            // print result 
            cout << "your result Is : " << (num1 + num2) << endl;
        }else if(chose == 1){
             // num1
            cout << "Number One : "<< endl;
            cin >> num1;
            // num2
            cout << "Number Two : "<< endl;
            cin >> num2;
            // print result 
            cout << "your result Is : " << (num1 * num2) << endl;
        }else if(chose == 2){
             // num1
            cout << "Number One : "<< endl;
            cin >> num1;
            // num2
            cout << "Number Two : "<< endl;
            cin >> num2;
            // print result 
            cout << "your result Is : " << (num1 / num2) << endl;
        }else if (chose == 3){
                // num1
            cout << "Number One : "<< endl;
            cin >> num1;
            // num2
            cout << "Number Two : "<< endl;
            cin >> num2;
            // print result 
            cout << "your result Is : " << (num1 - num2) << endl;
        }else if(chose == 4){
             break;
        }else{
            
           cout << " Your chose notfound please enter again chose : "<< endl;
        }
    }
    
    
  return 0;    
}












