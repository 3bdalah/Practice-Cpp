#include <iostream>
#include <bits/stdc++.h>
#include <bitset>
 
using namespace std;
int n;
string A[100];
string s,w,k;
char c;
 
int main()
{
 
    cin >>n;
    for(int i=0;i<n;i++){
 
    cin >> s;
    A[i]=s;
    }
 
    for(int i=0;i<n;i++){
        if (A[i].length()>10){
            s=A[i];
            w=s[s.length()-1];
            k=s[0];
 
            cout <<k<<s.length()-2<<w <<endl;
        }
        else
        cout <<A[i]<<endl;
 
    }
 
    return 0;
}
