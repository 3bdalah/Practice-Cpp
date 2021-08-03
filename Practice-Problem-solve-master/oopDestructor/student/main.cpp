#include <iostream>
#include <cstring>
using namespace std;
class Student {
  
    char name[20];
    int ID;
public:
  // print construct
  Student(){
      cout<<" object consturctor " <<endl;
  }
  
  // Print destructerd 
  ~Student(){
      cout<<" object destructerd " << endl;
  }
  // Function Set Name & ID   
  void Set_Name_ID(char n[] , int id ){
     strcpy(name , n);
     ID = id;
  };
  
  // Function Your Phone 
  void print(){
      
      cout << name << "\t" << ID << endl;
  }
};
// function f student 
void F(Student s){
    Student S1;
    S1 = s;
    s.Set_Name_ID("Samy" , 12);
    s.print();
    S1.print();
    
}


int  main(){
    Student stud1 , stud2;
    stud1.Set_Name_ID("abdallah" , 1);
    stud2.Set_Name_ID("ahmed" , 2);
    F(stud1);
    cout<<"back from function "<<endl;
    stud1.print();
}








