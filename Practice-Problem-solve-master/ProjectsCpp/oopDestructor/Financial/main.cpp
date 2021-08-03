#include <iostream>
#include <string>
using namespace std;

int main() {
    double subtotal{0.0};
    double gratuityrate{0.0};
    double gratuity{0.0};
    
    // Tell User Enter Subtotal 
    cout<<" Enter your SubTotal Here : ";
    
    // Receive Value : 
    cin>>subtotal;
    
    // Tell User Enter Subtotal 
    cout<<" Enter your Gratuity Rate  Here : ";
    
    // Receive Value : 
    cin>>gratuityrate;
    // Equation Calculating 
    gratuity = subtotal * (gratuityrate / 100);
    subtotal = subtotal + gratuity;
    
    // Print Result in console 
    cout<<" Your SubTotal  : "<< subtotal <<" $ "<<endl;
    cout<<" Your Gratuity  Is : "<< gratuity <<" $ "<<endl;
    cout<<" Your Gratuity Rate Is : "<< gratuityrate<<" % "<<endl;
    
	return 0;
}














