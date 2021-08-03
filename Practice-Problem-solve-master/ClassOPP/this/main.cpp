#include <iostream>
using namespace std;

// create class person
class person{
private:
   int id;
public:
   // set id  
   void set_id(int id){
       this->id = id;
   }
   // get id
   int get_id() {
       return id;
   }
};
int main()
{
  //create object  one 
  person one;
  // set id
  one.set_id(20);
  // print result  
  cout<<"Id One : "<< one.get_id() << endl;
  return 0;    
}
