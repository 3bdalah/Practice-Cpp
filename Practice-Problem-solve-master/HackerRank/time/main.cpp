#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class Time{
public:
  int hour,min;
  bool am;
  Time();
  void print();
  
};

Time::Time(){
    hour = 0;
    min = 0;
    am = true;
}

void Time::print(){
    cout << hour << " : ";
    cout <<setw(2) << setfill('0') << min ;
}

void print(Time t1){
    cout << t1.hour <<" : "<< t1.min;
}

int main()
{
    Time now;

    now.print();
    print(now);
    
    return 0; 
}





