#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    double pay{0.0};
    cout<<"Enter Your Payment  Here : ";
    cin>>pay;
 
   if(pay >= 90){
 
        double incres = pay * 0.05;
            double increas_pay = incres + pay;
        cout<<" Payment After Increase : "<<increas_pay<<endl;
 
    }else{
        cout<<"Your Pay Is : "<<pay<<endl;
    }
    return 0;
}
