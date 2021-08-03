#include <iostream>
#include <iomanip>
using namespace std;
// creat class circle
class Circle{
public:
 double radius;
 double area;
     Circle(){
        radius = 0; 
     };
     
     Circle(double r){
         radius = r; 
     };
     // set radius 
     double setradius(double v){
         radius = v;
     }
     // get radius 
     double getradius(){
         return radius;
     }
     // get area 
     double getArea(){
        area = (radius * radius ) + 2;   
        return area;
     }
     
};
// add circle areas 
double sum(Circle mycircle[] ,int Size){

    // initialize sum 
    double Sum  = 0;
    
    // add area  to sum 
    for(int i = 0 ; i < Size ; i++){
        Sum += mycircle[i].getArea();
    }
    
    // return sum 
    return Sum;
};

// print an array of circles and their  total area;
void printcirclearea(Circle mycircle[], int Size){
    cout << setw(35) << left << "Radius : "<< setw(8) << " Area : " << endl; 
    for(int i = 0; i < Size ; i++){
        cout << setw(35) << left << mycircle[i].getradius() << setw(8) << mycircle[i].getArea() << endl;
    }
    cout<<"---------------------------------"<< endl;
   // computing total areas 
   cout << setw(35) << left << " The total area of circles is "<< setw(8) << sum(mycircle , Size) << endl; 
}

int main()
{
  const int Size = 10 ;
  // creat object with  radius ;
  Circle mycir[Size];
  
  for(int i =0; i < Size; i++){
      mycir[i] = mycir[i].setradius(i+1);
  }
  printcirclearea(mycir,Size);
  //  cout <<" area : " << mycir.getArea() << endl;
  return 0;
}
















