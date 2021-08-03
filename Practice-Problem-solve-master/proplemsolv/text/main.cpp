#include <iostream>
#include <set>
using namespace std;
int main()
{
    string sets;
    getline(cin,sets);
    set<char> s1;
 
    for(int i{0};i<sets.length();i++){
        if((int)sets[i]>= 97 && (int)sets[i]<=122){
            s1.insert(sets[i]);
        }
    }
 
    cout<<s1.size();
 
    return 0;
}