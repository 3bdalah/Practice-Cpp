#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class account{
private:
    int number_account;
    char first_name[10],last_name[10];
    float total_balance;
public:
    void read_data();
    void show_data();
};
void account::read_data(){
    cout<<"\n Enter Account Number ";
    cin >> number_account;
    cout<<"\n Enter First Name ";
    cin>>first_name;
    cout<<"\n Enter Account Number ";
    cin>>last_name;
    cout<<"\n Enter Account Number ";
    cin>>total_balance;
}
void account::show_data(){
    cout<<"Account Number: "<<number_account<<endl;
    cout<<"First Name: "<<first_name<<endl;
    cout<<"Last Name: "<<last_name<<endl;
    cout<<"Current Balance: Rs.  "<<total_balance<<endl;
    cout<<"-------------------------------"<<endl;

}
int main()
{
    account a;
    int choice;
    cout<<"***Acount Information System***"<<endl;
	while(true)
    {
        cout<<"Select one option below ";
        cout<<"\n\t1-->Add record to file";
        cout<<"\n\t2-->Show record from file";
        cout<<"\n\t6-->Quit";
        cout<<"\nEnter your choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            a.read_data();
            break;
        case 2:
            a.show_data();
            break;
        case 6:
            exit(0);
            break;
        default:
            cout<<"\nEnter corret choice";
            exit(0);
        }
    }
    
    
    
    
}