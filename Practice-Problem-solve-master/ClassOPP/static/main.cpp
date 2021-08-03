#include <iostream>
#include <string>

using namespace std;

class student{
 
    static int count;
   
    int id , first , second , third , total;

public:
     
    static void printCount(){
        cout << " Count : " << count << endl;    
    }
     student(){
      
       id = 0;
       first = second = third = 0;     
       count++;
       cout << " number of students  constructed : " << count << endl; 
    }
}; // end of class ;
int student::count = 0;
int main()
{
    cout << " function Static  ";
    student::printCount();
    
    cout << "\n Construct 2 object \n";
    student s1 , s2;
     
    cout << "\n Construct 3 object \n";
    student s3[3]; 
    
    return 0;
}







