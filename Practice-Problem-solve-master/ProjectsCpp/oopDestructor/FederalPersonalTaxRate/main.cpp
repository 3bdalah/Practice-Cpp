#include <iostream>
using namespace std;

int main()
{
   int statue{0};
   double income{0.0};
   double tax{0.0};
   // Tell User Enter Your Chose Statues
   cout<<" ====== CHOSE YOUR STAUTES ======"<<endl;
   cout<<" Single filer : '0' "<<endl;
   cout<<" Married jointly OR qualifying widow(er)  : '1'"<<endl;
   cout<<" Married separately : '2'"<<endl;
   cout<<" Enter the filing status : "<<endl;
   
   // Recevie Value Statues Uaser 
   cin>>statue;
   
   //Tell User Enter Your Income Value  :
   cout<<"Enter Your The Taxable Income value : "<<endl;
   cin>>income;
   
    //Check Statue IF Equal Zero  
   if( statue == 0 ){
    
     //  lessThan 8350   
    if( income <= 8350  ){
      
      tax = income * 0.10;       
     //  lessThan 33950    
    }else if( income <= 33950 ){
     
      tax = 8350 * 0.10 + ( income - 8350 ) * 0.15  ;
     //  lessThan 82250   
    }else if(income <= 82250){
        
      tax = 8350 * 0.10 + ( 33950 - 8350 ) * 0.15 + ( income - 33950 ) * 0.25; 
     //  lessThan 171550   
    }else if(income <= 171550){
    
      tax =  8350 * 0.10 + ( 33950 - 8350 ) * 0.15 + ( 82250 - 33950 ) * 0.25 + (income -  82250) * 0.28;
     // lessThan 372950
    }else if(income <= 372950){
        
      tax =  8350 * 0.10 + ( 33950 - 8350 ) * 0.15 + ( 82250 - 33950 ) * 0.25 + ( 171550 - 82250 ) * 0.28 + ( income - 171550 ) * 0.33;
     // lessthan 372950 
    }else {
      
//      tax =  8350 * 0.10 + ( 33950 - 8350 ) * 0.15 + ( 82250 - 33950 ) * 0.25 + ( 171550 - 82250 ) * 0.28 + ( 372950 - 171550 ) * 0.33 + ( income - 372950 ) * 0.35;
        tax =  8350 * 0.10 + ( 33950 - 8350 ) * 0.15 + ( 82250 - 33950 ) * 0.25 + ( 171550 - 82250 ) * 0.28 + ( 372950 - 171550 ) * 0.33 + ( income - 372950 ) * 0.35;
    }
    //******
    //Check Statue IF Equal one  
    //******
    }else if( statue == 1 ){
     //  lessThan 8350   
    if( income <= 16700  ){
      
      tax = income * 0.10;       
     //  lessThan 33950    
    }else if( income <= 67900 ){
     
      tax = 16700 * 0.10 + ( income - 67900 ) * 0.15  ;
     //  lessThan 82250   
    }else if( income <= 137050 ){
        
      tax = 16700 * 0.10 + ( 67900 - 16700 ) * 0.15 + ( income - 137050 ) * 0.25; 
     //  lessThan 171550   
    }else if( income <= 208850 ){
    
      tax =  16700 * 0.10 + ( 67900 - 16700 ) * 0.15 + ( 137050 - 67900 ) * 0.25 + (income -  208850) * 0.28;
     // lessThan 372950
    }else if( income <= 372950 ){
        
      tax =  16700 * 0.10 + ( 67900 - 16700 ) * 0.15 + ( 137050 - 67900 ) * 0.25 + ( 208850 - 137050 ) * 0.28 + ( income - 372950 ) * 0.33;
     // lessthan 372950 
    }else {
      
      tax =  16700 * 0.10 + ( 67900 - 16700 ) * 0.15 + ( 137050 - 67900 ) * 0.25 + ( 208850 - 137050 ) * 0.28 + ( 372950 - 171550 ) * 0.33 + ( income - 372950 ) * 0.35;
    }   
   }else if(statue == 2 ){
       
     //  lessThan 8350   
    if( income <= 8350  ){
      
      tax = income * 0.10;       
     //  lessThan 33950    
    }else if( income <= 33950 ){
     
      tax = 8350 * 0.10 + ( income - 8350 ) * 0.15  ;
     //  lessThan 82250   
    }else if(income <= 82250){
        
      tax = 8350 * 0.10 + ( 33950 - 8350 ) * 0.15 + ( income - 33950 ) * 0.25; 
     //  lessThan 171550   
    }else if(income <= 171550){
    
      tax =  8350 * 0.10 + ( 33950 - 8350 ) * 0.15 + ( 82250 - 33950 ) * 0.25 + (income -  82250) * 0.28;
     // lessThan 372950
    }else if(income <= 372950){
        
      tax =  8350 * 0.10 + ( 33950 - 8350 ) * 0.15 + ( 82250 - 33950 ) * 0.25 + ( 171550 - 82250 ) * 0.28 + ( income - 171550 ) * 0.33;
     // lessthan 372950 
    }else {
      
//      tax =  8350 * 0.10 + ( 33950 - 8350 ) * 0.15 + ( 82250 - 33950 ) * 0.25 + ( 171550 - 82250 ) * 0.28 + ( 372950 - 171550 ) * 0.33 + ( income - 372950 ) * 0.35;
        tax =  8350 * 0.10 + ( 33950 - 8350 ) * 0.15 + ( 82250 - 33950 ) * 0.25 + ( 171550 - 82250 ) * 0.28 + ( 372950 - 171550 ) * 0.33 + ( income - 372950 ) * 0.35;
    }
  }
  cout<<"Tax Equal Is : "<<tax<<endl;
}






































