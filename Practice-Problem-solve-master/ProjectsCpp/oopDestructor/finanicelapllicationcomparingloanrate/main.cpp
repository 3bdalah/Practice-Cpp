#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    double p;
    int years;
    double arp;
    
    // enter princiable
    cout<<" enter your princible : ";
    cin>>p;
    
    // enter arp 
    cout<<" enter Your ARP : ";
    cin>>arp;
    
    // receive number of years ;
    cout<<" enter your number of years : ";
    cin>>years;
    
    cout.setf(ios::fixed);
    cout.precision(2);
   
    int n = years * 12;
    double r = arp / 12;   

    double payment = p * r /( 1 - pow(1 + r , -n)); //priodic payment 
     cout<<" monthly payment : "<< payment <<endl;
    return 0;
}







