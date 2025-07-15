#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while (t--){
		float x,y,k;
		cin>>x>>y>>k;
		int l,r;
		cout<<max(2*((int)((x+k-1)/k))-1, 2*((int)((y+k-1)/k)))<<endl;	

	}
	return 0;
}
