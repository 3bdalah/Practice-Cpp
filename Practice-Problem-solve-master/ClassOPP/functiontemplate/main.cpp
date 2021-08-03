#include <iostream>
using namespace std;
template<class n>
class num{
public:
    num(n ch){
        cout << " this is not Charcter : " << ch << endl;
    }
};
template<>
class num<char>{
public:
    num(char ch){
    
        cout << " this is charcter  : " << ch << endl;
    }
};

int main()
{
    num<int>num1(3);
    num<double>num2(4.6);
    num<char>num3('ah');
    return 0;
}
