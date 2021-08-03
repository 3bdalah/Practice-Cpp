#include <iostream>
#include <string>
using namespace std;
bool replacestring(string& s, const string& oldstring, const string& newsubstring);
int main()
{
    // Prompt the user to enter s, oldSubStr, and newSubStr
    cout <<"Enter  Strings . OldSubstring , Newsubstring :";
    string s, oldSubstring , NewSubstring ;
    cin >> s >> oldSubstring >> NewSubstring;
    
    bool isReplaced = replaceString(s,oldSubstring,NewSubstring);
    
    if(isReplaced)
        cout << " Done " << endl;
    else
        cout << " Error! " << endl;
    
    return 0;
}

bool replacestring(string& s,const string& oldSubstring , const string NewSubstring ){
    bool isReplaced = false;
    int currentposition = 0;
    while( currentposition < s.length() ){
        int position = find(oldSubstring , currentposition);
        if(position == string::npos){
            return isReplaced;
        }else{
            s.replace(position, oldSubstring.length() , NewSubstring);
            currentposition =  position + NewSubstring.length();
            isReplaced = true;
        }
    }
    return isReplaced;
} 






