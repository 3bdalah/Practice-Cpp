#include <iostream>
#include <string>
#include <vector>
using namespace std;
class player {
public: 
  string name;
  int age;
  float GBA{};
  int phone{};
   
  void text(string info){cout<<" hello say "<<name<< info <<endl;};
  float func(float nume);  
};
class account{
public:

    string user_nack{};
    float number;
    int numb_xp;
    
};
int main(){
    player frank;
    frank.name = "Abdallah";
    frank.age = 19;
//    frank.text("hello  best wishes");
    
    
    
    player Ahmed;
    Ahmed.age = 10;
  
//    Ahmed.func(0.232);
  //  Ahmed.text("welcome ther");   
    
    
    
    
}