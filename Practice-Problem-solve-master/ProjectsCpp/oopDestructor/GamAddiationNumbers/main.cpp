#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    //Decleration Varibles
    int answer1{0},
        answer2{0};
    // Equation Randome Part One 
    srand(time(0));
    int test_randome1 = rand() % 100;
    int test_randome2 = rand() % 100;
    int randome_child1 = test_randome1 % 10 ;
    int randome_child2 = test_randome2 % 10 ;
 
    // Equation Question
    int quize1 = test_randome1 * randome_child1 - test_randome2 / randome_child2 ;
    int quize2 = test_randome2 + randome_child2 * test_randome1 * test_randome2 - 4 ;
     
    // Print Quize One To User   
    cout<<" Quize One Equal  : \n "
        << test_randome1 <<" * "
        <<randome_child1 <<" - "
        <<test_randome2  << " / "
        << randome_child2 <<endl;
    // Receive Answer    
    cout<<" Enter Your Answer Quize One : ";    
    cin>>answer1;   
 
    // Print Quize Two To User       
    cout<<" Quize Two Equal  : \n "
        << test_randome2  <<" + "
        << randome_child2 <<" * "
        << test_randome1  <<" * "
        << test_randome2  <<" - "
        << 4 <<endl;
    // Receive Answer
    cout<<" Enter Your Answer Quize Two : ";    
    cin>>answer2;    
    
    // Check Answer value 
    if( quize1 == answer1 && quize2 == answer2 ){
    
        cout<<" Your Two Answer Correct \nYour Winner "<<endl;
        
    }else if(quize1 == answer1 || quize2 == answer2){
      
        cout<<" Your one Answer Is Acorrect : "<<endl;
        
    }else{
        
        cout<<" Sorry Are You Failed Good luck "<<endl;
    }
    
    
    return 0;
}
