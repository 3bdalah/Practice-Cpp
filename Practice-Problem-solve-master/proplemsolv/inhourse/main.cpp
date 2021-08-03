#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;cin>>s>>t;
    int i=0;
    for(int j=0;j<t.length();j++)
    {
        if(t[j]==s[i])
        {
            i++;
 
        }
 
    }
    cout<<++i<<endl;
    return 0;
}





