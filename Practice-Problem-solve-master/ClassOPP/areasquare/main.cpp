#include <iostream>
using namespace std;
class sqaure{
private:
   int Leng;
   int Disp;
   friend sqaure inhirt(sqaure);
public:

   // set value 
   void setvalue(int l , int d);
   // get length  
   int get_Length () {
       return Leng;
   }
   // get dislay 
   int get_Display () {
       return Disp;
   }
   // calc area 
   int area_square(){
      return ( Leng * Leng); 
   }
   // calc ocean 
   int ocean_square(){
       return (Leng + Disp);
   }
   
};
// set value 
void sqaure::setvalue(int L , int D){
    Leng = L;
    Disp = D;
}
// friend private
sqaure inhirt(sqaure w){
    sqaure m;
    m.Leng = w.Leng * 3;
    m.Disp = w.Disp + 3;
   return m;
}

int main()
{
    sqaure q1 , q2;
    // sqaure one 
    q1.setvalue(3 , 5);
    cout <<" Area Sqaure one Length : " << q1.get_Length()  << endl;
    cout <<" Area Sqaure one Length : " << q1.get_Display()  << endl;
    cout <<" Area Sqaure Before : "<< q1.area_square() << endl;
    // sqaure two 
    q2 = inhirt(q1); 
    cout <<" Area Sqaure one Length : " << q2.get_Length()  << endl;
    cout <<" Area Sqaure one Length : " << q2.get_Display()  << endl;
    cout <<" Area Sqaure Before : "<< q2.area_square() << endl;
    return 0;
}






