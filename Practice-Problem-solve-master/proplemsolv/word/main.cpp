#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
int Check(char n[],int  num){
    int count_lower =0 , count_upper = 0;
    for(int i =0; i < num ; i++){
       if(islower(n[i])){count_lower++;}
       else{count_upper++;}
    }   
    if(count_upper > count_lower){
       for(int i =0; i<num;i++){cout << static_cast<char>(toupper(n[i]));}
    }else{for(int i =0; i<num;i++){cout << static_cast<char>(tolower(n[i]));}}
}
int main()
{   string  test; cin >> test;
    int num = test.length();
    char name[num]; strcpy(name, test.c_str());
    Check(name,num);
    return 0;
}
