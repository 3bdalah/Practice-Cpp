#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    string word;cin >> word;
    int smove = 0 , start = 0;
    int len = word.length();
    for(int i =0; i< len; i++){
        int index = word[i] - 97;
        int walk  = abs(start -index); 
      if(walk < 13){
          smove += walk;
      }else {
          smove += 26 - walk;
      }
      start = index;
    }
    cout << smove;
    return 0;
}
