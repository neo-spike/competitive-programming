#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n, k;
	cin>>n>>k;
	vector <long long> a(n);
	vector <long long> b(n);
	long long ma=0;
	long long mi=1e9;
	for (int i=0; i<n; i++){
		cin>>a[i];
		ma = max(ma, a[i]);
		mi = min(mi, a[i]);
	}
	bool noElem=true;
	bool sumCheck=true;
	long long sum=0;
	for (int i=0; i<n; i++){
		cin>>b[i];
		if (b[i]!=-1){
			long long p = a[i]+b[i];
			if (sum!=0){
				if (p!=sum){
					cout<<0<<endl;
					return;
				}
			}
			else{
				sum=p;
			}
			noElem=false;
		}
	}
	if (sumCheck==false){
		cout<<0<<endl;
		return;
	}
	if (noElem){
		cout<<k-ma+mi+1<<endl;
		return;
	}
	for (int i=0; i<n; i++){
		if (a[i]>s||s-a[i]>k){
			cout<<0<<endl;
			return;
		}

	}
	cout<<1<<endl;


}

int main(){
	int t;
	cin>>t;
	while (t--){
		solve();
	}
	return 0;
}

