#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
// sorting function 
void sortingstr(string &str);
int main()
{
   string s1;
   string s2;
   
   // recive value s1;
   cout << " Enter your first string :";
   cin >> s1;
   
   // recive value s2;
   cout << " Enter your second string :";
   cin >> s2;
   
   // sorting string 
   sortingstr(s1);
   sortingstr(s2);
   
   // compare 
   int result = s1.compare(s2);

   // condiation
   if(result == 0){
       cout << "anagram" << endl;
   }else{
       cout << "not anagram" << endl;
   }
   
   return 0;
}
void sortingstr(string &str){
    sort(str.begin(), str.end());
    
}
//