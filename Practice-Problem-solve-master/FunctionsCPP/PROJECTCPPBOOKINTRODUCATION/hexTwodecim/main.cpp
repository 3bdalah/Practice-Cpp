#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// convert hex number as a string to decimal
int hex2decim(const string& hex);
int hexChartodecimal(char ch);
int main()
{
    // Prompt User Enter Number 
    cout<<"enter ahex number : "<<endl;
    string hex;
    cin >> hex;
    
    cout << "the decimal value for hex number" << hex << " is " << hex2decim(hex) << endl;
    return 0;
}


int hex2decim(const string& hex){
  int decimalvalue = 0;
  
  for(unsigned i = 0 ; i < hex.size() ; i++ ){
     decimalvalue = decimalvalue * 16 + hexChartodecimal(hex[i]);
  }
  
  return decimalvalue;
}

int hexChartodecimal(char ch)
{
   ch = toupper(ch);

   if(ch >= 'A' && ch <= 'F' ){
   
    return 10 + ch - 'A';
   
   }else{
       
    return ch - '0';
   
   }
}








