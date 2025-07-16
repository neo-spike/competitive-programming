#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,m;
	cin>>n>>m;
	vector <int> a(n);
	int cnt=0;
	for (int i=0; i<n; i++){
		cin>>a[i];
	}

	set<int> b(a.begin(), a.end());

	for (int i=1; i<=m; i++){
		bool match=false;
		for (int k: b){
			if (k==i){
				match=true;
				break;
			}
		}
		if (match==false){
			cnt++;
		}
	}
	cout<<cnt<<endl;
}

int main(){
	int t;
	cin>>t;
	while (t--){
		solve();
	}
}
