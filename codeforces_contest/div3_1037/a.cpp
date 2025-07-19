#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while (t--){
		string n;
		cin>>n;
		int x=1000;
		for (int i=0; i<n.size(); i++){
			int a = n[i]-'0';
			x=min(a,x);
		}
		cout<<x<<endl;
	}
	return 0;
}
