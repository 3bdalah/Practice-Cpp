#include <iostream>

using namespace std;
class Time{
private:
    int H , S, M;  
public:
    void print() const
    {
     cout << " the time is =  " << H << " : " << S << " : " << M << endl;    
    }
   Time(int i , int k ,int  l ) // constructor 
   {
      H = i;
      S = k;
      M = l;
   }
  
};
int main()
{
    const Time noon(12,0,0); // constatn object 
    noon.print();
    return 0;// check prog return value zero 
}
