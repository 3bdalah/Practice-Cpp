#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
using namespace std;
int main()
{
    // Declartion 
    int chose{0};
    // Equation To Randome Number Part One 
    srand(time(0));
    
    
    // Equation To Randome Number Part Two 
    int guess_num = rand() % 3;
    
    // Tell User Enter Your Guess 
    cout<<" Chose Answer : "<<endl;
    cout<<" Scissor ( 0 ) \n"
        <<" Paper ( 1 ) \n"
        <<" Rock  ( 2 ) \n "
        <<"Enter Chose : ";
    cin>>chose;
    
    // Array content Chose 
    string arr[] = {"Scissor","Paper","Rock"};
    
    // Scissor

    if( arr[guess_num] == "Scissor" && arr[chose] == "Scissor" ){
       
         cout<<" Computer Chose : "<< arr[guess_num] <<endl;
         cout<<" Your Chose : "<< arr[chose] <<endl;
         cout<<" It Is A Draw "<<endl;
         
       // Paper
    }else if( arr[ guess_num ] == "Scissor" && arr[chose] == "Paper" ){
     
         cout<<" Computer Chose : "<< arr[guess_num] <<endl;
         cout<<" Your Chose : "<< arr[chose] <<endl;
         cout<<" Computre Winner  "<<endl;
        
    }else if( arr[ guess_num ] == "Scissor" && arr[chose] == "Rock" ){
       
         cout<<" Computer Chose : "<< arr[guess_num] <<endl;
         cout<<" Your Chose : "<< arr[chose] <<endl;
         cout<<" Your  Winner   "<<endl;
 
    }else if( arr[ guess_num ] == "Paper" && arr[chose] == "Scissor" ){
        
         cout<<" Computer Chose : "<< arr[guess_num] <<endl;
         cout<<" Your Chose : "<< arr[chose] <<endl;
         cout<<" Your  Winner   "<<endl;
        
    }else if( arr[ guess_num ] == "Paper" && arr[chose] == "Paper" ){
        
         cout<<" Computer Chose : "<< arr[guess_num] <<endl;
         cout<<" Your Chose : "<< arr[chose] <<endl;
         cout<<" It Is a Draw  "<<endl;
        
    }else if( arr[ guess_num ] == "Paper" && arr[chose] == "Rock" ){
     
         cout<<" Computer Chose : "<< arr[guess_num] <<endl;
         cout<<" Your Chose : "<< arr[chose] <<endl;
         cout<<" Computer Winner  "<<endl;
    
    }else if(  arr[ guess_num ] == "Rock" && arr[chose] == "Scissor" ){
     
         cout<<" Computer Chose : "<< arr[guess_num] <<endl;
         cout<<" Your Chose : "<< arr[chose] <<endl;
         cout<<" Computer Winner  "<<endl;
   
    }else if( arr[ guess_num ] == "Rock" && arr[chose] == "Paper" ){
        
         cout<<" Computer Chose : "<< arr[guess_num] <<endl;
         cout<<" Your Chose : "<< arr[chose] <<endl;
         cout<<" Your Winner  "<<endl;
   
    }else if( arr[ guess_num ] == "Rock" && arr[chose] == "Rock" ){
        
         cout<<" Computer Chose : "<< arr[guess_num] <<endl;
         cout<<" Your Chose : "<< arr[chose] <<endl;
         cout<<" It Is a Draw  "<<endl;
    }else{
        
        cout<<" Sorry I DoNot Know "<<endl;
        
    }
    
	return 0;
}



























