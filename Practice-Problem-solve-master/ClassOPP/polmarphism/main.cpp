#include <iostream>
#include <string>
using namespace std;

class student_ID{
    private:
         int ID;
    
    public:
    
         void set_ID(int id){
               ID = id;      
         };
         
         void print_ID(){
               cout << " Student ID : " << ID << endl;
         };
    
};

class student_name{
  private:
  string name;

public:
    
    void set_name(string n){
      name = n;      
    };
    
    void print_name(){
        cout << " Student Name : " <<  name << endl;
    };
    
};

int main()
{
    student one;
    one.set_ID(10);
    one.set_name("abdallah"); 
    one.print_info();
    return 0; // check & recive value    
}