#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream output;
    output.open("number.txt");

    output << 75 << " " << 75 << " " <<  75 << " " << 8584 << endl;

    output.close();

    cout<< "Done" <<endl;    

    return 0;
}
