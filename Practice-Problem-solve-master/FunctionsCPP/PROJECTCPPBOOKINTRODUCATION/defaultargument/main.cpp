#include <iostream>
using namespace std;

// display area of a cirlces
void printArea(double radius = 1)
{
    double area = radius * radius * 3.14159;
    cout<<"Area is : " << area << endl;       
} 
int main()
{

    printArea();
    printArea(4);
    
    // check progamming DONE 
    return 0;
}