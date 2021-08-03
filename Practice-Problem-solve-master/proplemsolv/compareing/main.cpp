#include <iostream>
using namespace std;
int main()
{
    int num1,num2,result,num_compare;
    char operat, comp;
    cin>>num1 >> operat >> num2 >> comp >> num_compare;
    if(operat == '+'){
        result = num1+num2;
    }else if(operat == '-'){
        result = num1-num2;
    }else if(operat == '*'){
        result = num1 * num2;
    }
    if(comp == '>'){
        if(result > num_compare){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
    }else if(comp == '<'){
        if(result < num_compare){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
    }else if(comp == '='){
        if(result == num_compare){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
    }
        
    
return 0;    
}







