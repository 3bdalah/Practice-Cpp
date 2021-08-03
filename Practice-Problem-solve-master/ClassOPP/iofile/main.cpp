#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int number_st_insert;
    vector<int>ID;
    vector<char>Name;
    vector<double>GBA;
    vector<int>table;
    cout << "how many number student inset them ?   ";
    cin >> number_st_insert;
    int n ;
    double gba;
    char name;
    auto t;
    for(auto t :table){
      
      cout << "enter student name : " << (i +1) << "  =  ";
      cin >> n;
      Name.insert(Name.end(),name);
      
      cout << "enter student number ID  : " << (i +1) << "  =  ";
      cin >> n;
      ID.insert(ID.end(),n);
      
      
      cout << "enter student GBA : " << (i +1) << "  =  ";
      cin >> n;
      GBA.insert(GBA.end(),gba);
    }
    for(int i =0; i < 10; i++){
    cout << (i+ 1)<< "  =>  " << Name.at(i) << " ";
    cout << (i+ 1)<< "  =>  " << ID.at(i) << " ";
    cout << (i+ 1)<< "  =>  " << GBA
    .at(i) << " ";
    }
    return 0;
    }
    
