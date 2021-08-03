#include <iostream>
using namespace std;

int main()
{
  double pounds{0.0},
         height{0.0},
         whight_kilograms{0.0},
         height_meter{0.0};  
  const double poundToKilo{0.45359237};
  const double inchToMeter{0.0254};
  
  // Tell User Enter pound 
  cout<<" Enter Your Value pound : ";
  cin>>pounds;
  
  
  // Tell User Enter Height
  cout<<" Enter Your Value Height : ";
  cin>>height;
    
  //Equation To Calc WhightKilo 
  whight_kilograms = pounds * poundToKilo;

  // Equation To Calc Height Meters  
  height_meter = height * inchToMeter; 
  
  // Equation BMI
  double BMI = whight_kilograms / ( height_meter * height_meter );
  
  cout<<" BMI : "<<BMI<<endl;

  if(BMI <= 0 ){
  
    cout<<" THis Is Funny "<<endl;
  
  }else if(BMI < 15 ){
      
      cout<<" UnderWight "<<endl; 
  
  }else if(BMI < 25){
      
      cout<<" Normal Wight "<<endl;
  
  }else if(BMI < 30){
      
      cout<<"OverRight "<<endl;
  
  }else{
      
      cout<<" Obase "<<endl;
  }
  
  return 0; 
}




























