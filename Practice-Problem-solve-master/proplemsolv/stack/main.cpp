#include <iostream>
#include <string>
using namespace std;
const int MAX_SIZE = 100;
template <class T>
class stack{    
    int top;
    T item[MAX_SIZE];
public:
    stack() : top(-1){};
     /** 
      * IF You need push element 
      * IN stack use  this function
      **/    
    void push(T Element){
       
        if(top >= MAX_SIZE){
           cout<<" Stack Full On Push ";
        }else{
            top++;
            item[top] = Element;
        }
    }
    /**
     * Check This Is Empty Or No 
     **/
    bool isempty(){
        if(top == -1){
            return true;
        }else{
            return false;
        }
    }
    /**
     * if you need pop element
    **/
    void pop(T&element){
        if(isempty()){
             cout << " stack empty on pop " << endl;
        }else{
            element =item[top];
             top--;
        }
    }
    
    /**
     * if you need Get Top element 
    **/
    void pop(T stacTop){
        if(isempty()){
            cout << " Stack Empty On Top Element " << endl;
        }else{
            // Check This Is Code 
            stacTop = item[top];
            cout<< " Element Top : " << stacTop << endl;
        }
    }
    /**
     * print stack 
     **/
     void print(){
         cout << " [ ";
         for(int i = top ;i>=0;i--){
             cout << item[i] << " ";
         }
         cout << "]";
         cout << endl;
     }


};
int main()
{
    stack<int> one;
    int n ,chose = 1;
    
    // TELL USER ABOUT APP
    cout << " THIS IS APP ABOUT STACK ENTER VALEU OR DELETE VALUE OR PRINT ALL VALUE "<<endl;
    cout << " Enter you value "<<endl;
    cout << " IF YOUE WANT TO EXIT ENTER 0 OR WANT TO CONTUINES ENTER 1 "<<endl;
    cout << " GOOD TIME IN APPLICATIONS :) "<<endl;
    // recive value stack 
    while(chose != 0){
        cout<<" ENTER YOUR VALUE ";
        cin>>n;
        one.push(n);
        cout<<" EXIT OR CONTUINS : ";
        cin>>chose;
    }
    one.print();
    
	return 0;
}








