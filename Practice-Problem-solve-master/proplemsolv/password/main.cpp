#include <iostream>
#include<cstring>
#include<algorithm>
using namespace std;
char c[1000];
int main()
{
	int n, m1 = 0, m2 = 0, m3 = 0,m;
	cin >> c;
	n = strlen(c);
	for (int i = 0; i < n; i++)
	{
		if (c[i] == '1')m1++;
		else if (c[i] == '2')m2++;
		else if (c[i] == '3')m3++;
	}
	m = m1 + m2 + m3;
	for (int i = 0; i <m-1; i++)
	{
		if (m1 > 0) { cout << 1 << "+"; m1--; }
		else if (m2 > 0) { cout << 2 << "+"; m2--; }
		else if (m3 > 0) { cout << 3 << "+"; m3--; }
	}
	if (m1 > 0) cout << 1;
	else if (m2 > 0) cout << 2;
	else if (m3 > 0) cout << 3;
}