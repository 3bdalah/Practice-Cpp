#include <iostream>
#include<string>
#include<cmath>
using namespace std;
int ff(string a){
    int n,l=0;
    for(int i = 0; i < a.length(); i++){
        n = 0;
       for(int j = i + 1 ;j < a.length(); j++){
                 if( a[i] == a[j] || abs(a[i]-a[j] )==32)
                    n++;
                    else{continue;}
        }
        if(n > 0)
            l++;
    }
    return l;
}


int main()
{
    string n;
    cin>>n;
    if((n.length()-ff(n))%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else{cout<<"IGNORE HIM!"<<endl;}


    return 0;
}