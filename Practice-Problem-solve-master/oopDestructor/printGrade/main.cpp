#include <iostream>
using namespace std;

// print grade for the score
void printGrade(double score) {
        
    if(score >= 90.0){
    
    cout<<'A'<<endl;
    
    }else if(score >= 80.0){
        
    cout<<'B'<<endl;
    
    }else if(score >= 70.0){
    
    cout<<'C'<<endl;
    
    }else if(score >= 60.0){
        
    cout<<'D'<<endl;
        
    }else if(score >= 50.0){
       
    cout<<'E'<<endl;
    
    }else cout<<'F'<<endl;
}


int main()
{
    double score;
   
    //receive score
    cout<<"Enter your score : ";
    cin>>score;
    
    // result score grade
    cout<<"the grade is : "<<endl;
    printGrade(score);
    
    // check prog DONE :)
    return 0;
}







