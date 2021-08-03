#include <iostream>
#include "STACK.h"
using namespace std;
StackOfIntegers header
int main()
{
StackOfIntegers stack;

for (int i = 0; i < 10; i++)
stack.push(i);
while (!stack.isEmpty())
cout << stack.pop() << " "; 

return 0;
}