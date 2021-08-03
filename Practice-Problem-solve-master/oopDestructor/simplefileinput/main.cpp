#include <iostream>
#include <fstream>
using namespace std;

int main()
{
      
    ifstream input;
    
    // opent and create fiel
    input.open("number.txt");
 
    // defination varibels
    int score1 , score2 , score3;
    
    //read data 
    input >> score1;
    input >> score2;
    input >> score3;
    
    // out put result 
    cout<<" total score : "<< score1 + score2 + score3 <<endl;
    
    //close file 
    input.close();
    
    cout<<" Done "<<endl;
    
    return 0;
}
