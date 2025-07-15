#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n, m, q, i, k, j;
	cin>>n>>m>>q;
	cin>>i>>k;
	cin>>j;
	int tmp = i;
	i = min(i,k);
	if (tmp!=i){
		k=tmp;
	}
	int cnt=0;
	if (j<i){
		cnt = i-1;
		
	}
	else if (j>k){
		cnt=n-k;
		
	}
	else{
		cnt= (int)((k-i)/2);
	}
	cout<<cnt<<endl;
}

int main(){
	int t;
	cin>>t;
	while (t--){
		solve();
	}
	return 0;
}
