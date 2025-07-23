#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	vector <int> a(n); 
	vector <int> b(n);
	
	for (int i=0; i<n; i++){
		cin>>a[i];
	}
	int m_b=0;
	for (int i=0; i<n; i++){
		cin>>b[i];
		m_b=max(m_b, b[i]);
	}

	int s=0;
	
	int x=0;
	
	while (x<=n-1){
		int l=b[x];
		int su=0;
		for (int i=0; i<n; i++){
			if (a[i]>0){
				if (b[i]<=l){
					su+=a[i];
				}
			}
		}
		//cout<<s<<" "<<su-l<<" "<<l<<endl;
		s=max(s, su-l);
		//cout<<l<<endl;
		x++;
	}
	cout<<s<<endl;
}

int main(){
	int t;
	cin>>t;
	while (t--){
		solve();
	}
	return 0;
}
