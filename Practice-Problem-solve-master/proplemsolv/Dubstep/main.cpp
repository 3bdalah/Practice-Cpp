#include <iostream>
#include <string>
using namespace std; 
int main() {
	string s, str;
	cin >> s;
	for(unsigned int i=0; i < s.length(); i++) {
		if(s[i] == 'W' && s[i+1] == 'U' && s[i+2]=='B'){
			if(i != 0 && str.length() != 0 && str[str.length()-1] != ' ')
				str += ' ';
			i+= 2;
			continue;
		}
		str += s[i];
	}
	cout << str;
	return 0;
}
