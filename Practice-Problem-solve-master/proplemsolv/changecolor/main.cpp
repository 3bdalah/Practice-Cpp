#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    int result,total_question=0;
    int cnt=1,worng=0,correct=0;
    char choise='y';
    
    while(choise != 'n' && choise != 'n'){
        
        system("clear");
        
        srand(time(0));
        
        int num1 = 1 + rand() % 12;
        int num2 = 1 + rand() % 12;
        
        total_question++;
        
        cout<<"TOTAL QUESTION : "<< total_question <<" SCORE : "<<correct<<" WORNG : "<< worng<<endl;
        cout<<"Question number "<< cnt<<endl;
        cout<< num1 << " * " << num2 << " = ";
        
        cin>>result;
        
        if(num1 * num2 == result ){
            correct++;
            cout<<"Correct!"<<endl;
    
        }else{
            worng++;
            cout<<"Worng"<<endl;
        }
        cnt++;
        cout<<"countiuns ? y/n ";
        cin>>choise;
    }
    
    cout<<" NUMBER correct : "<< correct <<endl; 
    cout<<" NUMBER worng : "<<worng<<endl; 
    return 0;    
}



