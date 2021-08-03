#include <iostream>
#include <string>

using namespace std;

class counter{
    public:
     string st = "mohamed";  
     int cnt = 0;
    counter(){
        st = "mo";
    };

int value(string st){
     for(int i= 0; i < st[i]; i++)
     cnt++;
    return cnt;
};

};

int main()
{
    counter o1;
    cout << " number : " << o1.value("maha") << endl; 
	return 0;
}
