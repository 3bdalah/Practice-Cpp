#include <bits/stdc++.h>
using namespace std;
const int N=1e3+20;
int n,a[N],b[N],u;
int main(){
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>a[i]>>b[i];
		if (a[i]!=b[i]){
			cout<<"rated";
			return 0;
		}
		if (a[i]>a[i-1]&&i>0){
			u++;
		}
	}
	if (u>0){
		cout<<"unrated";
		return 0;
	}
	cout<<"maybe";
	return 0;
}
 
