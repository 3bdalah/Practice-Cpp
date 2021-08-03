#include <iostream>
using namespace std;
class student {
// private values 
private:
    int wight;
    int height;
    friend student duplicate(student );
// public values
public:
    void setvalue(int x , int m);
    double area(){
        return (wight * height);
    }
};

// set value 
void student::setvalue(int x , int m){
    wight = x;
    height = m;
}

// frind  
student duplicate(student r){
    student t;
    t.wight = r.wight * 2;
    t.height = r.height * 2;
    return t;    
}

int main()
{
     student r1 , r2;
     r1.setvalue(3 , 5);
     cout << " Area Before : " << r1.area() << endl;
     r2 = duplicate(r1);
     cout << " Area After : " << r2.area() << endl;
  return 0;    
}









