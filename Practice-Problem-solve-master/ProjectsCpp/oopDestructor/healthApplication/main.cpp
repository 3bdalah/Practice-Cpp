#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double Wpound{0.0},
           inches{0.0},
           feet{0.0};
    
    const double convert = 0.45359237;
    
    // Tell User Enter Value Wight Pounds 
    cout<<" Enter value Wight pounds : ";
    cin>>Wpound;

    // Tell User Enter Value Inches
    cout<<" Enter Value Wight Inches : ";
    cin>>inches;

    // TEll User Enter Value Feet 
    cout<<" Enter Value Feet Here : ";
    cin>>feet;
    
    // Equation Convert feet To Inches
    double meter2 = feet * 0.3048 ;
    double meter1 = inches * 0.0254;
    
    // Equation Convert pounds To kiloGrams
    double kilogram = Wpound * convert ; 
    double BMI = (kilogram) / pow( (meter1 + meter2) , 2 );
    
    // IF BMI less 15 
    if(BMI < 15 ){
    
         cout<<" Very Severely UnderWeight "<<endl;
    
    }else if( BMI > 15 && BMI < 16 ){
        
         cout<<" Severely UnderWeight "<<endl;
    
    }else if( BMI >= 16 && BMI < 18.5 ){
       
         cout<<" UnderWeight "<<endl;
        
    }else if( BMI >= 18.5 && BMI < 25 ){
         
         cout<<" Normal ( Healthy  Weight ) "<<endl;
    
    }else if( BMI >= 25 && BMI < 30 ){
    
         cout<<" OverWeight "<<endl;
     
    }else if( BMI >= 30 && BMI < 35 ){
        
         cout<<" Moderately Obese "<<endl;
    
    }else if( BMI >= 35 && BMI < 40 ){
       
         cout<<" Severely Obese "<<endl; 
    
    }else if( BMI >= 40 ){
        
         cout<<" Over Severely Obese "<<endl;
    
    }else{
    
         cout<<"I Do Not know "<<endl;

    }
    
    // Check All THings Done  Return Zero 
    return 0;
}






















