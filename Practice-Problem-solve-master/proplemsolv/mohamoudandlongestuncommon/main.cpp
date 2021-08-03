 /**
 ** SOLVED  
**/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string word1,word2;
    cin>>word1>>word2;
    if(word1 == word2){
        cout<<"-1";
    }else if(word1.length() > word2.length()){
        cout<< word1.length();
    }else{
        cout<<word2.length();
    }
    return 0;// check programming
}
