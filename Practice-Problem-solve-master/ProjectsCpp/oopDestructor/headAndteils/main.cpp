#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    double guess{0.0};
    
    // Equation To Randome Result   
    srand(time(0));
    
    // Equation Part Two To Randome 
    int n = rand() % 2;
    
    //Tell User Enter Your Guess head or teils & Receive Guess  
    cout<<" Enter Your Guess head Or teils For Example 0 OR 1 ";
    cin>>guess;
    
    if( guess == n ){
    
        cout<<" Randome : "<< n << endl;
        cout<<" Your Guess Is : "<< guess << endl;
        cout<<" Your Awinner Dinner Chicken Dinner "<< endl;
    }else{
        cout<<" Random Is :  "<< n << endl;
        cout<<" Your Guess Is : "<< guess << endl;
        cout<<" Your Loser Best Wishes "<<endl;
    }
    
    return 0;
}
