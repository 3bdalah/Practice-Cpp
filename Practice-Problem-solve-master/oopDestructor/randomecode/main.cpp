#include <iostream>
#include <cctype>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    srand(time(0)); // generating number to char
    int random_num = 30 + rand() % 100;
    
    cout<<" your char is : "<< random_num<<endl;
    cout<<" your char "<<static_cast<char>(random_num)<<endl;
	return 0;
}
