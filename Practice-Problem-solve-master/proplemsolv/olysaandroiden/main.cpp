#include <iostream>
using namespace std;
int main()
{
	int n, t;
	cin >> n >> t;
	if( n == 1 && t == 10 )
		cout << -1 << endl;
	else if( t == 10 ){
		for( int i = 1; i < n; i++ )
			cout << 1;
		cout << 0 << endl;
	}
	else{
		for( int i = 1; i <= n; i++ )
			cout << t;
		cout << endl;
	}
	return 0;
}